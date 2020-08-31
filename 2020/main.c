#include <stdio.h>
#define ABS(x) ((x>0)?(x):(-x))

int main(void){
	int numbers = 0, ac[100];
	while(scanf("%d",&numbers) == 1){
		if(!numbers) continue;
		int i,if_ch = 1,temp;
		for(i = 0; i < numbers; i++) scanf("%d",&ac[i]);
		while(if_ch){
			if_ch = 0;
			for(i = 0; i < numbers - 1; i++){
				if(ABS(ac[i]) < ABS(ac[i+1])){
					temp = ac[i+1];
					ac[i+1] = ac[i];
					ac[i] = temp;
					if_ch = 1;
				}
			}
		}
		for(i = 0; i < numbers; i++){ 
			if(i) printf(" ");
			printf("%d",ac[i]);
		}
		printf("\n");
	}
	return 0;
}
