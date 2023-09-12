#include<stdio.h>
#include<math.h>
double f(double x,double n)
{
    double sum,i;
    sum=sqrt(1+x);
    for(i=2;i<=n;i++) sum=sqrt(i+sum);
    return sum;
}
int main()
{
    double a,num,b;
    scanf("%lf %lf",&a,&b);
    num=f(a,b);
    printf("%.2lf",num);
    return 0;
}