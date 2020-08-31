#include <stdio.h>

int main(void){
	int i;
	double p[20] = {0,1,1.0/2.0,2.0/3},p1[20] = {0,0,1.0/2.0};
	for(i = 4; i <= 20; i++){
		p1[i-1] = ((1.0/(i-1)) * p[i-2]) + (((double)(i-2)/(i-1)) * p1[i-2]);
		p[i] = (1.0/i) + p1[i-1] * ((double)(i-1)/i);
	}
	int numbers,temp;
	scanf("%d",&numbers);
	for(i = 0; i< numbers; i++){
		scanf("%d",&temp);
		printf("%.2lf%%\n",(1.0-p[temp])*100);
	}
	return 0;
}
