#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int a[n],b[1001]={0},i,j,t,max=0;
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            j=a[i];
            b[j]++;
        }
        for(i=0;i<1001;i++)
        {
            if(b[i]>max)
            {
                max=b[i];
                t=i;
            }
        }
        printf("%d\n",t);
    }
    return 0;
}