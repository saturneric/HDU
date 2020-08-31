#include <stdio.h>

int main(void){
	int numbers;
	while(scanf("%d",&numbers) == 1){
		int i, number[65535];
		long j, temp;
		for(i = 0; i < numbers; i++) scanf("%d",&number[i]);	
		for(j = 1; j <= 2147483647L; j++){
			temp = j;
			int if_ok = 1;
			for(i = 0; i < numbers; i++)
				if(j % number[i]) if_ok = 0;
			if(if_ok){
				printf("%ld\n",j);
				break;
			}
		}
	}
	return 0;
}
