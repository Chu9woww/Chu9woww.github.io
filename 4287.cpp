#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int m,n,k,day=0;
    cin>>n>>m>>k;
    day=(m-n)/k;
    if(m-n==day*k) cout<<day;
    else cout<<day+1;
    return 0;
}