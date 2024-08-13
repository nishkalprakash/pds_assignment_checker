#include <stdio.h>
#include <math.h>

int main()
{
int alpha, rho, Rs, Ts, D, Tp;
scanf("%d %d %d %d %d", &alpha, &rho, &Rs, &Ts, &D);
Tp= Ts*(sqrt((Rs*(sqrt((1-alpha)/rho))/2*D)));
printf("Tp=%d", Tp);
return 0;
}
