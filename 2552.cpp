#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=10000;i++)
    {
        n=n-i*i;
        if(n<0)
        {
            printf("%d",i-1);
            break;
        }
        else if(n==0)
        {
            printf("%d",i);
            break;
        }
        else
        {
            continue;
        }
    }
    return 0;
}