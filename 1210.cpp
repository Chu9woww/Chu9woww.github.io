#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    char s[101];  
    while(cin>>s)
    {
        int i;
        int len=strlen(s);
        for(int i=0;i<len;i++)
        {
            if(s[i]>='A'&&s[i]<='Y') s[i]+=33; 
            else if(s[i]=='Z') s[i]='a';
            else if(s[i]>='a'&&s[i]<='c') s[i]='2';
            else if(s[i]>='d'&&s[i]<='f') s[i]='3';
            else if(s[i]>='g'&&s[i]<='i') s[i]='4';
            else if(s[i]>='j'&&s[i]<='l') s[i]='5';
            else if(s[i]>='m'&&s[i]<='o') s[i]='6';
            else if(s[i]>='p'&&s[i]<='s') s[i]='7';
            else if(s[i]>='t'&&s[i]<='v') s[i]='8';
            else if(s[i]>='w'&&s[i]<='z') s[i]='9';
            else s[i]=s[i];
        } 
        cout<<s<<endl;
    }
    return 0;
}