#include <stdio.h>

int main(void){
	int numbers;
	scanf("%d",&numbers);
	int i;
	for(i = 0; i < numbers; i++){
		int ah, am, as, bh, bm, bs;
		scanf("%d %d %d %d %d %d",&ah,&am,&as,&bh,&bm,&bs);
		int cm, ch, cs;
		cs = as + bs;
		cm = cs / 60;
		cs %= 60;
		cm += am + bm;
		ch = cm / 60;
		cm %= 60;
		ch += ah + bh;
		printf("%d %d %d\n",ch,cm,cs);
	}
	return 0;
}
