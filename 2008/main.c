#include <stdio.h>

int main(void){
	int numbers = 0;
	while(scanf("%d",&numbers) == 1){
		if(!numbers) continue;
		int temp = 0, a = 0, b = 0, c = 0;
		double input = 0;
		while(temp++ < numbers){
			scanf("%lf",&input);
			if(input < 0) a += 1;
			else if(input == 0) b += 1;
			else c += 1;
		}
		printf("%d %d %d\n",a,b,c);
		getchar();
	}
	return 0;
}
