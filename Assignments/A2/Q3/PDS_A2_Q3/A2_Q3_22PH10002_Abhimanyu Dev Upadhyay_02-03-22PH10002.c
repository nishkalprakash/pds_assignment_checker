#include <stdio.h>
#include <math.h>

int main(){
    // Input
    float x0, y0, theta, u, a, t;                                   // Declaring all input variables
    scanf("%f%f%f%f%f%f", &x0, &y0, &theta, &u, &a, &t);            // Scanning for user input, using float to get accurate inputs

    // Unit Conversion
    float thetar;                       // Declaring thetar to use as the variable to store the angle in radians
    thetar = theta*3.14159/180;         // Formula to convert theta from degrees to radians

    // Component resolving
    float ux,uy,ax,ay;                  // Declaring components of initial velocity and acceleration on both axes
    float xcom = cos(thetar);           // Declaring xcom and using cos function to obtain x-component coefficient
    float ycom = sin(thetar);           // Declaring ycom and using sin function to obtain y-component coefficient
                                    // Formulae to find velocity and acceleration components
    ux = u*xcom;                        // Initial velocity in x direction
    uy = u*ycom;                        // Initial velocity in y direction
    ax = a*xcom;                        // Acceleration in x direction
    ay = a*ycom;                        // Acceleration in y direction

    // Solving
    float xt, yt;                       // Declaring variables to store final positions
                                    // Formulae to calculate new positions
    xt = x0 + ux*t + ax*t*t/2;          // new x position
    yt = y0 + uy*t + ay*t*t/2;          // new y position

    //Printing
    printf("Q(Xt,Yt) = Q(%.2f,%.2f)", xt, yt);          // Printing final result in intended format
                                                    //using %.2f to get answer up to 2 decimal places
    return 0;
}
