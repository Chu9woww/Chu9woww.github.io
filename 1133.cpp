#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char c;
    cin>>a>>b>>c;
    if(c=='+') cout<<a+b;
    if(c=='-') cout<<a-b;
    if(c=='*') cout<<a*b;
    if(c=='/') cout<<a/b;
    return 0;
}