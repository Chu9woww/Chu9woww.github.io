#include<iostream>
#include<cmath>
using namespace std;
struct node{
    int a;
    int b;
    int c;
    int d;
    int e;
}a[105];
int main()
{
    int n, i, cnt = 0, maxn = -1;
    cin >> n;
    for(int i = 0; i < n; i ++){
    	int sum = 0; 
        cin >> a[i].a >> a[i].b >> a[i].c >> a[i].d >> a[i].e;
        sum = a[i].a + a[i].b + a[i].c + a[i].d + a[i].e;
    	maxn = max(sum, maxn);
        if(sum < 85){
        	cnt ++;
		}
    }
    if(maxn < 85){
    	cout << cnt << " No" << endl;
	}
	else{
		cout << cnt <<" " << maxn << endl;
	}
    return 0;
}