#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int len,i;
    gets(str);
    len=strlen(str);
    for(i=0;i<len-1;i++) printf("%c ",str[i]);
    printf("%c",str[len-1]);
    return 0;
}