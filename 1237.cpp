#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=0,c=0;
    while(cin>>n&&n!=0)
    {
        while(n--)
        {
            double num;
            cin>>num;
            if(num>0) a+=1;
            else if(num==0) b+=1;
            else c+=1;
        }
        cout<<c<<" "<<b<<" "<<a<<endl;
        a=0,b=0,c=0;
    }
    return 0;
}