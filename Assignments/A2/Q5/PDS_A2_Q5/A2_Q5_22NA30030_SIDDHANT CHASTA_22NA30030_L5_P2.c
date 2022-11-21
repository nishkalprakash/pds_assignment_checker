// This program is used to find the velocity of a ball in a particular problem at different instants, height and collision
#include<stdio.h>
#include<math.h>                             
int main()
{
float a,b,c,d,e,s;// Floating characters for my formula
scanf("%f%f%f%f%f", &a,&b,&c,&d,&e);// Feeding the required data for calculation of the speed of the ball 
s=sqrt(a*b*c)/(d*e); // Here is my formula for the speed of ball for every case according to the problem
printf("%f",s);// Getting the result
return 0;
}



