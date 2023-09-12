#include<stdio.h>
int main()
{
    int n,m,i,sum;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        for(i=m+1;i<=n;i++) sum+=i;
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}