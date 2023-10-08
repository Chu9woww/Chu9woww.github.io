#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<cstring>
#include<iostream>
using namespace std;
typedef char ElemType;
typedef struct{
    ElemType *base;
    ElemType *top;
}SqStack;

int init(SqStack &s)
{
    s.base=(ElemType *)malloc(100*sizeof(ElemType));
    s.top=s.base;
    return 0;
}

int main(){
	int i,len;
	SqStack s;
	init(s);
	string Exp;
	while(getline(cin,Exp)){
		int t=0;
		len=Exp.size();
		for(i=0;i<len;i++){
			if(Exp[i]=='('||Exp[i]=='['||Exp[i]=='{'){
				*++s.top=Exp[i];
			}
			else if(Exp[i]==')'){
				if(*s.top=='(')	s.top--;
				else *++s.top=Exp[i];
			}
			else if(Exp[i]==']'){
				if(*s.top=='[')	s.top--;
				else *++s.top=Exp[i];
		    }
			else if(Exp[i]=='}'){
		    	if(*s.top=='{')	s.top--;
				else *++s.top=Exp[i];
			}
		}
		if(s.base==s.top) printf("yes\n");
		else printf("no\n");
        s.top=s.base;
	}
	return 0;
}
