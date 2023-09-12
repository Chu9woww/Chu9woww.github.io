#include<stdio.h>
#include<stdlib.h>
int main()
{
    double mp,wp,num;
    int m,w;
    while(scanf("%d%d",&m,&w)!=EOF){
    num=m+w;
    mp=m/num;
    wp=w/num;
    printf("%.2f%% %.2f%%\n",mp*100,wp*100);}
    return 0;
}