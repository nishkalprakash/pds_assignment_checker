
#include<stdio.h>
#include<math.h>
int main()
{
double x0, y0, u, alpha, theta, A, B, t;
 printf("Please Input a0, b0 ,u, theta, alpha, Time\n  " );
 scanf( "%lf %lf %lf %lf %lf"  &a0 &b0 &u &alpha &theta );

A= (u*cos(theta)) + (alpha*cos(theta)*t*t/2 );
B= (u*sin(theta)) + (alpha*sin(theta)*t*t/2) ;

 printf("The Final position is Q(A,B) =(%lf, %lf)"   ,A,B);

 return 0;
}

