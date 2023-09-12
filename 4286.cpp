#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,a,sum=0;
    cin>>n;
    while(n)
    {
        a=n%10;
        if(a%2==0) sum+=a;
        else a=a;
        n=(n-a)/10;
    }
    cout<<sum;
    return 0;
}