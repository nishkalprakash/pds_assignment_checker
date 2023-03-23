#include <stdio.h>
#include <math.h>

int main ()
   {
      double alpha=0.306, sigma=1.2, Rs=6.96e8, Ts=1.3654e-11, D=1.496e11 ;

       double Tp ; //Tp is predefine programm value

       double V= sqrt((1-alpha)/sigma);

       Tp= Ts*(sqrt((Rs/(2*D))*V));
       printf( "The value of Tp is %Ie", Tp); // The value of predefine programm  is 5.742861e-13




       double alpha2, sigma2, Rs2, Ts2, D2;
       printf( "\nEnter the value of alpha2, sigma2, Rs2, Ts2, D2: \n");
       scanf( "%lf %lf %lf %lf %lf", &alpha2, &sigma2, &Rs2, &Ts2, &D2 );

       double Tp2 ; //Tp2 is input given by user
       double W= sqrt((1-alpha2)/sigma2);

       Tp2= Ts2*(sqrt((Rs2/(2*D2))*W));

       printf( "\nThe value of Tp2 is %Ie", Tp2) ; // The value of manual input is coming same as predefine programm which is 5.742861e-13

       return 0;


   }
