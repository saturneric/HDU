#include <stdio.h>

struct tv_i{
	int start;
	int end;
};

int main(void){
	int numbers;
	struct tv_i	tv[100];
	while(scanf("%d",&numbers) == 1 && numbers){
		int i, temp;
		for(i = 0; i < numbers; i++) scanf("%d %d",&tv[i].start,&tv[i].end);
		int if_change = 1;
		while(if_change){
			if_change = 0;
			for(i = 0; i < numbers-1; i++){
				if(tv[i].end > tv[i+1].end){
					temp = tv[i].end;
					tv[i].end = tv[i+1].end;
					tv[i+1].end = temp;
					temp = tv[i].start;
					tv[i].start = tv[i+1].start;
					tv[i+1].start = temp;
					if_change = 1;
				}
			}
		}
		int rtv = 0,nowt = 0;
		for(i = 0; i < numbers; i++){
			if(tv[i].start >= nowt){
				rtv++;
				nowt = tv[i].end;
				
			}
		}
		printf("%d\n",rtv);
	}
	return 0;
}
