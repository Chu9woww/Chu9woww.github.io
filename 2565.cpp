#include<stdio.h>
int main()
{
    int n,a[10000],L,R,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) scanf("%d",&a[i]);
    scanf("%d %d",&L,&R);
    for(i=L;i<=R;i++) sum=sum+a[i];
    printf("%d",sum);
    return 0;
}