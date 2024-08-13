// Program to calculate Tp by taking user input
// Code Creator: Bhumi Garg
// Roll No: 24NA10021
#include <stdio.h>
#include <math.h>

int main ()

{ 
    double a, sig;
    double Rs, Ts, D, Tp;
    
    printf ("Enter the values of a and sig: ");
    scanf (" %lf%lf", &a,&sig);
    
    printf (" Enter the values of Rs, Ts and D: ");
    scanf (" %le%le%le", &Rs, &Ts, &D);
    
    Tp = Ts * sqrt((Rs * sqrt ((1-a)/sig))/2*D);
    printf (" The value of Tp is %lf", Tp);
    
    double A, SIG, rs, ts, d, TP;
    A = 0.306, SIG = 1.2, rs = 6.96e8, ts = 1.3654e-11, d = 1.496e11 ;
    
    TP =ts * sqrt((rs * sqrt ((1-A)/SIG))/2*d);
    
    printf ("\n The value of TP is %le", TP);
    return 0;
}

// The difference between the answer computed by taking user input and by using the predefined values of the same variables was in the decimal accuracy and the representation of the answer. The answer calculated with the predefined values was accurate to 2 more decimal places and was expressed in the standard scientific notations.
