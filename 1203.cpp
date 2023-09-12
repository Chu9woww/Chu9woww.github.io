#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int money,sum,num;
    int price=3;
    cin>>money;
    money=money*10;
    sum=money/price;
    num=money%price;
    cout<<sum<<" "<<num;
}