#include<stdio.h>
int main()
{
    int a,b,sum,n,i;
    scanf("%d",&n);
    while(n--)
    {
        sum=0;
        scanf("%d",&a);
        for(i=1;i<=a;i++)
        {
            scanf("%d",&b);
            sum+=b;
        }
        printf("%d\n\n",sum);
    }
    return 0;
}