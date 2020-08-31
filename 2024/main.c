#include <stdio.h>

int main(void){
	int numbers = 0;
	while(scanf("%d",&numbers) == 1){
		int count = 0, i = 0;
		for(count  = 0; count < numbers; count++){
			char ch, string[51] = {'\0'};
			int if_pass = 1, if_read = 0;
			i = 0;
			while(if_pass){
				ch = getchar();
				if(!if_read && ch > 32 && ch < 127) if_read = 1;
				if(if_read){
					if(ch != '\n') string[i++] = ch;
					else if_pass = 0;
				}
			}
			string[i] = '\0';
			i = 0;
			int if_true = 1;
			if(string[0] != 95){
				if(string[0] < 65 || string[0] > 122) if_true = 0;
					else if(string[0] > 90 && string[0] < 97) if_true = 0;
			}
			while(string[i] != '\0' && if_true){
				if(string[i] != 95){
					if(string[i] < 48) if_true = 0;
					else if(string[i] > 57 && string[i] < 65) if_true = 0;
					else if(string[i] > 90 && string[i] < 97) if_true = 0;
					else if(string[i] > 122) if_true = 0;
				}
				i++;
			}
			if(if_true) printf("yes\n");
			else printf("no\n");
		}
	}
	return 0;
}
