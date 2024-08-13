#include <stdio.h>
#include<math.h>
int main(){
double alpha ,rho,a,b,Tp;
double Rs,Ts,D;
alpha = 0.306;
rho = 1.2;
Rs =6.96e8;
Ts=1.3654e-11;
D = 1.496e11;
a =sqrt((1-alpha)/rho);
b =sqrt((Rs*a)/(2*D));
Tp=Ts*b;
printf("Value of Tp is %le",Tp);
return 0;}


