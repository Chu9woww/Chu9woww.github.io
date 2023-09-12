#include<stdio.h>
#include<string.h>
int main()
{
    int x,j;
    char a[10],b[10];
    gets(a);
    gets(b);
    x=strlen(a);
    j=strlen(b);
    if(x==j) printf("Equal");
    else if(x==4&&j==8||x==8&&j==5||x==5&&j==4) printf("Win");
    else printf("Lose");
    return 0;
}