#include <stdio.h>
#define TWQ(x) ((x)*(x))
#define THQ(x) ((x)*(x)*(x))
#define ABS(x) ((x)>0?(x):(-(x)))

int main(void){
	int m = 0, n = 0;
	while(scanf("%d %d",&m,&n) == 2){
		long o = 0,j = 0;
		int i = 0;
		if(m > n){
			i = m;
			m = n;
			n = i;
		}
		for(i = m ; i <= n; i++)
			if(ABS(i) % 2) j += THQ(i);
			else o += TWQ(i);
		printf("%ld %ld\n",o,j);
		getchar();
	}
	return 0;
}
