#include <stdio.h>

int main(void){
    int score = 0;
    while(scanf("%d",&score) == 1){
        if(score >= 0 && score <= 100)
            if(score >= 90) printf("A\n");
            else if(score >= 80) printf("B\n");
            else if(score >= 70) printf("C\n");
            else if(score >= 60) printf("D\n");
            else printf("E\n");
        else printf("Score is error!\n");
        getchar();
    }
    return 0;
}
