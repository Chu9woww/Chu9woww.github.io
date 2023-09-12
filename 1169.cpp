#include <stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    double a=2,b=1,sum=0,t;
    for(i=1;i<=n;i++)
    {
        sum=sum+a/b;
        t=a,
        a=a+b,
        b=t;
    }
    printf("%.6lf",sum);
    return 0;
}