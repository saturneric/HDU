#include<stdio.h>
double max(double a,double b)  //求两者中大的
{
	return a>b?a:b;
}
double min(double c,double d)  //求两者中小的
{
	return c<d?c:d;
}
void solve()
{
	double x1,y1,x2,y2,x3,y3,x4,y4,t;
	while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4)!=EOF)
	{
		if(x1>x2)   t=x1,x1=x2,x2=t;// 保证x2>x1。符合图中的情况。
		if(y1>y2)   t=y1,y1=y2,y2=t;//同上
		if(x3>x4)   t=x3,x3=x4,x4=t;//同上
		if(y3>y4)   t=y3,y3=y4,y4=t;//同上
		double l=min(x2,x4)-max(x1,x3);// 求宽
		double d=min(y2,y4)-max(y1,y3);// 求高。
		double s=l*d; //求面积。
		printf("%.2lf\n",max(x1,x3)>min(x2,x4)||max(y1,y3)>min(y2,y4)?0:s);//如果高或宽小于0解为0，即没有相交的部分，否则输出面积
	}
}
int main()
{
	solve();//问题解决。
	return 0;
}

