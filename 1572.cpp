#include<stdio.h>
int main()
{
    int t,n,m,i,j,q=1,a[1000][1000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&m,&n);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++) scanf("%d",&a[i][j]);
        }
        printf("Case #%d:\n",q);
        q++;
        for(i=0;i<n;i++)
        {
            for(j=m-1;j>=0;j--) printf("%d ",a[j][i]); 
            printf("\n");
        }
    }
    return 0;
}