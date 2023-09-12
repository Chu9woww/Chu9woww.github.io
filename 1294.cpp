include<iostream>
using namespace std;
struct node
{
    int num;
    int data;
}s[1001],mx={0,0};
int main()
{
    int m,n,i,j=0;
    cin>>m>>n;
    for(i=1;i<=m;i++)
    {
        s[i].num=i;
        s[i].data=0;
    }
    int xp;
    for(i=0;i<n;i++)
    {
        cin>>xp;
        s[xp].data++;
    }
    for(i=1;i<=m;i++)
    {
        if(mx.data<s[i].data) mx=s[i];
    }
    cout<<mx.num<<endl;
    cout<<mx.data;
    return 0;
}