#include <stdio.h>

int main(void){
	int numbers = 0;
	while(scanf("%d",&numbers) == 1){
		int temp = 0, all = 1;
		while(temp++ < numbers){
			int n = 0;
			scanf("%d",&n);
			if(n % 2) all *= n;
		}
		printf("%d\n",all);
		getchar();
	}
	return 0;
}
