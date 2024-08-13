//Program to evaluate a math equation
//Code Creater: Vishal Maurya
//Roll NO: 24NA10077
#include <stdio.h>
#include <math.h>
int main()
{
	double alpha1 = 0.306, rho1 = 1.2, Rs1 = 6.96e8, Ts1 = 1.3654e-11, D1 = 1.496e11 , Tp1;
	double alpha2, rho2, Rs2, Ts2, D2, Tp2;
	double a1 = (1-alpha1)/rho1;
	double b1 = sqrt(a1);
	double c1 = Rs1*b1;
	double d1 = c1/(2*D1);
	double e1 = sqrt(d1);
	Tp1 = Ts1*e1;
	
	printf ("enter alpha: ");
	scanf ("%le", &alpha2);
	
	printf ("enter rho: ");
	scanf ("%le", &rho2);
	
	printf ("enter Rs: ");
	scanf ("%le", &Rs2);
	
	printf ("enter Ts: ");
	scanf ("%le", &Ts2);
	
	printf ("enter D: ");
	scanf ("%le", &D2);
	
	double a2 = (1-alpha2)/rho2;
	double b2 = sqrt(a2);
	double c2 = Rs2*b2;
	double d2 = c2/(2*D2);
	double e2 = sqrt(d2);
	Tp2 = Ts2*e2;
	
	printf ("\nTp from entered Value %le", Tp2);
	printf ("\nActual Tp Value %le", Tp1);
	
	return 0;
}
