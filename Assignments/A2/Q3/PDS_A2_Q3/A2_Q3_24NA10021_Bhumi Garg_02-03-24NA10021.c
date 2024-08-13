// Program to calculate the position of a particle after time t
// Code Creator: Bhumi Garg
// Roll No: 24NA10021

#include <stdio.h>
#include <math.h>

int main ()
{ 
       double x0, y0, u, theta, a, t, THETA, xt, yt;
       
       printf (" Enter the values of x0, y0, u, theta, a and t: ");
       scanf ("%lf%lf%lf%lf%lf%lf", &x0, &y0, &u, &theta, &a, &t);
       
       THETA = (M_PI)*theta/180;
      
       xt = x0 + u*cos(THETA)*t + 0.5*a*cos(THETA)*t*t ;
       
       yt = y0 + u*sin(THETA)*t +0.5*a*sin(THETA)*t*t ;
       
 printf (" The final position Q(xt,yt) of the partical is %lf, %lf", xt,yt);
 
 }
      
      
      
      
