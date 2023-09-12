#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b,c,n;
    cin>>n;
    a=n%10;
    b=(n/10)%10;
    c=n/100;
    if(a!=0) cout<<a;
    if(b!=0) cout<<b;
    if(c!=0) cout<<c;
    return 0;        
}