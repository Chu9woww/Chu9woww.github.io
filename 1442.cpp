#include<stdio.h>
int main()
{
    int n,num;
    double a,b,c,ave=0.00;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lf %lf %lf",&a,&b,&c);
        ave=(a+b+c)/3;
        if(a>ave) num+=1;
        if(b>ave) num+=1;
        if(c>ave) num+=1;
        if(num==2) printf("Yes\n");
        else printf("No\n");
        num=0;
    }
    return 0;
}