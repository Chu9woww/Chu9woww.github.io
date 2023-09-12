#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int a;
    cin>>a;
    a=a+(a*(a-1))/2;
    cout<<a;
    return 0;
}