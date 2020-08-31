#include <stdio.h>

int main(void){
	int numbers = 1, ac[100] = {};
	while(scanf("%d",&numbers) == 1){
		if(!numbers) continue;
		int i = 0, min = 0, temp = 0, index = 0;
		for(i = 0; i < numbers; i++){
			scanf("%d",&ac[i]);
			if(!i) min = ac[i];
			else if(min > ac[i]){
				min = ac[i];
				index = i;
			}
		}
		temp = ac[0];
		ac[0] = min;
		ac[index] = temp;
		for(i = 0; i < numbers; i++){
			if(i) printf(" ");
			printf("%d",ac[i]);
		}
		printf("\n");
		getchar();
	}
	return 0;
}
