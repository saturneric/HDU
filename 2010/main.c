#include <stdio.h>
#define THQ(x) ((x)*(x)*(x))

int main(void){
	int m = 0, n = 0;
	while(scanf("%d %d",&m,&n) == 2){
		int i = 0, tar[3], j = 0, count = 0, temp = 0;
		for(i = m; i <= n; i++){
			temp = i;
			for(j = 0; j < 3; j++){
				tar[j] = temp%10;
				temp /= 10;
			}
			if(i == THQ(tar[0]) + THQ(tar[1]) + THQ(tar[2])){
				if(count) printf(" ");
				printf("%d",i);
				count++;
			}
		}
		if(!count) printf("no\n");
		else printf("\n");
		getchar();
	}
	return 0;
}
