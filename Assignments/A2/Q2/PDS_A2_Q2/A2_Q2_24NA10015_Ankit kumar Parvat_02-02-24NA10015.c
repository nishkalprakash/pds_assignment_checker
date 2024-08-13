#include<stdio.h>
#include<math.h>

//  24NA10015 Ankit Kumar parvat
int main()
{
   double a=0.306;
   double b=1.2;
   double Rs=6.96e8;
   double Ts=1.3654e-11;
   double D=1.496e11;
   double Tp=Ts*sqrt((Rs*sqrt((1-a)/b))/(2*D));
   printf("\n Tp=%lf",Tp);
   double a2,b2,Rs2,Ts2,D2,Tp2;
   printf("\n a2");
   scanf("%le",&a2);// input from user
   printf("\n b2");
   scanf("%le",&b2);// input from user
   printf("\n Rs2");
   scanf("%le",&Rs2);// input from user
   printf("\n Ts2");
   scanf("%le",&Ts2);// input from user
   printf("\n D2");
   scanf("%le",&D2);// input from user
   Tp2=Ts2*sqrt((Rs2*sqrt((1-a2)/b2))/(2*D2));// calculating value
   printf("\n Tp2=%lf",Tp2);
   
   return 0;
}    
