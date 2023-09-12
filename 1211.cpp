#include<stdio.h>
void sort(float s[])
{
    int i,j;
    float t;
    for(i=0;i<7;i++)
    {
        for(j=0;j<7-i;j++)
        {
            if(s[j+1]>s[j])
            {
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
        }
    }
}
int main()
{
    int i;
    float s[7];
    char c[30];
    for(i=0;i<7;i++) s[i]=0;
    while(scanf("%f",&s[0])!=EOF)
    {
        float a=0.0;
        for(i=1;i<7;i++) scanf("%f",&s[i]);
        scanf("%s",&c);
        sort(s);
        for(i=1;i<=5;i++) a+=s[i];
        a=a/5.0;
        printf("%s %.2f\n",c,a);
    }
    return 0;
}