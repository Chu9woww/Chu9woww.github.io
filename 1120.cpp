#include<iostream>
using namespace std;
int main()
{
    long int n,i,sum=0;
    cin>>n;
    for(i=1;i<=n;i++) sum=sum+i;
    cout<<sum;
    return 0;
}