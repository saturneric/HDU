#include <stdio.h>

int main(void){
	int numbers = 0;
	while(scanf("%d",&numbers) == 1){
		int count = 0, temp[120] = {0}, max = 0, min = 0;
		double avg = 0.0;
		while(count < numbers){
			scanf("%d",&temp[count]);
			if(!count){
				max = temp[count];
				min = temp[count];
			}
			else{
				if(max < temp[count]) max = temp[count];
				if(min > temp[count]) min = temp[count];
			}
			count++;
		}
		for(count = 0; count < numbers; count++)
			if(temp[count] != max && temp[count] != min) avg += (double)temp[count] / (double)(numbers-2);
		printf("%.2lf\n",avg);
		getchar();
	}
	return 0;
}
