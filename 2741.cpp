#include<iostream>
using namespace std;
struct stu
{
    char name[15];
    int sc;
}s[100],t;
int main()
{
    int n,i,j;
    char m[15];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s[i].name>>s[i].sc;
    }
    for(i=1;i<n;i++)
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
        cout<<s[i].name<<" "<<s[i].sc<<endl;
    }
    return 0;
}