#include<stdio.h>
#include<math.h>

int main(){
double Ts,Rs,D,alpha,rho;
printf("enter the value of Ts = ");
scanf("%le",&Ts);
printf("enter the value of rho = ");
scanf("%lf", &rho);
printf("enter the value of alpha = ");
scanf("%lf",&alpha);
printf("enter the value of D = ");
scanf("%le",&D);
printf("enter the value of Rs = ");
scanf("%le",&Rs);
double Tp = Ts*sqrt(Rs*sqrt((1-alpha)/rho)/(2*D));
printf(" Tp = %le", Tp);


return 0
;}
// no change in output i.e, 5.742861e-13
