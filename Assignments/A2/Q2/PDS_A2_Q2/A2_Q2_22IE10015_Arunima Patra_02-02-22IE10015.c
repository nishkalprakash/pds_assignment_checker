#include<stdio.h>
#include<math.h>
int main(){
double alpha; double rho; double Rs; double Ts; double D; double Tp;

printf ("Enter the value of alpha:");
scanf ("%lf", &alpha);//storing  the value of alpha in the variable
printf ("Enter the value of rho:");
scanf ("%lf", &rho);//storing  the value of rho in the variable
printf ("Enter the value of Rs:");
scanf ("%lf", &Rs);//storing  the value of Rs in the variable
printf ("Enter the value of Ts:");
scanf ("%lf", &Ts);//storing  the value of Ts in the variable
printf ("Enter the value of D:");
scanf ("%lf", &D);//storing  the value of D in the variable
Tp=Ts*sqrt((Rs*(sqrt((1-alpha)/rho)))/(2*D));
printf ("The value of Tp:%le", Tp);//printing the value of Tp
return 0;
}

//The user declared values and user input values are same.




