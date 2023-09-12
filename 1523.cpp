#include<stdio.h>
int main()
{
    int a[100],n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        a[i+n]=a[i];
    }
    for(i=n;i>0;i--)
    {
        for(j=i;j<i+n;j++) printf("%d ",a[j]);
        printf("\n");
    }
    return 0;
}