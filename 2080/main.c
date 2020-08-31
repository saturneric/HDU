#include <stdio.h>
#include <math.h>
#define PI 3.1415927
#define ZZS(x) ((x)>=0?1:-1)
#define ABS(x) ((x)>=0?(x):(-(x)))

double agl_ch(double x,double y);

int main(void){
	int numbers;
	scanf("%d",&numbers);
	int i;
	double x1,y1,x2,y2;
	for(i = 0; i < numbers; i++){
		scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
		double a1 = agl_ch(x1, y1), a2 = agl_ch(x2, y2);
		double a = ABS(a1 - a2);
		if(a > 180) a = 360 - a;
		printf("%.2lf\n",a);
	}
	return 0;
}

double agl_ch(double x,double y){
	double agl = atan(y/x) *(180/PI);
	if(ZZS(x) > 0 && ZZS(y) < 0) agl = 360 + -ABS(agl);
	else if(ZZS(x) < 0 && ZZS(y) > 0) agl = -ABS(agl) + 180;
	else if(ZZS(x) < 0 && ZZS(y) < 0) agl = ABS(agl) + 180;
	return agl;
}
