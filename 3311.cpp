#include<stdio.h>
#include<string.h>
#include<iostream>
#define Maxsize 10001
typedef struct{
	char data[Maxsize];
	int length;
}SqString;

void GetNext(SqString t,int next[]){
	int j,k;
    j=0;k=-1;
    next[0]=-1;
    while(j<t.length-1){
    	if(k==-1||t.data[j]==t.data[k]){
    		j++;
    		k++;
    		next[j]=k;
		}
		else k=next[k];
	}
}

int KMP(SqString s,SqString t){
	int next[Maxsize],i=0,j=0;
	GetNext(t,next);
	while(i<s.length&&j<t.length){
		if(j==-1||s.data[i]==t.data[j]){
			i++;
			j++;
		}
		else j=next[j];
	}
	if(j>=t.length)
	  return(i-t.length+1);
	else
	  return(-1);
}

int main(){
	int n,m,i,a=0;
	SqString s,t;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%c",&s.data[i]);
	scanf("%d",m);
	for(i=0;i<m;i++) scanf("%c",&t.data[i]);
	s.length=n;
    t.length=m;
   	a=KMP(s,t);
   	printf("%d %d",a,a+m);
	return 0;
}
