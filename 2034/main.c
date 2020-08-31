#include <stdio.h>

int main(void){
	int n, m, a[110] = {0}, b[110] = {0},c[110] = {0};
	while(scanf("%d %d",&n,&m) != EOF){
		if(!m && !n) continue;
		int i;
		for(i = 0; i < n; i++) scanf("%d",&a[i]);
		for(i = 0; i < m; i++) scanf("%d",&b[i]);
		int j,count = 0;
		for(i = 0; i < n; i++){
			int if_in = 0;
			for(j = 0; j < m; j++)
				if(a[i] == b[j]){
					if_in = 1;
					break;
				}
			if(!if_in) c[count++] = a[i];
		}
		int if_change = 1, temp;
		while(if_change && count > 1){
			if_change = 0;
			for(i = 0; i < count - 1; i++){
				if(c[i] > c[i+1]){
					temp = c[i];
					c[i] = c[i+1];
					c[i+1] = temp;
					if_change = 1;
				}
			}
		}
		if(count)
			for(i = 0; i < count; i++){
				printf("%d ",c[i]);
			}
		else printf("NULL");
		printf("\n");
	}
	return 0;
}
