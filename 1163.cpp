#include<iostream>
using namespace std;
int main()
{
    int s[4],i,j,a,b,c;
    for(i=0;i<=3;i++) s[i]=0;
    for(j=0;j<=3;j++) cin>>s[j];
    for(a=0;a<+3;a++)
    {
        for(b=a+1;b<=3;b++)
        {
            for(c=b+1;c<=3;c++)
            {
                cout<<s[a]<<" "<<s[b]<<" "<<s[c]<<endl;
                cout<<s[a]<<" "<<s[c]<<" "<<s[b]<<endl;
                cout<<s[b]<<" "<<s[a]<<" "<<s[c]<<endl;
                cout<<s[b]<<" "<<s[c]<<" "<<s[a]<<endl;
                cout<<s[c]<<" "<<s[a]<<" "<<s[b]<<endl;
                cout<<s[c]<<" "<<s[b]<<" "<<s[a]<<endl;
            }
        }
    }
    return 0;
}