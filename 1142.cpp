#include<iostream>
using namespace std;
int main()
{
    int a,b,c,max;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c) cout<<a<<" "<<b<<" "<<a<<endl<<a<<" "<<b<<" "<<c<<" "<<a;
        else cout<<a<<" "<<b<<" "<<a<<endl<<a<<" "<<b<<" "<<c<<" "<<c;
    }
    else
    {
        if(b>c) cout<<a<<" "<<b<<" "<<b<<endl<<a<<" "<<b<<" "<<c<<" "<<b;
        else cout<<a<<" "<<b<<" "<<b<<endl<<a<<" "<<b<<" "<<c<<" "<<c;
    }
    return 0;
}