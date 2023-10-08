#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef char ElemType;
typedef struct{
    ElemType *base;
    ElemType *top;
}SqStack;

int init(SqStack &s)
{
    s.base=(ElemType *)malloc(10000*sizeof(ElemType));
    s.top=s.base;
    return 0;
}

void Pro(char a[]){
    SqStack s,infix;
    init(s);
    init(infix);
    int i,j=0,len;
    len=strlen(a);
    for(i=len-1;i>=0;i--){
        if(a[i]==')')
            *++s.top=a[i];
        else if(a[i]>='a'&&a[i]<='z')
            *++infix.top=a[i];
        else if(a[i]=='('){
            while(*s.top!=')'&&s.top!=s.base)
                *++infix.top=*s.top--;
            s.top--;
        }
        else if(a[i]=='+'||a[i]=='-'){
            while(*s.top!=')'&&s.top!=s.base){
                *++infix.top=*s.top--;
            }
            *++s.top=a[i];
        }
        else if(a[i]=='*'||a[i]=='/'){
            while(s.top!=s.base&&*s.top!='+'&&*s.top!='-'&&*s.top!=')'){
                *++infix.top=*s.top;
                s.top--;
            }
            *++s.top=a[i];
        }
    }
    while(s.base!=s.top){
        *++infix.top=*s.top;
        s.top--;
    }
    while(infix.base!=infix.top){
        printf("%c",*infix.top);
        infix.top--;
    }
    s.top=s.base;
    printf("\n");
}

void In(char a[]){
	int i;
	for(i=0;a[i]!='#';i++){
		if(a[i]!='('&&a[i]!=')'){
		    printf("%c",a[i]);
	    }
	}
	printf("\n");
}

void Pos(char a[]){
    SqStack s;
    init(s);
    int i;
    for(i=0;a[i]!='#';i++){
        if(a[i]=='(')
            *++s.top=a[i];
        else if(a[i]>='a'&&a[i]<='z')
            printf("%c",a[i]);
        else if(a[i]==')'){
            while(*s.top!='('&&s.top!=s.base)
                printf("%c",*s.top--);
            s.top--;
        }
        else if(a[i]=='+'||a[i]=='-'){
            while(*s.top!='('&&s.top!=s.base){
                printf("%c",*s.top--);
            }
            *++s.top=a[i];
        }
        else if(a[i]=='*'||a[i]=='/'){
            while(s.top!=s.base&&*s.top!='+'&&*s.top!='-'&&*s.top!='('){
                printf("%c",*s.top);
                s.top--;
            }
            *++s.top=a[i];
        }
    }
    while(s.base!=s.top){
        printf("%c",*s.top);
        s.top--;
    }
    s.top=s.base;
}

int main(){
	char Exp[1000];
	scanf("%s",&Exp);
	Pro(Exp);
	In(Exp);
	Pos(Exp);
    return 0;
}
