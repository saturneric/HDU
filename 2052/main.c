#include <stdio.h>

int main(void){
	long th,i;
	while(scanf("%ld",&th) == 1){
		int state = 0;
		for(i = 1; i <= th; i++){
			if(!(th % i)) state = !state;
		}
		printf("%d\n",state);
	}
	return 0;
}
