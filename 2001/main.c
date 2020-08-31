#include <stdio.h>
#include <math.h>
#define TWOQ(x) ((x)*(x))

int main(void){
	double x1,x2,y1,y2;
	while(scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2) == 4){
		printf("%.2lf\n",sqrt(TWOQ(x1-x2)+TWOQ(y1-y2)));
		getchar();
	}
	return 0;
}
