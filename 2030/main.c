#include <stdio.h>

int main(void){
	int numbers;
	scanf("%d",&numbers);
	int i;
	for(i = 0; i < numbers; i++){
		int ch, string[65535];
		int if_read = 0, j = 0;
		while(1){	
			ch = getchar();
			if(ch > 32 && !if_read) if_read = 1, j = 0;
			if(if_read){
				if(ch > 122) j++;
				if(ch == '\n') break; 
			}
		}
		printf("%d\n",j/3);
	}
	return 0;
}
