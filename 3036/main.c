#include <stdio.h>
#define ABS(x) ((x>0)?(x):(-x))

struct point{
	long x;
	long y;
};

int main(void){
	int numbers = 0;
	struct point points[128];
	while(scanf("%d",&numbers) == 1 && numbers){
		int i;
		double s = 0.0;
		for(i = 0; i < numbers; i++){
			scanf("%ld",&points[i].x);
			scanf("%ld",&points[i].y);
		}
		for(i = 0; i < numbers-1; i++)
			s += points[i].x * points[i+1].y - points[i].y * points[i+1].x;
		s += points[numbers-1].x * points[0].y - points[numbers-1].y * points[0].x;
		printf("%.1lf\n",0.5*ABS(s));
	}
	return 0;
}
