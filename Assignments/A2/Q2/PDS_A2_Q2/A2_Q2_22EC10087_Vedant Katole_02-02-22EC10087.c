#include <stdio.h>
#include <math.h>
//this program reads input from the user and then calculates Tp
int main(){
double alpha, rho, Rs, Ts, D, Tp;
alpha = 0.306;
rho = 1.2;
Rs = 6.96e8;
Ts = 1.3654e-11;
D = 1.496e11;
Tp = Ts * sqrt ( Rs * sqrt ((1 - alpha)/rho) / 2*D );
printf("Tp = %lf", Tp);

printf("\n\nalpha = ");
scanf("%lf", &alpha);

printf("\nrho = ");
scanf("%lf", &rho);

printf("\nRs = ");
scanf("%lf", &Rs);

printf("\nTs = ");
scanf("%lf", &Ts);

printf("\nD = ");
scanf("%lf", &D);

Tp = Ts * sqrt ( Rs * sqrt ((1 - alpha)/rho) / 2*D );

printf("\n\nTp = %lf\n\n", Tp);
return 0;
//the value of Tp in both cases is the same...
}
