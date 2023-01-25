`/*Abhisekh Mukherjee
sec :14 , roll no:22MA10002;
assingment number:7
problem:3
topic:structures
*/
#include<stdio.h>
// structure to store real and imaginary part of a complex number
typedef struct complex{
float real;
float imag;
}complex;
// function to compute addition of two complex number
complex add(complex z1,complex z2){
complex temp;
temp.real=z1.real+z2.real;
temp.imag=z1.imag+z2.imag;
return temp;
}
// main function
int main()
{
complex z1,z2,z3;;
printf("enter the real part of  first complex number\n");
scanf("%f",&z1.real); 
printf("enter the imaginary part of  first complex number\n");
scanf("%f",&z1.imag); 
printf("enter the real part of  second complex number\n");
scanf("%f",&z2.real); 
printf("enter the imaginary part of  second complex number\n");
scanf("%f",&z2.imag); 
z3=add(z1,z2); // calling the function
printf("the sum of two complex number is %f+%fi",z3.real,z3.imag);
printf("\n");
return 0;
}
