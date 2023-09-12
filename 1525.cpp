#include<stdio.h>
#include<string.h>
int main()
{
    int len,i,max,t;
    char a[1000];
    while(gets(a))
    {
        len=strlen(a);
        int s[150]={0};
        for(i=0;i<len;i++)
        {
            if(a[i]!=' ') s[a[i]]++;
        }
        max=s[0];t=0;
        for(i=0;i<150;i++)
        {
            if(s[i]>max)
            {
                max=s[i];
                t=i;
            }
        }
        printf("%c %d\n",t,max);
    }
    return 0;
}