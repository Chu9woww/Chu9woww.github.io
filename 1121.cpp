#include<stdio.h>
#include<math.h>
int main()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=abs(4-i);j++) printf(" ");
        for(j=1;j<=((i<4)?2*i-1:15-2*i);j++) printf("*");
        printf("\n");
    }
    return 0;
}