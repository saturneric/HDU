#include <stdio.h>

int main(void){
	char input[3] = {'\0'},temp = '\0';	
	while(scanf("%c%c%c",&input[0],&input[1],&input[2]) == 3){
		int if_cge = 1,i = 0;
		while(if_cge){
			if_cge = 0;
			for(i = 0; i<2; i++){
				if(input[i] > input[i+1]){
					temp = input[i+1];
					input[i+1] = input[i];
					input[i] = temp;
					if_cge = 1;
				}
			}
		}
		printf("%c %c %c\n",input[0],input[1],input[2]);
		getchar();
	}
	return 0;
}
