#include <stdio.h>
#include <math.h>
int main(void){
	int n = 0, m = 0;
	while(scanf("%d %d",&n,&m) == 2){
		int i = 0;
		double all = 0.0, temp = n;
		for(i = 0; i < m; i++){
			all += temp;
			temp = sqrt(temp);
		}
		printf("%.2lf\n",all);
		getchar();
	}
	return 0;
}
