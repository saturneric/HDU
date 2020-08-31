#include <stdio.h>
#include <string.h>

int main(void){
	int numbers = 0;
	scanf("%d",&numbers);
	int i,j;
	char string[65535], a_string[65535];
	for(i = 0; i < numbers; i++){
		scanf("%s",string);
		int len = strlen(string);
		for(j = 0; j < len; j++) a_string[len - (j+1)] = string[j];
		a_string[len] = '\0';
		if(!strcmp(string,a_string)) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}
