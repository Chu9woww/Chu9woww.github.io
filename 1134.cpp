#include<iostream>
using namespace std;
int main()
{
    int a,b,i;
    int sum=0;
    int r=1;
    cin>>a>>b;
    for(i=1;i<b;i++)
    {
        r=r*10+1;
        sum+=a*r;
    }
    cout<<sum+a;
    return 0;
}