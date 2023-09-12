#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,i;
    scanf("%d",&m);
    double sum;
    while(m--)
    {
        sum=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++) sum=sum+(1/((pow((-1),(i+1)))*i));
        printf("%.2lf\n",sum);
    }
    return 0;
}