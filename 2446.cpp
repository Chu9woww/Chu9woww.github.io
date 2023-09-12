#include<iostream>
using namespace std;
struct stu
{
    long long int id;
    int sc;
}s[100000],t;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s[i].id>>s[i].sc;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(s[j+1].sc>s[j].sc)
            {
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<s[i].id<<" "<<s[i].sc<<endl;
    }
    return 0;
}