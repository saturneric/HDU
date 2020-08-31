#include <stdio.h>

int main(void){
	int numbers, count;
	scanf("%d\n",&numbers);
	for(count = 0; count < numbers; count++){
		int if_read = 1, a = 0, e = 0, i = 0, o = 0, u = 0;
		int if_work = 0;
		char ch;
		while(if_read){
			ch = getchar();
			if(ch > 31 && !if_work) if_work = 1;
			if(if_work){
				switch(ch){
					case 'a':
						a++;
					break;
					case 'e':
						e++;
					break;
					case 'i':
						i++;
					break;
					case 'o':
						o++;
					break;
					case 'u':
						u++;
					break;
					default:
					break;
				}
			}
			if(ch == '\n') if_read = 0, if_work = 0;
		}
		if(count) printf("\n");
		printf("a:%d\n",a);
		printf("e:%d\n",e);
		printf("i:%d\n",i);
		printf("o:%d\n",o);
		printf("u:%d\n",u);
	}
	return 0;
}
