#include <stdio.h>
#define ABS(x) (((x)>0)?(x):(-(x)))

struct point{
	double x,y;
};

struct retangle{
	struct point p1,p2;
};

double in_target(struct retangle f_a, struct retangle f_b);
double field(struct retangle t_a);

int main(void){
	struct retangle rtg[2], t_rg[2];
	while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&rtg[0].p1.x,&rtg[0].p1.y,&rtg[0].p2.x,&rtg[0].p2.y,&rtg[1].p1.x,&rtg[1].p1.y,&rtg[1].p2.x,&rtg[1].p2.y) == 8){
		int max = 0, i, count = 0;
		if(field(rtg[0]) < field(rtg[1])){
			max = 1;
		}
		t_rg[0].p1.x = rtg[max].p1.x;
		t_rg[0].p2.x = rtg[max].p2.x;
		t_rg[1].p1.x = rtg[!max].p1.x;
		t_rg[1].p2.x = rtg[!max].p2.x;
		double t_f = in_target(t_rg[0], t_rg[1]);
		t_rg[0].p1.x = rtg[max].p1.y;
		t_rg[0].p2.x = rtg[max].p2.y;
		t_rg[1].p1.x = rtg[!max].p1.y;
		t_rg[1].p2.x = rtg[!max].p2.y;
		t_f *= in_target(t_rg[0], t_rg[1]);
		printf("%.2lf\n",t_f);
	}
	return 0;
}

double in_target(struct retangle f_a, struct retangle f_b){
	int count = 0;
	double x1 = f_a.p1.x, x2 = f_a.p2.x, temp, p_x1, p_x2;
	if(f_a.p1.x > f_a.p2.x){
		temp = x1;
		x1 = x2;
		x2 = temp;
	}
	if(f_b.p1.x > x1 && f_b.p1.x < x2) p_x1 = f_b.p1.x, p_x2 = f_b.p2.x, count++;
	if(f_b.p2.x > x1 && f_b.p2.x < x2) p_x1 = f_b.p2.x, p_x2 = f_b.p1.x, count++;
	double inl = 0.0, a_l = ABS(f_b.p1.x - x1), b_l = ABS(f_b.p2.x - x2);
	if(count == 0) inl = 0.0;
	else if(count == 2) inl = ABS(f_b.p1.x - f_b.p2.x);
	else if(ABS(p_x2 - x1) > ABS(p_x2 - x2)){
		inl = ABS(p_x1 - x2);
	}
	else{
		inl = ABS(p_x1 - x1);
	}
	return inl;
}

double field(struct retangle t_a){
	double r_f = ABS(t_a.p1.x - t_a.p2.x) * ABS(t_a.p1.y - t_a.p2.y);
	return r_f;
}


