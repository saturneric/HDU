#include <stdio.h>

int main(void){
	int numbers,i;
	scanf("%d",&numbers);
	for(i = 0; i < numbers; i++){
		char ch[2];
		int y;
		scanf("%s %d",ch,&y);
		if(ch[0] >= 'A' && ch[0] <= 'Z'){
			printf("%d\n",ch[0]-64+y);
		}
		else{
			printf("%d\n",(-ch[0])+96+y);
		}
	}
	return 0;
}
