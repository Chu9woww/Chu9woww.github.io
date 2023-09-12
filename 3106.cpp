#include<stdio.h>
int main()
{
    int n,a[10],i;
    while(~scanf("%d",&n))
    {
    int max=0,min=0,mid=0,sum=0,p=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    p=sum/n;
    for(i=0;i<n;i++)
    {
        if(a[i]<p) min++;
        if(a[i]==p) mid++;
        if(a[i]>p) max++;
    }
    printf("%d %d %d\n",min,mid,max);
}
return 0;
}