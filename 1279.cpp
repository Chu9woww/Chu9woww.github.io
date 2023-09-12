#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d %d\n",&a,&b)&&(a!=0||b!=0))
    printf("%d\n\n",a+b);
    return 0;
}