#include <stdio.h>

int main(void){
	char word[64], ch;
	int if_word = 0, if_work = 1;
	while(1){
		ch = getchar();
		if(ch == EOF) break;
		else if(ch < 32) if_work = 1;
		if(ch > 31){
			if(if_work) ch -= 32, if_work = 0;
			if(if_word) ch -= 32, if_word = 0;
			if(ch == ' ') if_word = 1;
		}
		printf("%c",ch);
	}
	return 0;
}
