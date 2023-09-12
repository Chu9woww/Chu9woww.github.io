#include<stdio.h>
void sort(int s[],int k)
{
    int i,j,t;
    for(i=1;i<k;i++)
    {
        for(j=0;j<k-i;j++)
        {
            if(s[j+1]>s[j])
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
    int n,m,i,a[1000],sum=0;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        sort(a,n);
        for(i=0;i<m;i++) sum+=a[i];
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}