#include<stdio.h>
int main()
{
    int n,m,min,max,sum,i;
    scanf("%d\n",&n);
    scanf("%d",&m);
    min=m;max=m;sum=m;
    for(i=1;i<n;i++)
    {
        scanf("%d",&m);
        if(min>m) min=m;
        if(max<m) max=m;
        sum=sum+m;
    }
    printf("%d %d %d",max,min,sum/n);
    return 0;
}