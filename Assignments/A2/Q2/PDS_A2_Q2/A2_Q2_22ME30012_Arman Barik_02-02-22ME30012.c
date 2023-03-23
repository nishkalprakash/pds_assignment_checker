#include <stdio.h>
#include <math.h>
void main()
{
 double alpha,rho,Rs,Ts,D,Tp;
scanf("%lf", & alpha);
scanf("%lf", & rho);
scanf("%le", & Rs);
scanf("%le", & Ts);
scanf("%le", &D);
Tp=(Ts*(sqrt((Rs*(sqrt((1-alpha)/rho)))/2*D)));

printf("Tp=%le\n",Tp);


//Comparing the output of the above with the case when the values are predefined in the program (i.e. no user input).
double alpha1,rho1,Rs1,Ts1,D1,Tp1;
alpha1=0.306;
rho1=1.2;
Rs1=6.96e8;
Ts1=1.3654e-11;
D= 1.496e11;
Tp=(Ts*(sqrt((Rs*(sqrt((1-alpha)/rho)))/2*D)));

printf("Tp=%le",Tp);

// For both cases I got the same value of Tp.As 8.591320e-02.
}
