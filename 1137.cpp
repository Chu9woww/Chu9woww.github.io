#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int count=0,n,j,i=2,k,sum=0;
    cin>>n;
    for(j=1;j<n;j++)
    {
        k=sqrt(j);
        for(i=2;i<=k;i++)
        if(j%i==0) break;
        if(i>k&&j!=1)
        {
            cout<<j<<" ";
            count+=1;
        }
        if(count==10)
        {
            cout<<endl;
            count=0;
        }
    }
    return 0;
}