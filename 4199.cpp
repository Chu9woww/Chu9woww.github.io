#include<iostream>
using namespace std;
struct node
{
    int price;
    int cof;
}s[5001],mx{0,0};
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s[i].price>>s[i].cof;
    }
    for(i=1;i<=n;i++)
    {
        if(s[i].price>mx.price)
        {
            mx.price=s[i].price;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(s[i].price==mx.price)
        {
            if(s[i].cof>mx.cof)
            {
                mx.cof=s[i].cof;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        if(s[i].price==mx.price&&s[i].cof==mx.cof)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}