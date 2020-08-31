#include <stdio.h>
#define TW(x) ((x)*(x))

int main(void){
	int numbers;
	scanf("%d",&numbers);
	int i;
	for(i = 0; i < numbers; i++){
		int k,j;
		int min = 100;
		scanf("%d %d",&k,&j);
		int c;
		for(c = 0; c < k; c++){
			scanf("%d",&j);
			if(min > j) min = j;
		}
		printf("%d\n",TW(100-min));
	}
	return 0;
}
