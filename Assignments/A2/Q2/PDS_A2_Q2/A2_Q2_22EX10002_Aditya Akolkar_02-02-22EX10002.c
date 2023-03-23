#include <stdio.h>
#include <math.h>

int main()
{
    //predefined input has been commented out so user can define values of all constants by himself
    //double alpha = 0.306 ;
    //double rho = 1.2 ;
    //double Rs = 6.96e8 ;
    //double Ts = 1.3654e-11 ;
    //double D = 1.496e11 ;
    //double Tp ;


    //To enable system defined values we will have to comment out code from line 16-34 and uncomment the above code
    double alpha, rho, Rs, Ts, D, Tp;

    printf("Enter value of alpha: \n");
    scanf("%lf" , &alpha);

    printf("Enter value of rho: \n");
    scanf("%lf" , &rho);

    printf("Enter value of Rs: \n");
    scanf("%lf" , &Rs);

    printf("Enter value of Ts: \n");
    scanf("%lf" , &Ts);

    printf("Enter value of D: \n");
    scanf("%lf" , &D);

    Tp = Ts * sqrt( Rs * sqrt((1-alpha)/rho) / (D+D));

    printf ("Value of Tp is: %lf", Tp);
}

//Comments:-
//Values of manual input of values and automated input are same
//Here we are getting value of Tp as 0.00 as the values are very small the function
//However above formula works for small values
//To get exact values we can use %le operator
//We can also write it by %0.20lf (Here it will Print value of Tp upto 20 decimal places). We can change precision of values by changing value after decimal.
//The value we get is rounded up or truncated at last decimal




