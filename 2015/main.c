#include <stdio.h>

int main(void){
	int n = 0, m = 0;
	while(scanf("%d %d",&n,&m) == 2){
		int i = 0, number = 2, count = 1, all = 0, if_print = 0;
		for(i = 0; i < n; i++){
			all += number;
			count++;
			if(count >  m){
				if(if_print) printf(" ");
				all /= --count;
				printf("%d",all);
				all = 0;
				count = 1;
				if_print = 1;
			}
			number += 2;
		}
		if(count > 1)
			all /= --count;
		else all = 0;
		if(all != 0) {
			if(if_print) printf(" ");
			printf("%d",all);
		}
		printf("\n");
		getchar();
	}
	return 0;
}
