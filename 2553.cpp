#include<stdio.h>
int fj(int m)
{
    int sum=0;
    while(m)
    {
        sum=sum+m%10;
        m=m/10;
    }
    return sum;
}
int s(int a)
{
    int i,flag=0;
    for(i=2;i<a;i++)
    {
        if(a%i==0) flag=1;
    }
    return flag;
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(s(n)==0&&s(fj(n))==0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}