#include <stdio.h>

int main(void){
	int input;
	while(scanf("%d", &input) == 1){
		int output[10] = {0},count = 0;
		while(input > 0){
			output[count++] = input % 2;
			input /= 2;
		}
		for(input = count-1; input >=0; input--) printf("%d",output[input]);
		printf("\n");
	}
	return 0;
}
