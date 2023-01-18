/*

Section 14

Roll no : 22CE10065

Name : Saloni Shaw

Assignment 9

Description - Program to print the sum of complex numbers
*/

#include <stdio.h>
typedef struct
{
float real;
float imag;
}complex;
complex add (complex z1, complex z2)
{
complex s;
s.real=z1.real+z2.real;
s.imag=z1.imag+z2.imag;
return s;//returning a value
}
int main()//main function
{
complex a,b,sum;
printf("z1 ");
scanf("%f %f",&a.real,&a.imag);//taking input for z1
printf("z2 :");
scanf("%f %f",&b.real,&b.imag);//taking input for z2
sum=add(a,b);
printf("%f %fi",sum.real,sum.imag);//printing the result
return 0;
}//end of program
