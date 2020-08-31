#include <stdio.h>

int main(void){
	int a, b, c = 1000, t = 1;
	a = a % c;
	while(scanf("%d %d",&a,&b) == 2 && a+b){
		t = 1;
		while(b != 0){
			if(b & 1) t = t * a % c;
			b >>= 1;
			a = a * a % c;
		}
		printf("%d\n",t);
	}
	return 0;
}
