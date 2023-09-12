#include<stdio.h>
int main()
{
    int n,i,j,a[1000][1000],sum=0;
    while(scanf("%d",&n)&&n)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++) scanf("%d",&a[i][j]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j]!=a[j][i]) sum+=1;
            }
        }
        if(sum!=0) printf("no\n");
        else printf("yes\n");
        sum=0;
    }
    return 0;
}