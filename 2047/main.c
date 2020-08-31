#include <stdio.h>

int main(void){
	int count,i;
	unsigned long long n[3][40]={0};
	n[0][0] = 1, n[1][0] = 1, n[2][0] = 1;
	n[0][1] = 3, n[1][1] = 2, n[2][1] = 3;
	for(i = 2; i < 40; i++){
		n[0][i] = n[0][i-1] + n[1][i-1] + n[2][i-1];
		n[1][i] = n[0][i-1] + n[2][i-1];
		n[2][i] = n[0][i-1] + n[1][i-1] + n[2][i-1];
	}
	while(scanf("%d",&count) == 1){
		printf("%llu\n",n[0][count-1]+n[1][count-1]+n[2][count-1]);
	}

	return 0;
}
