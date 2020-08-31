#include <stdio.h>
#include <math.h>

int main(void){
	int x = 0, y = 0;
	while(scanf("%d %d",&x,&y) == 2){
		int i = 0, temp = 0, j = 0, if_ass = 1;
		if(!x && !y) continue;
		for(i = x; i <= y; i++){
			int if_ss = 1;
			temp = i * i + i + 41;
			if(!(temp % 2)) if_ss = 0;
			else for(j = 2 ; j <= sqrt(temp); j++){
				if(!(temp % j)){
					if_ss = 0;
					break;
				}
			}
			if(!if_ss){
				printf("Sorry\n");
				if_ass = 0;
				break;
			}
		}
		if(if_ass) printf("OK\n");
		getchar();
	}
	return 0;
}
