
#include <stdio.h>
#include <math.h>

int main()

{
 
  double a, Rh, Rs, Ts, D ,Tp;
  
  printf ("Type the value of 'a' and 'rho' : \n" ) ;
   scanf ("%lf%lf", &a ,&Rh);
   
   printf ("Type the value of 'Rs', 'Ts', 'D' : \n") ;
   scanf ("%le%le%le" , &Rs, &Ts, &D) ;
   
   printf (" entered values are : %f,%f,%le,%le,%le \n", a, Rh, Rs, Ts, D);
   
   Tp= Ts*sqrt((Rs/2*D)*sqrt((1-a)/Rh));
   
   printf ("The Value of Tp is: %le , \n", Tp) ;
   
   double a1, Rh1, Rs1, Ts1, D1, Tp1 ;
   a1=0.306;
   Rh1= 1.2;
   Rs1=6.96e8;
   Ts1=1.3654e-11;
   D1=1.496e11;
   
   Tp1=Ts1*sqrt((Rs1/2*D1)*sqrt((1-a1)/Rh1));
   
   printf ("predefined value of Tp= %le, \n", Tp1) ;
    // The value of Tp was calculated using math functions which were found in math library, we used square root function and exponential function in this program//
   return 0;
   
   }
