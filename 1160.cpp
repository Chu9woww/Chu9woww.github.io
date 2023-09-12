#include<stdio.h>
int main()
{
    int year,month;
    scanf("%d\\%d",&year,&month);
    if(year%4==0&&year%100!=0)
    {
         if(month==1||month==3||month==5||month==7||month==8||month==10||month==12) printf("31");
         else if(month==2) printf("29");
         else printf("30");
    }
    else if(year%400==0)
    {
         if(month==1||month==3||month==5||month==7||month==8||month==10||month==12) printf("31");
         else if(month==2) printf("29");
         else printf("30");
    }
    else
    {
         if(month==1||month==3||month==5||month==7||month==8||month==10||month==12) printf("31");
         else if(month==2) printf("28");
         else printf("30");
    }
    return 0;
}