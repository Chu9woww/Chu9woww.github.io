#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000],c;
    int i,n;
    while(~scanf("%s %c",s,&c))
    {
        n=strlen(s);
        for(i=0;i<n;i++)
        if(s[i]==c)
        s[i]='\n';
        puts(s);
    }
    return 0;
}