#include<stdio.h>
#include<math.h>
#define PI 3.1415927
int main()
{
    double r;
    while(scanf("%lf\n",&r)!=EOF)
    {
        double V=0.00;
        V=PI*pow(r,3)*4/3;
        printf("%.3lf\n",V);
    }
    return 0;
}