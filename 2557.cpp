#include<stdio.h>
#include<math.h>
double f(double x)
{
    if(x<0) return sin(x)+fabs(x);
    if(x==0) return 0;
    if(x>0&&x<10) return log(x)/log(2);
    if(x>=10) return x*x;
}
int main()
{
    int n;
    double x,a;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lf",&x);
        a=f(x);
        printf("%.2lf\n",a);
    }
    return 0;
}