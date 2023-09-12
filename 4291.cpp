#include<stdio.h>
#include<stdlib.h>
int main()
{
    double a;
    scanf("%lf",&a);
    printf("%f\n*%10.3f*\n*%-10.3f*",a,a,a);
    return 0;
}