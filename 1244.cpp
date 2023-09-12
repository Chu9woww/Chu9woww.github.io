#include<stdio.h>
void sort(int s[],int n)
{
    int i,j,t;
    for(i=1;i<=n;i++)
     for(j=0;j<=n-i;j++)
      if(s[j+1]<s[j])
    {
        t=s[j];
        s[j]=s[j+1];
        s[j+1]=t;
    }
}
int main()
{
    int n,m,i,a[1000];
    while(scanf("%d %d",&n,&m))
    {
        if(n==0&&m==0) break;
        else
        {
            for(i=0;i<n;i++) scanf("%d",&a[i]);
            a[n]=m;
            sort(a,n);
            for(i=0;i<n;i++) printf("%d ",a[i]);
            printf("%d\n",a[n]);
        }
    }
    return 0;
}