#include<stdio.h>                            
int main()
{
    int n,a[10],i;
    int min,max;      
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);}
        min=0;
        max=0;
    for(int i=1;i<n;i++){
         if(a[i]>a[max]){
             max=i;
           }
        if(a[i]<a[min]){
             min=i;
            }
     }
    int t;
    t=a[0];a[0]=a[min];a[min]=t;
    t=a[n-1];a[n-1]=a[max];a[max]=t;
    for(int i=0;i<=n-1;i++){
        if(i==n-1)printf("%d",a[i]);
        else printf("%d ",a[i]);
    }
    return 0;
}