#include<iostream>
using namespace std;
class Time
{
    private:
    int hour;
    int min;
    int sec;
    public:
    void get()
    {
        cin>>hour>>min>>sec;
    }
    void show()
    {
        cout<<hour<<":"<<min<<":"<<sec;
    }
};
int main()
{
    Time t;
    t.get();
    t.show();
    return 0;
}