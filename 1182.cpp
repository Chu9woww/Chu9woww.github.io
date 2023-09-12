#include<stdio.h>
int main()
{
    int n,year,month,day,num;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d %d",&year,&month,&day);
        if(year%4==0&&year%100!=0)
        {
            switch(month)
            {
                case 1:num=0+day; break;
                case 2:num=31+day; break;
                case 3:num=60+day; break;
                case 4:num=91+day; break;
                case 5:num=121+day; break;
                case 6:num=152+day; break;
                case 7:num=182+day; break;
                case 8:num=213+day; break;
                case 9:num=244+day; break;
                case 10:num=274+day; break;
                case 11:num=305+day; break;
                case 12:num=335+day; break;
            }
        }
        else if(year%400==0)
        {
            switch(month)
            {
                case 1:num=0+day; break;
                case 2:num=31+day; break;
                case 3:num=60+day; break;
                case 4:num=91+day; break;
                case 5:num=121+day; break;
                case 6:num=152+day; break;
                case 7:num=182+day; break;
                case 8:num=213+day; break;
                case 9:num=244+day; break;
                case 10:num=274+day; break;
                case 11:num=305+day; break;
                case 12:num=335+day; break;
            }
        }
        else
        {
            switch(month)
            {
                case 1:num=0+day; break;
                case 2:num=31+day; break;
                case 3:num=59+day; break;
                case 4:num=90+day; break;
                case 5:num=120+day; break;
                case 6:num=151+day; break;
                case 7:num=181+day; break;
                case 8:num=212+day; break;
                case 9:num=243+day; break;
                case 10:num=273+day; break;
                case 11:num=304+day; break;
                case 12:num=334+day; break;
            }
        }
        printf("%d\n",num);
    }
    return 0;
}