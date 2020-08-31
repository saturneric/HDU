#include <stdio.h>

int main(void){
	double a = 0.0;
	while(scanf("%lf",&a) == 1){
		printf("%.2lf\n",a>0?a:-a);
		getchar();
	}
	return 0;
}
