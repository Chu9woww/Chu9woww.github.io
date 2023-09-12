#include<stdio.h>
void sort(double s[],int n)
{
    int i,j;
    double t;
    for(i=1;i<n;i++)
     for(j=0;j<n-i;j++)
      if(s[j+1]<s[j])
    {
        t=s[j];
        s[j]=s[j+1];
        s[j+1]=t;
    }
}
int main()
{
    int n,i;
    double a[1000],num=0;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++) scanf("%lf",&a[i]);
        sort(a,n);
        if(n%2!=0) printf("%.1lf\n",a[(n-1)/2]);
        else
        {
            num=(a[n/2]+a[n/2-1])/2;
            printf("%.1lf\n",num);
            num=0;
        }
    }
    return 0;
}