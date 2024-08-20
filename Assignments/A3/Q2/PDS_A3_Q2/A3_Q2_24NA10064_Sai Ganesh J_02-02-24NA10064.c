#include <stdio.h>
#include <math.h>
int main()
{
        double alpha, rho, Rs, Ts, D, x, y, Tp;
        double alpha1, rho1, Rs1, Ts1, D1;
        printf("Enter the values of alpha, rho, Rs, Ts, D respectively");
        scanf("%lf %lf %lf %lf %lf", &alpha, &rho, &Rs, &Ts, &D);
        x = sqrt((1-alpha)/rho);
        y = sqrt((Rs * x)/2*D);
        Tp = Ts * y;
        printf("%lf", Tp);
        return 0;
}
