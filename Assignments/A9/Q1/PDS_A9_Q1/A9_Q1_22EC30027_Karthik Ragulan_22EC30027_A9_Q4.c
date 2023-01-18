#include<stdio.h>
typedef struct complex//structure with inputs of data types float
{
float real;
float imag;
}complex;
void add( complex a, complex b);//declaration of function to add the complex numbers

int main()
{
 complex a,b;
printf("enter the first complex number: ");//input the first complex number
scanf("%f %f",&a.real,&a.imag);
printf("enter the second complex number: ");//input second complex number
scanf("%f %f",&b.real,&b.imag);
add(a,b);
return 0;
}


void add( complex a, complex b)
{
float R;
float I;
R=a.real+b.real;//adding the real parts of the two complex numbers
I=a.imag+b.imag;//adding the imaginary parts of the two complex numbers
printf("Z=%f + %fi",R,I);//print the new complex number
return;
}

