#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;  
    getline(cin,s);
    for(int i=0;i<5;i++) s[i]+=4;
    cout<<"password is "<<s;
    return 0;
}