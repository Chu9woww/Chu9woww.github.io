#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1000],str2[1000];
    scanf("%s\n%s",str1,str2);
    if(strcmp(str1,str2)==0) printf("%s=%s",str1,str2);
    else if(strcmp(str1,str2)>0) printf("%s>%s",str1,str2);
    else printf("%s<%s",str1,str2);
    return 0;
}