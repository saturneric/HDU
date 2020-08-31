#include <stdio.h>

int main(void){
	int numbers;
	scanf("%d",&numbers);
	int count,c_count,i;
	double score, credit;
	double sum_s, sum_c;
	char name[35];
	for(count = 0; count < numbers; count++){
		scanf("%d",&c_count);
		int if_do = 1;
		sum_s = 0.0, sum_c = 0.0;
		for(i = 0; i < c_count; i++){
			scanf("%s %lf %lf",name, &credit, &score);
			if (score < 60){
				if_do = 0;
			}
			else{
				sum_c += credit;
				sum_s += credit * score;
			}
		}
		if(if_do) printf("%.2lf\n",sum_s/sum_c);
		else printf("Sorry!\n");
		if(count != numbers -1) printf("\n");
	}
	return 0;
}
