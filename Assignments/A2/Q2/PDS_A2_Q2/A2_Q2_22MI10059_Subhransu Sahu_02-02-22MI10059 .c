#include <stdio.h>
#include <math.h>

int main(){
double alpha=0.306;
double rho=1.2;
double Rs=6.96e8;
double Ts=1.365e-11;
double D=1.496e11;
double Tp;


printf("alpha =");
scanf("%lf", &alpha);
printf("rho =");
scanf("%lf", &rho);
printf("Rs =");
scanf("%le", &Rs);
printf("Ts =");
scanf("%le", &Ts);
printf("D =");
scanf("%le", &D);

Tp = Ts * sqrt( (Rs * sqrt( (1 - alpha)/ alpha)) / (2 * D) );

printf("Tp=%le", Tp);
return 0;
}
//in test 1 the output is same Tp=8.079156e-13
//in test 2 the ouptut is same as Tp=8.079156e-13
