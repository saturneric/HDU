#include <stdio.h>

int main(void){
	int numbers = 0;
	scanf("%d",&numbers);
	int count = 0, m = 0;
	while(count++ < numbers){
		scanf("%d",&m);
		int i = 0;
		double all = 1.0;
		for(i = 2 ; i <= m; i++){
			if(!(i % 2)) all -= 1.0/i;
			else all += 1.0/i;
		}
		printf("%.2lf\n",all);
	}
	return 0;
}
