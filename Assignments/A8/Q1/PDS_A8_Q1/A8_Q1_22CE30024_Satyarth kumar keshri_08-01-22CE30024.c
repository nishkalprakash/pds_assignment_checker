#include <stdio.h>
#include<math.h>

typedef struct Complex {

float real;

float imag;

}

  Complex;

Complex add(Complex z1, Complex z2);

Complex subtract(Complex z1, Complex z2);

Complex multiply(Complex z1, Complex z2);

Complex divide(Complex z1, Complex z2);

int main()

     {

 Complex z1,z2,result;

printf("For 1st Complex number \n");

printf("Enter the real and imaginary parts: ");

scanf("%f %f", &z1.real, &z1.imag);

printf("\nFor 2nd Complex number \n");

printf("Enter the real and imaginary parts: ");

scanf("%f %f", &z2.real, &z2.imag);

result = add(z1, z2);

printf("The Sum of given complex number is = %.f + i%.f \n", result.real, result.imag);

result = subtract(z1, z2);

printf("The subtraction of given complex number is = %.f + i%.f \n", result.real, result.imag);

result = multiply(z1, z2);

printf("The mutliplication of given complex number is = %.f + i%.f \n", result.real, result.imag);

result = divide(z1, z2);

printf("The division of given complex number is = %.f + i%.f \n", result.real, result.imag);

  return 0;

}

  Complex add(Complex z1, Complex z2){

   Complex temp;

  temp.real = z1.real + z2.real ;

 temp.imag = z1.imag + z2.imag ;

 return (temp);

  }

  Complex subtract(Complex z1, Complex z2){

   Complex temp;

  temp.real = z1.real - z2.real ;

 temp.imag = z1.imag - z2.imag ;

 return (temp);

  }

   Complex multiply(Complex z1, Complex z2){

 Complex temp;

  temp.real = z1.real*z2.real - z1.imag*z2.imag ;

  temp.imag = z1.real*z2.imag + z1.imag*z2.real ;

  return (temp);

  }

    Complex divide(Complex z1, Complex z2){

    Complex temp;

  temp.real = (z1.real*z2.real + z1.imag*z2.imag)/(pow(z2.real,2) + pow(z2.imag,2))  ;

  temp.imag = (z1.imag*z2.real - z1.real*z2.imag)/(pow(z2.real,2) + pow(z2.real,2))  ;

   return (temp);
       }
