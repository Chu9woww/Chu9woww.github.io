#include<iostream>
#include<string>
using namespace std;
int main()
{
    int len,i;
    string s;  
    getline(cin,s);
    len=s.length();
    for(i=0;i<len;i++)
    {
        if(s[i]>='a'&&s[i]<='z') s[i]-=32;
        else if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
        else if(s[i]>='0'&&s[i]<='9') s[i]=105-s[i];
    } 
    for(i=len-1;i>=0;i--) cout<<s[i];
    return 0;
}