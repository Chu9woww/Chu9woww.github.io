#include<stdio.h>
int main()
{
    char str1[20],str2[20],c; 
    int i=0,j=0;
    gets(str1);
    scanf("%c",&c);
    while(str1[i]!=0)
    {
        if(str1[i]!=c)
        {
            str2[j]=str1[i];
            j++;
        }
        i++;
    }
    str2[j]=0;
    puts(str2);
    return 0;
}