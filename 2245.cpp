#include<iostream>
#include<cmath>
using namespace std;
int cb(int n)
{
    long long int t,sum=0;
    while(n)
    {
        if(n%10!=0)
        {
            t=n%10;
            sum+=pow(t,3);
            n=n/10;
        }
        else
        {
            n=n/10;
        }
    }
    return sum;
}
int main()
{
    long long int n,sum;
    cin>>n;
    n=pow(n,3);
    sum=cb(n);
    cout<<sum;
    return 0;
}    