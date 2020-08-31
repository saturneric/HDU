#include <stdio.h>

int main(void){
	int numbers;
	scanf("%d",&numbers);
	int i;
	char phone[12],short_num[7]={'6'};
	for(i = 0; i < numbers; i++){
		scanf("%s",phone);
		int k;
		for(k = 6; k < 11; k++) short_num[k-5] = phone[k];
		short_num[6] = '\0';
		printf("%s\n",short_num);
	}
	return 0;
}
