#include<stdio.h>
#include<string.h>
int main()
{
    int str[1000],i;
    for(i=0;i<10;i++) scanf("%d",&str[i]);
    printf("%d",str[9]);
    for(i=8;i>=0;i--) printf("% d",str[i]);
    return 0;
}