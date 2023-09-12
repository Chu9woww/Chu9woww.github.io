#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n;j++) a[i][j]=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++) cin>>a[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j!=n-1) cout<<a[j][i]<<" ";
            else if(j==n-1) cout<<a[j][i]<<endl;
            else cout<<a[j][i];
        }
    }
    return 0;
}