#include <stdio.h>
void sort(int s[],int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(s[j+1]<s[j])
            {
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
        }
    }
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int a[n],i,j,t,mc;
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        t=a[0];
        sort(a,n);
        for(i=0;i<n;i++)
        {if(a[i]==t) mc=i+1;}
        for(i=0;i<mc;i++)
        {
            if(a[i]==a[mc-1]) mc=i+1;
        }
        printf("%d\n",mc);
    }
    return 0;
}