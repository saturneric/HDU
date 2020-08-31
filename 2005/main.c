#include <stdio.h>

int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(void){
	int year = 0, month = 0, day = 0;
	int days = 0, i = 0;
	while(scanf("%d/%d/%d",&year,&month,&day) == 3){
		days = 0;
		for(i = 0; i < month-1; i++){
			days += months[i];
			if(i == 1 && !(year % 4)){
				if(!(year % 100)){
					if(!(year % 400)) days++;
				}
				else days++;
			}
		}
		days += day;
		printf("%d\n",days);
		getchar();
	}
	return 0;
}
