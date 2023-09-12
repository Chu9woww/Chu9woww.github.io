#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d\n*%08o*\n*%-8o*",a,a,a);
    return 0;
}