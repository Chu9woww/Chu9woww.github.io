#include<stdio.h>
int main()
{
    int n,i,j,sum=0,a[101];
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        for(j=1;j<n-1;j++)
        {
            if(a[j]>a[j-1]&&a[j]>a[j+1])
            sum++;
        } 
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}