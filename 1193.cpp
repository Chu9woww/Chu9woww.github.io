#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    double n,pi=0.00;
    scanf("%lf",&n);
    for(i=1;i<=4*n-1;i+=2)
    {
        if(i%4==1) pi+=1.0/i;
        else if(i%4==3) pi-=1.0/i;
    }
    printf("%.5lf",4*pi);
    return 0;
}