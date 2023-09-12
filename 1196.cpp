#include<stdio.h>
void sort(int s[],int r[])
{
    int i,j,t;
    for(i=1;i<10;i++)
     for(j=0;j<10-i;j++)
      if(s[j+1]<s[j])
    {
        t=s[j];
        s[j]=s[j+1];
        s[j+1]=t;
        t=r[j];
        r[j]=r[j+1];
        r[j+1]=t;
    }
}
int main()
{
    int a[100],b[100],i,j;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        b[i]=i+1;
    }
    sort(a,b);
    for(i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
    for(i=0;i<10;i++) printf("%d ",b[i]);
    return 0;
}