#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,a,b,max=0;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(abs(a)>abs(max)) max=a;
        else max=max;
    }
    cout<<max;
    return 0;
}