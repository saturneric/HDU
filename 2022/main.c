#include <stdio.h>
#define ABS(x) (((x)>0)?(x):(-x))

int main(void){
	int m ,n;
	while(scanf("%d %d",&m,&n) == 2){
		int i,j,if_init = 0;
		long temp, target;
		int t_i = 0, t_j = 0;
		for(i = 0 ; i < m; i++)
			for(j = 0; j < n; j++){
				scanf("%ld",&temp);
				if(!if_init) target = temp, if_init = 1;
				else if(ABS(temp) > ABS(target)){
					target = temp;
					t_i = i;
					t_j = j;
				}
			}
		printf("%d %d %ld\n",t_i+1,t_j+1,target);
	}
	return 0;
}
