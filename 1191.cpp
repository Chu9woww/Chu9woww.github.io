#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,a[5],i,t,s=1;
    scanf("%d",&n);
    for(i=0;;i++)
    {
        a[i]=n%10;
        n=n/10;
        if(n<=0) break;
        s++;
    }
    printf("%d\n",s);
    for(i=s-1;i>=0;i--)
    {
        printf("%d",a[i]);
        if(i==0) printf("\n");
        else printf(" ");
    }
    for(i=0;i<s;i++) printf("%d ",a[i]);
    return 0;
}