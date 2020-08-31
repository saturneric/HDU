#include <stdio.h>

int main(void){
	int numbers,count,c_count,i;
	double hgt[105];
	scanf("%d",&numbers);
	for(count = 0; count < numbers; count++){
		scanf("%d",&c_count);
		for(i = 0; i < c_count; i++){
			scanf("%lf",&hgt[i]);
		}
	
		int if_ch = 1; 
		double max = hgt[0];
		for(i = 0; i < c_count; i++){
				if(hgt[i] > max) max = hgt[i];
		}
		printf("%.2lf\n",max);
	}
	return 0;
}
