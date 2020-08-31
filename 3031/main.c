#include <stdio.h>
#define ABS(x) ((x>0)?(x):(-x))

int output[1024]; 

int main(void){
	long target, idx;
	while(scanf("%ld %ld",&target,&idx) == 2){
		long i = 0, j;
		int temp;
		long raw = target;
		target = ABS(target);
		while(target > 0){
			output[i++] = target % idx;
			target = (target - (target % idx)) / idx;
		}
		if(raw < 0) printf("-");
		for(j = 0; j < i; j++){
			temp = output[i - (j + 1)];
			if(temp < 10) printf("%d",temp);
			else printf("%c",temp+55);
		}
		printf("\n");
	}
	return 0;
}
