#include<stdio.h>
int main()
{
    int a,b,sum,i;
    while(scanf("%d",&a)!=EOF)
    {
        for(i=1;i<=a;i++)
        {
            scanf("%d",&b);
            sum+=b;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}