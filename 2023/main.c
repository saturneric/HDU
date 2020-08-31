#include <stdio.h>

int main(void){
	int n, m;
	while(scanf("%d %d",&n, &m) == 2){
		int student[50][5] = {0};
		double avg[5] = {0.0};
		int i, j;
		for(i = 0; i < n; i++)
			for(j = 0; j < m; j++) scanf("%d",&student[i][j]);
		for(i = 0; i < n; i++){
			double all = 0.0;
			for(j = 0; j < m; j++) all += student[i][j];
			all /= (double) m;
			if(i) printf(" ");
			printf("%.2lf",all);
		}
		printf("\n");
		for(i = 0; i < m; i++){
			double all = 0.0;
			for(j = 0; j < n; j++) all += student[j][i];
			all /= (double) n;
			if(i) printf(" ");
			avg[i] = all;
			printf("%.2lf",all);
		}
		printf("\n");
		int good = 0;
		for(i = 0; i < n; i++){
			int if_good = 1;
			for(j = 0; j < m; j++){
				if(student[i][j] < avg[j]){
					if_good = 0;
					break;
				}
			}
			if(if_good) good++;
		}
		printf("%d\n\n",good);
		getchar();
	}
	return 0;
}
