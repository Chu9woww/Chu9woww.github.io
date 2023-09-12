#include<stdio.h>
#include<cmath>
int main()
{
    double a,b,c,x,x1,x2;
    scanf("%lf%lf%lf",&a,&b,&c);
    x=pow(b,2)-4*a*c;
    x=sqrt(x);
    x1=(-b+x)/2/a;
    x2=(-b-x)/2/a;
    if(x1>x2) printf("%.2lf %.2lf",x1,x2);
    else printf("%.2lf %.2lf",x2,x1);
    return 0;
}