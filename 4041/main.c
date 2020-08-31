#include <stdio.h>

int main(void){
	int numbers,count;
	scanf("%d",&numbers);
	for(count = 0; count < numbers; count++){
		long astp[40] = {1,2};
		int i, stairs;
		scanf("%d",&stairs);
		if(stairs < 2) printf("0\n");
		else{
			for(i = 2; i < stairs; i++)
				astp[i] = astp[i-1] + astp[i-2];
			printf("%ld\n",astp[stairs-2]);
		}
	}
	return 0;
}

