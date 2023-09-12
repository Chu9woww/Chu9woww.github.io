#include<stdio.h>
int main()
{
    int year,month;
    scanf("%d\\%d",&year,&month);
    if(year%4==0&&year%100!=0) printf("Yes");
    else if(year%400==0) printf("Yes");
    else printf("No");
    return 0;
}