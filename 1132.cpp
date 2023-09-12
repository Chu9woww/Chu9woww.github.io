#include<iostream>
using namespace std;
int main()
{
    int a[40]={1,1},i,n;
    cin>>n;
    for(i=2;i<n;i++) a[i]=a[i-1]+a[i-2];
    cout<<a[n-1];
    return 0;
}