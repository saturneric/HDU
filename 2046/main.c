#include <stdio.h>

int main(void){
	int count, i;
	unsigned long long n[50] = {1,2};
	for(i = 2; i < 50; i++){
		n[i] = n[i-2] + n[i-1];
	}
	while(scanf("%d",&count) == 1){
		printf("%lld\n",n[count-1]);
	}
	return 0;
}
