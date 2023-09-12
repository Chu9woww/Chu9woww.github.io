#include<stdio.h>
int main()
{
    int i,j,m,n,k,a[11][11]={0},b,ad,x,y;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
      for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    for(k=0;k<m;k++)
    {
        ad=a[k][0];x=k;y=0;b=1;;
        for(i=0;i<n;i++)
        {
            if(a[k][i]>ad)
            {
                ad=a[k][i];
                y=i;
            }
        }
        for(j=0;j<m;j++)
        {
            if(ad>a[j][y]) b=0;
        }
        if(b==1) break;
      }
    if(b!=0) printf("Array[%d][%d]=%d",x,y,ad);
    else printf("None");
    return 0;
}