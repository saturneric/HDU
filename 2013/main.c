#include <stdio.h>

int main(void){
	int days = 0;
	while(scanf("%d",&days) == 1){
		int i = 0, numbers = 1;
		for(i = 1; i < days; i++){
			numbers += 1;
			numbers *= 2;
		}
		printf("%d\n",numbers);
		getchar();
	}
	return 0;
}
