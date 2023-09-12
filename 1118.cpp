#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(b>c) cout<<a<<" "<<b<<" "<<c;
        else if(a<c) cout<<c<<" "<<a<<" "<<b;
        else cout<<a<<" "<<c<<" "<<b;
    }
    else
    {
        if(b<c) cout<<c<<" "<<b<<" "<<a;
        else if(b>c) cout<<b<<" "<<c<<" "<<a;
        else cout<<b<<" "<<a<<" "<<c;
    }
    return 0;
}