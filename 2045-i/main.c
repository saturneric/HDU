#include<stdio.h>
int main(){
    int m;
    double ans[51];
    ans[1] = 3;
    ans[2] = 6;
    ans[3] = 6;
    for(int i=4;i<51;i++){
        ans[i] = ans[i-1] + 2*ans[i-2];
    }
    while(scanf("%d", &m)!=EOF){
        printf("%.0lf\n", ans[m]);
    }
}
