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
// output = 0.085913

// predefined code 
#include <stdio.h>
#include <math.h>
int main()
{

        double alpha1, rho1, Rs1, Ts1, D1, x1, y1, Tp1;
;
        alpha1 = 0.306;
        rho1 = 1.2;
        Rs1 = 6.96e8;
        Ts1 = 1.3654e-11;
        D1 = 1.496e11;
        
        x1 = sqrt((1-alpha1)/rho1);
        y1 = sqrt((Rs1 * x1)/2*D1);
        Tp1 = Ts1 * y1;
       
        printf("%lf", Tp1);
        return 0;
}