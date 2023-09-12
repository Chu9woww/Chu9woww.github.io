#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b=0;
    while(cin>>a)
    {
      int i=1,s=0;
      for(i=1;i<=a;i+=1)
          b+=i;
      cout<<b<<endl<<endl;
      i=1,b=0;
    }
    return 0;
}