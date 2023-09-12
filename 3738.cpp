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
    int T,n,i,a[1000];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        sort(a,n);
        printf("%d %d",a[1],a[n-2]);
        printf("\n");
    }
    return 0;
}