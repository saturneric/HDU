#include <stdio.h>

unsigned long long c(int f_n, int l_n);

int main(void){
	int numbers, if_first = 1;
	while(scanf("%d",&numbers) != EOF){
		int i,j;
		if(if_first) if_first = 0;
			else printf("\n");
		for(i = 0; i < numbers; i++){
			for(j = 0; j <= i; j++){
				if(j) printf(" ");
				printf("%lld",c(j,i));
			}
			printf("\n");
		}
	}
	printf("\n");
	return 0;
}

unsigned long long c(int f_n, int l_n){
	unsigned long long res = 1;
	int i;
	if(f_n * 2 > l_n) f_n = l_n - f_n;
	if(!f_n) return 1;
	for(i = 0; i < f_n; i++) res *= l_n - i;
	for(i = 1; i <= f_n; i++) res /= i;
	return res;
}
