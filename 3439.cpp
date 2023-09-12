#include<stdio.h>
int main()
{
    int num,n,m,t,sum=0;
    scanf("%d",&num);
    while(num--)
    {
        int i,j;
        scanf("%d %d",&n,&m);
        if(n>m)
        {
            t=n;
            n=m;
            m=t;
        }
        for(i=n;i<=m;i++)
        {
            for(j=1;j<=m;j++)
            if(i==j*j) sum=sum+i;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}