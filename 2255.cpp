#include<stdio.h>
void sort(int s[],int n)
{
    int i,j,t;
    for(i=1;i<n;i++)
     for(j=0;j<n-i;j++)
      if(s[j+1]>s[j])
    {
        t=s[j];
        s[j]=s[j+1];
        s[j+1]=t;
    }
}
int main()
{
    int n,i,C,M,E,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&C,&M,&E);
        a[i]=C+M+E;
    }
    sort(a,n);
    for(i=0;i<n;i++) printf("%d\n",a[i]);
    return 0;
}