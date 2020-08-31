#include <stdio.h>

unsigned long long c(int n, int m);

int main(void){
	unsigned long long q[21]={0,0,1,2},q2[21]={0,0,1},temp = 1;
	int i;
	for(i = 4; i <= 20; i++){
		q2[i-1] = q[i-2] + (i-2) * q2[i-2];
		q[i] = (i-1) * q2[i-1];
	}
	int numbers,m,n;
	scanf("%d",&numbers);
	for(i = 0; i < numbers; i++){
		scanf("%d %d",&n,&m);
		printf("%llu\n",c(n,m) * q[m]);
	}
	return 0;
}

unsigned long long c(int n, int m){
	int i = 0;
	unsigned long long temp = 1, temp2 = 1;
	if(m > n/2) m = n-m;
	for(i = 0; i < m; i++){
		temp *= n-i;
		temp2 *= i+1;
	}
	return temp/temp2;
}
