#include<stdio.h>
void sort(int s[],int k)
{
    int i,j,t;
    for(i=0;i<k;i++)
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
    int n,i,a[1000];
    scanf("%d",&n);
    for(i=0;i<1000;i++) a[i]=0;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    sort(a,n);
    for(i=n-1;i>=0;i--) printf("%d ",a[i]);
    return 0;
}