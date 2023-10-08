#include<stdio.h>
#include<stdlib.h>
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

int main(){
    SqStack s;
    init(s);
    char a[1000];
    scanf("%s",&a);
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
    printf("\n");
    return 0;
}