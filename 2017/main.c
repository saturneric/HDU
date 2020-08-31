#include <stdio.h>

int main(void){
	long numbers = 0;
	scanf("%ld",&numbers);
	long i = 0;
	char string[1024];
	for(i = 0; i < numbers; i++){
		scanf("%s",string);
		long count = 0, temp = 0;
		while(string[count] != '\0'){
			if(string[count] > 47 && string[count] < 58) temp++;
			count++;
		}
		printf("%ld\n",temp);
	}
	return 0;
}
