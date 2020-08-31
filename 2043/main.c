#include <stdio.h>
#include <string.h>

int main(void){
	int numbers;
	scanf("%d",&numbers);
	int count, i;
	char ch, string[50];
	for(count = 0; count < numbers; count++){
		scanf("%s",string);
		int len = strlen(string);
		int if_one = 0, if_a = 0, if_b = 0, if_c = 0, if_d = 0, temp = if_one, if_ok = 1;
		if(len >=8 && len <= 16){
			i = 0;
			while(string[i] != '\0'){
				temp = if_one;
				if(string[i] >= 'A' && string[i] <= 'Z') if_one++, if_a = 1;
				else if(string[i] >= 'a' && string[i] <= 'z') if_one++, if_b = 1;
				else if(string[i] >= '0' && string[i] <= '9') if_one++, if_c = 1;
				if(string[i] == '~' || string[i] == '@' || string[i] == '#' || string[i] == '!')
					if_one++, if_d = 1;
				if(string[i] == '$' || string[i] == '%' || string[i] == '^')
					if_one++, if_d = 1;
				if(if_one == temp){
					printf("NO\n");
					if_ok = 0;
					break;
				}
				i++;
			}
			if(if_ok && if_a + if_b + if_c + if_d >= 3)printf("YES\n");
			else printf("NO\n");
		}
		else printf("NO\n");
	}
	return 0;
}
