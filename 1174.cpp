#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,m,n;
    scanf("%d",&m);
    n=m*2-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=abs(n/2+1-i);j++) printf(" ");
        for(j=1;j<=((i<(n/2+1))?2*i-1:2*n+1-2*i);j++) printf("*");
        printf("\n");
    }
    return 0;
}