#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double h,n;
	cin>>h>>n;
	printf("%.2lf %.2lf\n",(h+(2*h)*(1-(1.0/pow(2,n-1)))),h*pow(1.0/2.0,n));
    return 0;
}