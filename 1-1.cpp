#include<iostream>
#include<cstdio>
using namespace std;
char a[1000];
int dataLen;
int deleteLen;
void DeleteRepData()
{
    for(int i=0;i<dataLen;i++)
    {
        for(int j=0;j<dataLen;j++)
        {
            if(a[i]==0)
            {
                break;
            }
            if(a[i]==a[j]&&i!=j)
            {
                a[j]=0;
                deleteLen++;
            }
        }
    }
}
int main()
{
    cin>>dataLen;
    for(int i=0;i<dataLen;i++)
    {
        cin>>a[i];
    }
    DeleteRepData();
    cout<<dataLen-deleteLen<<endl;
    for(int j=0;j<dataLen;j++)
    {
        if(a[j]!=0)
        {
            cout<<a[j]<<' ';
        }
    }
    system("pause");
    return 0;
}