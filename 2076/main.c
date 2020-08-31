#include <stdio.h>
#define ABS(x) ((x)>0?(x):(-(x)))

int main(void){
	int numbers;
	scanf("%d",&numbers);
	int i;
	for(i = 0; i < numbers; i++){
		long hour, minute, second;
		double h_a, m_a;
		scanf("%ld %ld %ld",&hour, &minute, &second);
		if(hour > 12) hour -= 12;
		h_a = (hour * 3600 + minute * 60 + second)/43200.0;
		m_a = (minute * 60 + second)/3600.0;
		double angle = ABS(h_a - m_a) * 360.0;
		if(angle > 180.0) angle = 360.0 - angle;
		printf("%d\n",(int)angle);
	}
	return 0;
}
