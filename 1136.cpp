#include<stdio.h>
#include<math.h>
int s(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
    if(n%i==0) return 0;
    return 1;
}
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=3;i<n;i++)
    if(s(i)&&s(n-i))
    {
        printf("%d=%d+%d\n",n,i,n-i);
        break;
    }
    return 0;
}