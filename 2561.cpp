#include<stdio.h>
int main()
{
    int i,j,n;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            if(i==j) printf("%d*%d=%d\n",j,i,i*j);
            else printf("%d*%d=%d ",j,i,i*j);
        }
    }
    return 0;
}