#include <stdio.h>

int main(void){
	int numbers;
	scanf("%d",&numbers);
	int count, i, station, all;
	for(count = 0; count < numbers; count++){
		scanf("%d",&station);
		all = 3;
		for(i = 0; i < station; i++)
			all = (all - 1) * 2;
		printf("%d\n",all);
	}
	return 0;
}
