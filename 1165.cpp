#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int j,i=2,k,sum=0;
    for(j=100;j<=200;j++)
    {
        k=sqrt(j);
        for(i=2;i<=k;i++)
        if(j%i==0) break;
        if(i>k&&j!=1) sum+=1;
    }
    cout<<sum<<endl;
    for(j=100;j<=200;j++)
    {
        k=sqrt(j);
        for(i=2;i<=k;i++)
        if(j%i==0) break;
        if(i>k&&j!=1) cout<<j<<" ";
    }
    return 0;
}