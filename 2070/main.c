#include <stdio.h>

int main(void){
	int numbers,i;
	unsigned long long fib[51]={0,1};
	for(i = 2; i <= 50; i++){
		fib[i] = fib[i-1] + fib[i-2];
	}
	while(scanf("%d",&numbers) && numbers >= 0){
		printf("%llu\n",fib[numbers]);
	}
	return 0;
}
