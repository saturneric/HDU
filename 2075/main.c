#include <stdio.h>

int main(void){
	int numbers;
	scanf("%d",&numbers);
	int i;
	for(i = 0; i < numbers; i++){
		unsigned long long a,b;
		scanf("%llu %llu",&a,&b);
		if(!(a%b)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
