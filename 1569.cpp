#include<stdio.h>
struct xuan
{
    char name[10];
    int height;
    int weight;
};
int main()
{
    int n,i,j,k,x,y,q,w;
    struct xuan a[100000],t;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s",a[i].name);
        scanf("%d",&a[i].height);
        scanf("%d",&a[i].weight);
    }
    scanf("%d%d%d%d",&x,&y,&q,&w);
    k=0;
    for(i=0; i<n; i++)
    {
        if((a[i].height>=x&&a[i].height<=y)&&(a[i].weight>=q&&a[i].weight<=w))
        {
            a[k]=a[i];
            k++;
        }
    }
    for(i=0; i<k-1; i++)
    {
        for(j=0; j<k-i-1; j++)
        {
            if(a[j+1].height<a[j].height)
            {
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0; i<k-1; i++)
    {
        if(a[i].height==a[i+1].height)
        {
            if(a[i+1].weight<a[i].weight)
            {
                t=a[i+1];
                a[i+1]=a[i];
                a[i]=t;
            }
        }
    }
    if(k==0) printf("No");
    else for(i=0; i<k; i++)
    printf("%s %d %d\n",a[i].name,a[i].height,a[i].weight);
    return 0;
}