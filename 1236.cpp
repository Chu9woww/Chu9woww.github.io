#include<stdio.h>
#include<math.h>
int main()
{
    double a;
    while(scanf("%lf\n",&a)!=EOF)
    {
        a=fabs(a);
        printf("%.2lf\n",a);
    }
    return 0;
}