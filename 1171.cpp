#include<stdio.h>
#include<string.h>
int main()
{
    char str[90],i;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
    if(48<=str[i]&&str[i]<=57)
        {
            if(i>0)
            {
                if(str[i-1]=='*')
                {
                    printf("*");
                    printf("%c",str[i]);
                }
                else printf("%c",str[i]);
            }
            else printf("%c",str[0]);
        }
        else
        {
            str[i]='*';
            if(str[i+1]=='\0')
            printf("*");
        }
    }
    printf("\n");
    return 0;
}