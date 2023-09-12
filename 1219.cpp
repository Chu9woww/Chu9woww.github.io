#include<stdio.h>
#include<string.h>
int main()
{
    int len,alpha,b=0,c=0,d=0,i;
    char a[100001];
    while(gets(a))
    {
        len=strlen(a);
        for(i=0;i<len;i++)
        {
            if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
            if(a[i]>='a'&&a[i]<='z') alpha+=1;
            else if(a[i]>='0'&&a[i]<='9') b+=1;
            else if(a[i]==' ') c+=1;
            else d+=1;
        }
        printf("%d %d %d %d",alpha,b,c,d);
        printf("\n");
        alpha=0;b=0;c=0;d=0;
    }
    return 0;
}