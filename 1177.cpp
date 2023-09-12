#include<stdio.h>
int main()
{
    int h1,h2,m1,m2,s1,s2,t,time1,time2;
    scanf("%d:%d:%d\n%d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);
    time1=h1*3600+m1*60+s1;
    time2=h2*3600+m2*60+s2;
    if(time1>=time2)
    {
        t=time1-time2;
        s1=t%60;
        h1=t/3600;
        m1=t/60-h1*60;
        printf("%02d:%02d:%02d",h1,m1,s1);
    }
    else
    {
        t=time2-time1;
        s2=t%60;
        h2=t/3600;
        m2=t/60-h2*60;
        printf("%02d:%02d:%02d",h2,m2,s2);
    }
    return 0;
}