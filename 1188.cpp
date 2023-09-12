#include<stdio.h>
int qh(int a)
{
    int sum=0;
    while(a)
    {
        sum+=a%10;
        a=a/10;
    }
    return sum;
}
void sort(int a[],int n)
{
    int i,j,t;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(qh(a[j+1])<qh(a[j]))
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}
int main()
{
    int a[1000],i,n;
    while(scanf("%d",&n)&&n)
    {
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        sort(a,n);
        for(i=0;i<n;i++) printf("%d ",a[i]);
        printf("\n");
    }
    return 0;
}