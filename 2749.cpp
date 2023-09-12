#include<stdio.h>
int main()
{
    int n,x1,x2,y1,y2,x,y,sum;
    while(scanf("%d\n%d%d\n%d%d",&n,&x1,&y1,&x2,&y2)!=EOF)
    {
        while(n--)
        {
            scanf("%d%d",&x,&y);
            if(x>x1&&x<x2)
            {
                if(y>y1&&y<y2) sum++;
            }
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}