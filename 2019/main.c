#include <stdio.h>

int main(void){
	int n,m;
	int ac[100];
	while(scanf("%d %d",&n,&m) == 2){
		if(!m && !n) continue;
		int i, index = 0;
		for(i = 0; i < n; i++){
			scanf("%d",&ac[i]);
			if(m > ac[i]) index++;
		}
		if(!index) printf("%d ",m);
		for(i = 0; i < n; i++){
			if(i) printf(" ");
			printf("%d",ac[i]);
			if(i == index-1) {
				printf(" %d",m);
			}
		}
		printf("\n");
		getchar();
	}
	return 0;
}
