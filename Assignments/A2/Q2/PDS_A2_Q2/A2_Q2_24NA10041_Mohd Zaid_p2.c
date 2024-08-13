#include<stdio.h>
#include<math.h>
int main()
//a=alpha o=ro T=Ts//
{
   double a,o,R,T,D,Tp;
   scanf("%le,%le,%le,%le,%le",&a,&o,&R,&T,&D);
   Tp=T*sqrt((R*sqrt((1-a)/o)/(2*D)));
   printf("%le",Tp);
   return 0;
   }
