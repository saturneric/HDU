#include<stdio.h> 
unsigned long long f[21],sum;int main(){int i,t,n;f[1]=0;f[2]=1;for(i=3;i<21;i++)f[i]=(i-1)*(f[i-1]+f[i-2]);scanf("%d",&t);while(t--){scanf("%d",&n);sum=1;for(i=1;i<=n;i++)sum*=i;printf("%.2lf%%\n",f[n]*100.0/sum);}return 0;}
