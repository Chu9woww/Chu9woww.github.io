#include<stdio.h>
int main()
{
    int i,m,n,a,b,c,sum=0;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        for(i=m;i<=n;i++)
        {
            a=i/100;
            b=i/10%10;
            c=i%10;
            if(i==a*a*a+b*b*b+c*c*c)
            {
                printf("%d ",i);
                sum=1;
            }
        }
        if(sum==1) printf("\n");
        if(sum==0) printf("no\n");
        sum=0;
    }
    return 0;
}