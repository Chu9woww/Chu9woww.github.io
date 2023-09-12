#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b,sum=0;
    while(cin>>a&&a!=0)
    {
      sum=0;
      while(a--)
      {
        cin>>b;
        sum+=b;
      }
      cout<<sum<<endl;
    }
    return 0;
}