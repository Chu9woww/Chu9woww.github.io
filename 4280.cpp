#include<iostream>
using namespace std;
int main()
{
    int a[10],i,j,k,m,n;
    for(i=0;i<=9;i++)
      a[i]=0;
    cin>>n>>m;
    while(n)
    {
        k=n%10;
        a[k]++;
        n=n/10;
    }
    cout<<a[m];
    return 0;
}