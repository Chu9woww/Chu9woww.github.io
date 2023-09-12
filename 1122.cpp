#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m,i=2,k;
    cin>>m;
    k=sqrt(m);
    for(i=2;i<=k;i++)
    if(m%i==0) break;
    if(i>k&&m!=1) cout<<"This is a prime.";
    else cout<<"This is not a prime.";
    return 0;
}