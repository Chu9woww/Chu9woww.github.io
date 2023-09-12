#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2;
    while(scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2)!=EOF)
    {
        double x=0.00,y=0.00,dis=0.00;
        x=fabs(x2-x1);
        y=fabs(y2-y1);
        dis=sqrt(pow(x,2)+pow(y,2));
        printf("%.2lf\n",dis);
    }
    return 0;
}