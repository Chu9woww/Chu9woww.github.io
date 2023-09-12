#include<stdio.h>
int ysq(int p)
{
    if(1000000%p!=0) printf("No\n");
    else printf("%d\n",1000000/p);
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int p;
        scanf("%d",&p);
        ysq(p);
    }
    return 0;
}