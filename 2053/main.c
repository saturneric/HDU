#include <stdio.h>
#include <string.h>

char a[409600],b[409600];
int todo(char *t);

int main(void){
	while(scanf("%s %s",a,b) == 2){
		todo(a),todo(b);
		!strcmp(a,b)?printf("YES\n"):printf("NO\n");
	}
	return 0;
}

int todo(char *t){
	long len = strlen(t), count = len-1;
	if(strchr(t,'.') != NULL)
		while(t[count] == '0'){
			t[count] = '\0';
			count--;
		}
	if (t[count] == '.') t[count] = '\0';
	return 0;
}
