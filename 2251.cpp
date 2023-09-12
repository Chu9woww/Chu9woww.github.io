#include<stdio.h>
int main()
{
    int n,m,A=0,B=0,C=0,D=0,E=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        if(m>=90) A+=1;
        else if(m>=80&&m<90) B+=1;
        else if(m>=70&&m<80) C+=1;
        else if(m>=60&&m<70) D+=1;
        else E+=1;
    }
    printf("A %d\nB %d\nC %d\nD %d\nE %d",A,B,C,D,E);
    return 0;
}