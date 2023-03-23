#include<stdio.h>
#include<math.h>
int main(){
double alpha,rho,Rs,Ts,D,Tp;
printf("alpha: ");
scanf("%lf",&alpha);
printf("rho: ");
scanf("%lf",&rho);
printf("Rs: ");
scanf("%le",&Rs);
printf("Ts: ");
scanf("%le",&Ts);
printf("D: ");
scanf("%le",&D);
Tp=Ts*sqrt(Rs*sqrt((1-alpha)/rho)/(2*D));
printf("Tp :%le",Tp);
return 0;
}
//Below mentioned is the predefined (no user input) code;
/*
#include<stdio.h>
#include<math.h>
int main(){
double alpha,rho,Rs,Ts,D,Tp;
alpha=0.306;
rho=1.2;
Rs=6.96e8;
Ts=1.3654e-11;
D=1.496e11;
Tp=Ts*sqrt(Rs*sqrt((1-alpha)/rho)/(2*D));
printf("Tp :%le",Tp);
return 0;
}
*/
