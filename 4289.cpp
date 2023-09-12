#include<iostream>
using namespace std;
int main()
{
    int a,num=0;
    cin>>a;
    while(a)
    {
        num++;
        a=a/10;
    }
    cout<<num;
    return 0;
}