#include <stdio.h>

int main(void){
	long long a,b;
	while(scanf("%llx %llx",&a,&b) == 2){
		if (a+b >= 0)
			printf("%llX\n",a+b);
		else
			printf("-%llX\n",-(a+b));
	}
	return 0;
}
