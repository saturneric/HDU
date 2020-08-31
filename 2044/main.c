#include <stdio.h>

int main(void){
	int numbers;
	scanf("%d",&numbers);
	int count,a,b;
	for(count = 0;count < numbers; count++){
		scanf("%d %d",&a,&b);
		unsigned long long step[50] = {1,2};
		b = b - a;
		if(b > 2){
			for(a = 2; a < b; a++){
				step[a] = step[a-1] +step[a-2];
			}
		}
		if(b > 0)
			printf("%lld\n",step[b-1]);
		else printf("1\n");
	}
	return 0;
}
