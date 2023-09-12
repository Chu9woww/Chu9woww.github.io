#include<iostream>
using namespace std;
int main()
{
    int a[10][10],n,i,j,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++) cin>>a[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++) sum+=a[i][j];
    }
    cout<<sum;
    return 0;
}