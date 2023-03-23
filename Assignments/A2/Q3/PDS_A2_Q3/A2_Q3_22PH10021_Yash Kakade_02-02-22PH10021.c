#include <stdio.h>

int main()

{
    float u, theta, a, t, x0, y0; //Declaring input variable

    scanf("%f %f %f %f %f %f", &x0, &y0, &theta, &u, &a, &t);  //Scanning input

    float ux= u*cos((3.14*theta)/180.0), uy= u*sin(3.14*(theta)/180.0), ax= a*cos(3.14*(theta)/180.0), ay =a*sin(3.14*(theta)/180.0); //CAlculation of velocity and acc components

    float xt= x0 + ux*t + (ax*t*t)/2 , yt= y0 + uy*t + (ay*t*t)/2 ; //Solving

    printf("Q(Xt,Yt) = Q(%.2f,%.2f)", xt,yt) ; //Printing output

    return 0;



}

