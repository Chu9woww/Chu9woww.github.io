#include<stdio.h>
int main()
{
    int Qx,Qy,i,j,n,m,max=0,a[1000][1000];
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++) scanf("%d",&a[i][j]);
        }
        scanf("%d%d",&Qx,&Qy);
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i][j]>max) max=a[i][j];
            }
        }
        printf("%d\n",max-a[Qx-1][Qy-1]);
        max=0;
    }
    return 0;
}