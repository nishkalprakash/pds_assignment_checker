#include<stdio.h>
#include<math.h>
int main()
{
double a, rho, r , t, D;
printf("Write the value of alpha");
scanf("%le", &a);
printf("Write the value of rho");
scanf("%le", &rho);
printf("Write the value of Rs");
scanf("%le", &r);
printf("Write the value of Ts");
scanf("%le",&t);
printf("Write the value of D");
scanf("%le", &D);
printf("The value is %le", t*sqrt((r/(2*D))*(sqrt(((1)-a))/(rho))));

return 0;
}
