#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Node{
    int data[10000];
    int t;
}a;
void change(int num,int r){
	if(num==0){
		printf("0");
	}
	int n=num,m=0;
	a *head=(a *)malloc(sizeof(a));
	head->t=-1;
	while(n){
		m=n%r;
		n=n/r;
		head->t++;
		head->data[head->t]=m;
	}
	for(int i=head->t;i>=0;i--){
		printf("%d",head->data[i]);
	}
}
int main(){
	int num,r;
    scanf("%d%d",&num,&r);
	change(num,r);
	return 0;
}