#include <stdio.h>
#include <math.h>
int main()
{
double alpha,rho,Rs,Ts,D;
printf("alpha : ");
scanf("%lf",&alpha);
printf("rho : ");
scanf("%lf",&rho);
printf("Rs : ");
scanf("%lf",&Rs);
printf("Ts : ");
scanf("%lf",&Ts);
printf("D : ");
scanf("%lf",&D);
float Tp = Ts*sqrt((Rs)*(sqrt((1-alpha)/rho))/(2*D));
//formula given in question
printf("Tp = %le",Tp);
//The value of Tp in 1st test case come out to be same as 5.742861e-13
return 0;
}
