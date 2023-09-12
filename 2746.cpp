#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    char s[100];
    while(~scanf("%s",s))
    {
        n=strlen(s);
        for(int i=0;i<n;i++)
        {
            if(s[i]>='a'&&s[i]<='z') s[i]-=32;
            else if(s[i]>='A'&&s[i]<='Z') s[i]+=32; 
        } 
        puts(s);
    }
    return 0;
}