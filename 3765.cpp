#include<stdio.h>
int main()
{
    int hour,min;
    scanf("%d:%d",&hour,&min);
    if(hour==0) printf("12:%02d AM",min);
    else if(hour==12) printf("12:%02d PM",min);
    else if(hour>=1&&hour<=11) printf("%d:%02d AM",hour,min);
    else if(hour>=13&&hour<=23) printf("%d:%02d PM",hour-12,min);
    return 0;
}