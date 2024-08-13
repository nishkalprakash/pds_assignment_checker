#include<stdio.h>
#include<math.h>

int main() {
   double a ,si, Rs, Ts, D, Tp;  //Declaring variables with suitable data types
   double p,q,r;  //Extra variables for  calculation part
   printf("Enter value of a,si,Rs,Ts,D");
   scanf("%lf%lf%le%le%le",&a,&si,&Rs,&Ts,&D) ;  //User input
   p = sqrt((1-a)/si) ;
   q = Rs*p ;
   r = q/(2*D) ;
   Tp = Ts*sqrt(r) ; 
   printf("Value of Tp %le",Tp) ;
}

//Tp when system input = 5.742861e-13
//Tp when user input = 5.742861e-13
