#include<stdio.h>
int f(int x)
{
    int n;
    if(x==1) n=0;
    else if(x==2) n=1;
    else n=4*f(x-1)-5*f(x-2);
    return n;
}
int main()
{
    int m,x;
    scanf("%d",&m);
    while(m--)
    {
        scanf("%d",&x);
        printf("%d\n",f(x));
    }
    return 0;
}