#include <stdio.h>

int main(void){
	int x,y;
	while(scanf("%d %d",&x,&y) == 2){
		int i,k;
		for(i = 0; i <= y+1; i++){
			for(k = 0; k <= x+1; k++){
				if((!i && !k) || (i == y+1 && k == x+1)) printf("+");
				else if((!i && k == x+1) ||(!k && i == y+1)) printf("+");
				else if(!i || i == y+1) printf("-");
				else if(!k || k == x+1) printf("|");
				else printf(" ");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
