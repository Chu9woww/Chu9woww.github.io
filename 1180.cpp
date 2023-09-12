#include<stdio.h>
#include<string.h>
int main()
{
    char a[200];
    int len,sum=0,i;
    gets(a);
    len=strlen(a);
    if(a[0]!=' ') sum+=1;
    for(i=0;i<len;i++)
    {
        if(a[i]==' '&&a[i+1]!=' ') sum+=1;
    }
    if(a[len-1]==' ') sum-=1;
    printf("%d",sum);
    return 0;
}