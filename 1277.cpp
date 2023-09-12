#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d\n",&a,&b);
        printf("%d\n",a+b);
    }
    return 0;
}