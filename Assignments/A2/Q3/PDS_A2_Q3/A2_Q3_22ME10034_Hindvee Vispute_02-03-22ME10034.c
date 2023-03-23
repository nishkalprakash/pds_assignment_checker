#include<stdio.h>
#include<math.h>

int main(){
float x0, y0, xt, yt, u, theta, alpha, distance, t, theta1;

/* using printf and scanf to read values from the user */

printf("Enter value of x0 :\n");
scanf("%f", &x0);

printf("Enter value of y0 :\n");
scanf("%f", &y0);

printf("Enter value of theta :\n");
scanf("%f", &theta);
/* below is the formula to convert angle from degrees to radians*/
theta1 = (theta*3.14)/180; // theta1 is the angle in radians

printf("Enter value of time :\n");
scanf("%f", &t);

printf("Enter value of u :\n");
scanf("%f", &u);

printf("Enter value of a :\n"); // a is accelerarion.
scanf("%f", &alpha); // alpha is the variable used to denote acceleration

xt = x0 + (u*(cos(theta1))*t) + (0.5*alpha*(cos(theta1))*t*t);
yt = y0 + (u*(sin(theta1))*t) + (0.5*alpha*(sin(theta1))*t*t);


printf("The position of Q is :");
printf("xt, yt is %f, %f", xt, yt); // printing the values of xt & yt

return 0;

}
