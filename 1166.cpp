#include<iostream>
using namespace std;
void f(int n)
{
    for(int i=1;i<=n;i++) cout<<"*";
    cout<<endl;
}
int main()
{
    int n,t,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++) f(i);
    }
    return 0;
}