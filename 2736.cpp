#include<stdio.h>
int main()
{
    int a[100000],n,i,sum1=0,sum2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i+=2) sum1=sum1+a[i];
    for(i=1;i<n;i+=2) sum2=sum2+a[i];
    if(sum1>sum2) printf("Greater than");
    else if(sum2>sum1) printf("Less than");
    else printf("Equal");
    return 0;
}