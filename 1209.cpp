#include<stdio.h>
int main()
{
    float a;
    while(scanf("%f\n",&a)!=EOF)
    {
        if(a>=0) printf("%.2f\n",a);
        else printf("%.2f\n",-a);
    }
    return 0;
}