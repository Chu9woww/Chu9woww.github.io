#include<stdio.h>
int main()
{
    long long int n,m;
    while(scanf("%lld %lld",&n,&m)!=EOF)
    {
        long long int r=1,s=1,t=1,i,A=0,C=0;
        for(i=1;i<=n;i++)
        {
            r=r*i;
            if(i<=n-m) s=s*i;
            if(i<=m) t=t*i;
        }
        A=r/s;
        C=r/(s*t);
        printf("%lld %lld\n",A,C);
    }
    return 0;
}