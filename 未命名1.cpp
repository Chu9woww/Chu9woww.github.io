#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
struct{
  long long int d;
  long long int h;
}a[10009],p;
int main(){
  int t,i,j,sum=0;
  cin>>t;
  for(i=0;i<t;i++){
    cin>>a[i].d>>a[i].h;
  }
  for(i=0;i<t;i++)
    {
        for(j=0;j<t-i;j++)
        {
            if(a[j+1].d<a[j].d&&a[j+1].h<a[j].h)
            {
                p=a[j];
                a[j]=a[j+1];
                a[j+1]=p;
            }
        }
    }
    for(i=0;i<t;i++){
      if(a[i+1].d>a[i].d&&a[i+1].h>a[i].h){
     	sum=t-i;

    }
}
cout<<sum;
  return 0;
}
