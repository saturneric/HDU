#include <stdio.h>
#include <string.h>

int main(void){
	char string[101];
	while(scanf("%s",string) != EOF){
		char max = '\0';
		int i, numbers = strlen(string);
		for(i = 0; i < numbers; i++)
			if(string[i] > max) max = string[i];

		for(i = 0; i < numbers; i++){
			printf("%c",string[i]);
			if(string[i] == max) printf("(max)");
		}
		printf("\n");

	}
	return 0;
}
