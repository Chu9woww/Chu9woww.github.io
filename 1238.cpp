#include<stdio.h>
#include<math.h>
int main()
{
    int i,j;
    double a[1000],n,m;
    for(i=0;i<1000;i++) a[i]=0;
    while(scanf("%lf %lf\n",&n,&m)!=EOF)
    {
        a[0]=n;
        for(i=0;i<1000;i++) a[i+1]=sqrt(a[i]);
        double sum=0;
        for(j=0;j<m;j++) sum=sum+a[j];
        printf("%.2lf\n",sum);
    }
    return 0;
}