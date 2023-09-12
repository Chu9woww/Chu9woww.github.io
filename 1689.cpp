#include<stdio.h>
int f(int x)
{
    int n;
    if(x==1) n=2;
    else if(x==2) n=3;
    else if(x==3) n=5;
    else n=f(x-1)+f(x-2)-f(x-3);
    return n;
}
int main()
{
    int x;
    scanf("%d",&x);
    printf("%d",f(x));
    return 0;
}