#include <stdio.h>
#include <math.h>   //including the math.h library
int main()
{
   double alpha,rho,Rs,Ts,D,Tp;   //Declaring the required variables
   printf("Alpha:");
   scanf("%lf",&alpha);           //Taking input from user
   printf("Rho:");
   scanf("%lf",&rho);
   printf("Rs:");
   scanf("%lf",&Rs);
   printf("Ts:");
   scanf("%lf",&Ts);
   printf("D:");
   scanf("%lf",&D);
   Tp = Ts*sqrt((Rs*sqrt((1-alpha)/rho))/(2.0*D));   //Calculating Tp
   printf("Value of Tp = %le",Tp);  //Printing Tp
   return 0;
}
/*
double alpha = 0.306;
double rho = 1.2;
double Rs = 6.96e8;
double Ts = 1.3654e-11;
double D = 1.496e11;
Tp = Ts*sqrt((Rs*sqrt((1-alpha)/rho))/(2.0*D));
printf("Value of Tp = %lf",Tp); 5.751106e-13

For both the cases the output is same
*/
