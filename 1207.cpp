#include <stdio.h>
int main() 
{ 
   float r,h,C,S1,S2,V;
   scanf("%f %f",&r,&h);
   C=2*3.1415926*r;
   S1=3.1415926*r*r;
   S2=C*h;
   V=S1*h;
   printf("%.2f %.2f %.2f %.2f",C,S1,S2,V);
   return 0;
}