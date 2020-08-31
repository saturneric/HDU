#include <stdio.h>

int main(void){
	int numbers, i, count;
	scanf("%d",&numbers);
	long a, b;
	for(count = 0; count < numbers; count++){
		scanf("%ld %ld",&a,&b);
		long sum = 0;
		int if_yes = 0;
		for(i = 1; i < a; i++)
			if(!(a % i)) sum += i; 
		if(sum == b) if_yes = 1;
		for(i = 1, sum = 0; i < b; i++)
			if(!(b % i)) sum += i;
		if(sum == a && if_yes) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
