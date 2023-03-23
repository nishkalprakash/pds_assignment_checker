#include <stdio.h>
#include <math.h>

int main(){
    // Initialization
    // Initializing all required variables as if the user does not give any input these values have to be stored in the variables to solve for ts
    double alpha = 0.306, rho = 1.2, Rs = 6.96e8, Ts = 1.3654e-11, d = 1.496e11;            // Declaring all input variables
    double tp;                                                                              // Declaring output variable
    tp = Ts*sqrt((Rs*sqrt((1-alpha)/rho))/(2*d));                           // Writing the formula in C arithmetic to calculate tp from all input variables

    //Computer Value with initialization prints 5.742861e-13

    //Scanning
    double  alphai, rhoi, Rsi, Tsi, di, tpi;                                 // Defining new variables
    scanf("%lf %lf %lf %lf %lf", &alphai, &rhoi, &Rsi, &Tsi, &di);           // Taking input from user and storing in variables
    tpi = Tsi*sqrt((Rsi*sqrt((1-alphai)/rhoi))/(2*di));                      // Calculating tp again using new values

    //Printing
    printf("%Answer w/ Input = Ie\n", tpi);         // Printing tp using user inputs
    printf("%Answer w/o input = Ie\n", tp);         // Printing tp using given variables
    return 0;
}
