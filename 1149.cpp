#include<iostream>
#include<cstdio>
using namespace std;
int f(int m,int n)
{
    if(m==1)
    {
      return n;
    }
    else if(n==1)
    {
      return m;
    }
    else
    {
      return  f(m-1,n)+ f(m,n-1);
    }
}
int main()
{
    int num,m,n;
    cin>>num;
    while(num--)
    {
      cin>>m>>n;
      f(m,n);
      cout<<f(m,n)<<endl;
    }
    return 0;
}