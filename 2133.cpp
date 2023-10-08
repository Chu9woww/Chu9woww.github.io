#include<stdlib.h>
#include<stdio.h>
typedef double ElemType;
typedef struct{
    double *base;
    double *top;
}SqStack;

int Init(SqStack &s){
    s.base=(ElemType *)malloc(10000 *sizeof(ElemType));
    s.top=s.base;
    return 0;
}

int main(){
    int i;
    double a,b,c,d;
    char num[1000];
    SqStack Cal;
    Init(Cal);
    scanf("%s",num);
    for(i=0;num[i]!='#';i++){
        if(num[i]=='+'){
            a=*--Cal.top;
            b=*--Cal.top;
            c=a+b;
            *Cal.top=c;
            Cal.top++;
        }
        else if(num[i]=='-'){
            a=*--Cal.top;
            b=*--Cal.top;
            c=b-a;
            *Cal.top=c;
            Cal.top++;
        }
        else if(num[i]=='/'){
            a=*--Cal.top;
            b=*--Cal.top;
            c=b/a;
            *Cal.top=c;
            Cal.top++;
        }
        else if(num[i]=='*'){
            a=*--Cal.top;
            b=*--Cal.top;
            c=a*b;
            *Cal.top=c;
            Cal.top++;
        }
        else if(num[i]>='0'&&num[i]<='9'){
            d=0;
            d=num[i]-'0';
            *Cal.top=d;
            Cal.top++;
        }
    }
    printf("%.0lf",*--Cal.top);
    return 0;
}//现在是2023-09-24 0:52 我自己写对了一道数据结构题，真的好开心 
