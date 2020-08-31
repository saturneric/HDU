#include <stdio.h>

int main(void){
	int numbers;
	scanf("%d",&numbers);
	int i,count;
	double a ,b ,c;
	for(count = 0; count < numbers; count++){
		scanf("%lf %lf %lf",&a,&b,&c);
		if(a < b + c && b < a + c && c < a + b) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
