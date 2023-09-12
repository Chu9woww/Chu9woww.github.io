#include<stdio.h>
int main()
{
    int n,m,t,i,j;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        t=a[n-1];
        for(j=n-1;j>0;j--) a[j]=a[j-1];
        a[0]=t;
    }
    for(i=0;i<n-1;i++) printf("%d ",a[i]);
    printf("%d",a[n-1]);
    return 0;
}