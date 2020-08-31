#include <stdio.h>
#define MAX 65535

int main(void){
	int numbers = 1;
	long temp = 0;
	while(scanf("%d",&numbers) == 1){
		if(!numbers) continue;
		int i;
		long adult = 1,cowsa = 0, cowsb = 0, cowsc = 0;
		for(i = 1; i < numbers; i++){
			temp = cowsa;
			cowsa = adult;
			adult += cowsb;
			cowsb = temp;
		}
		printf("%ld\n",adult + cowsa + cowsb + cowsc);
		getchar();
	}
	return 0;
}
