#include <stdio.h>
#define PI 3.1415927
#define TQ(x) ((x)*(x)*(x))

int main(void){
	double r = 0.0;
	while(scanf("%lf",&r) == 1){
		printf("%.3lf\n",(4.0/3.0)*PI*TQ(r)); 
		getchar();
	}
	return 0;
}
