#include <stdio.h>
#include <math.h>
#define MIN(x,y) ((x)>(y)?(y):(x))

int main(void){
	unsigned long long  n,m;
	int count = 0;
	register unsigned long long i,a1;
	while(scanf("%llu %llu",&n,&m) == 2 && n+m){
		register unsigned long long num = sqrt(2*m);
		for(i = num; i >= 1; i--){
			a1 = (m-((i-1)*i)/2)/i;
			if(a1 > 0 && m == i*a1+(i*(i-1))/2) printf("[%llu,%llu]\n",a1,a1+i-1);
		}   
		printf("\n");
	}
	return 0;
}
