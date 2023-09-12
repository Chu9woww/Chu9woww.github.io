#include<stdio.h>
int c(int n,int m)
{
    if(m==0) return 1;
    else if(n==1) return 1;
    else if(m==n) return 1;
    else return c(n-1,m-1)+c(n-1,m);
}
int main()
{
    int t,m,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        printf("%d\n",c(n,m));
    }
    return 0;
}