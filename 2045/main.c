#include <stdio.h>

int main(void){
	int numbers,i;
	unsigned long long n[50] = {3};
	unsigned long long count = 2, cut = 0;
	for(i = 1; i < 50; i++){
		cut = count - cut;
		count *= 2;
		n[i-1] = cut*3;
	}
	while(scanf("%d",&numbers) == 1){
		if(numbers == 1){
			printf("3\n");
			continue;
		}
		printf("%llu\n",n[numbers-2]);
	}
	return 0;
}
