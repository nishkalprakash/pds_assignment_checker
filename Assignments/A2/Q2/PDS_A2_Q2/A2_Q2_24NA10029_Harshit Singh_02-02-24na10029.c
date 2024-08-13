#include<stdio.h>
#include<math.h>

int main()
{
double alpha, rho , Rs , Ts ,D, Tp;
printf("Enter the value of alpha = ");
scanf("%le",&alpha);
printf("Enter the value of rho =");
scanf("%le",&rho);
printf("Enter the value of Rs =");
scanf("%le",&Rs);
printf("Enter the value of Ts =");
scanf("%le",&Ts);
printf("Enter the value of D = ");
scanf("%le",&Ts);


Tp = Ts*sqrt(Rs*sqrt(1 - alpha/rho)/2*D);

printf("the value of %le\n", Tp);

return 0; 
}
