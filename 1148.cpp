#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,max;
    cin>>a>>b>>c;
    d=a+b,e=a+c,f=b+c;
    if(d>e)
    {
        if(d>f) max=d;
        else max=f;
    }
    else
    {
        if(e>f) max=e;
        else max=f;
    }
    cout<<max;
    return 0;
}