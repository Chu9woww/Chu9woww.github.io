#include<stdio.h>
#include<math.h>
double jc(double n)
{
    double i,a=1.0000;
    if(n==0) return 1;
    else
    {
        for(i=1;i<=2*n;i++)
        {
            a=a*i;
        }
        return a;
    }
}
double pf(double x,double n)
{
    x=pow(x,n);
    x=pow(x,2);
    return x;
}
int main()
{
    int i,n;
    double x,a[1000],sum=0.0;
    while(scanf("%lf %d",&x,&n)!=EOF)
    {
        for(i=0;i<=n;i++) a[i]=pow(-1,i)*pf(x,i)*1.0/jc(i);
        for(i=0;i<=n;i++) sum=sum+a[i];
        printf("%.4lf\n",sum);
        sum=0;
    }
    return 0;
}