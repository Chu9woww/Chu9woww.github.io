#include<stdio.h>
double f(double x)
{
    double a;
    if(x>0) a=x*x+1;
    else if(x<0) a=-x;
    else a=100;
    return a;
}
int main()
{
    double x,n;
    while(scanf("%lf",&x)!=EOF)
    {
        n=f(x);
        printf("%.1lf\n",n);
    }
    return 0;
}