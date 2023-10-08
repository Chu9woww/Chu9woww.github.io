#include<bits/stdc++.h>
using namespace std;
typedef struct Node{
	int Data[1005];
	int t;
} mystack;
void change(int num, int R){
	if(num == 0){
		cout << 0;	
	}
	int s = num, y = 0;
	mystack *head = (mystack *)malloc(sizeof(mystack));
	head->t = -1;
	while(s){
		y = s%R;
		s = s/R;
		head->t++;
		head->Data[head->t] = y;
	}
	for(int i = head->t; i >= 0; i--)
		cout << head->Data[i];
}
int main(){
	int num, R;
	cin >> num >> R;
	change(num, R);
	system("pause");
	return 0;
}