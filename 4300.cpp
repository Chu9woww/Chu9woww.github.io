#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a;
    scanf("%c",&a);
    printf("%c\n*%4c*\n*%-4c*",a,a,a);
    return 0;
}