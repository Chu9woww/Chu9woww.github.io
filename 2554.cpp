#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1000],str2[1000];
    scanf("%s\n%s",str1,str2);
    if(strcmp(str1,str2)==0) printf("%s=%s",str1,str2);
    else if(strcmp(str1,str2)>0) printf("%s>%s",str1,str2);
    else printf("%s<%s",str1,str2);
    return 0;
}#include<stdio.h>
int sort(int s[10000],int n)
{
    int i,j,t,sum=0;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(s[j]>s[j+1])
            {
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
                sum++;
            }
        }
    }
    return sum;
}
int main()
{
    int n,t,i,j,c,a[10000];
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        c=sort(a,n); 
        printf("%d\n",c);
    }
    return 0;
}