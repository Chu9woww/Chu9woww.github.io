#include<iostream>
using namespace std;
struct node
{
    int w1;
    int w2;
    int w3;
}a[1001];
int main()
{
    int n,i,max=0,sum[1001],t;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i].w1>>a[i].w2>>a[i].w3;
        sum[i]=0.7*a[i].w1+0.2*a[i].w2+0.1*a[i].w3;
    }
    for(i=0;i<n;i++)
    {
        if(sum[i]>max)
        {
            max=sum[i];
            t=i;
        }
    }
    cout<<t;
    return 0;
}