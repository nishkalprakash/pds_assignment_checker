#include <stdio.h>
#include<math.h>
typedef struct complex {
float real;
float imag;
} complex;
complex add(complex z1, complex z2);
complex sub(complex z1, complex z2);
complex mul(complex z1, complex z2);
complex div(complex z1, complex z2);
float mod(complex z){
 float p;
 p=sqrt(pow(z.real,2)+pow(z.imag,2));
 return p;
}

int main() {
    float f;
complex z1, z2, result;
printf("Enter 1st complex number: \n");
printf("Enter the real part: ");
scanf("%f", &z1.real);
printf("Enter the imaginary part: ");
scanf("%f", &z1.imag);
printf("Enter 2nd complex number :\n");
printf("Enter the real part: ");
scanf("%f", &z2.real);
printf("Enter the imaginary part: ");
scanf("%f", &z2.imag);
result = add(z1, z2);
if(result.imag>=0)printf("Complex number 1 : %1f+%1fi\n", z1.real, z1.imag);
if(result.imag<0)printf("Complex number 1 : %1f%1fi\n", z1.real, z1.imag);

if(result.imag>=0)printf("Complex number 2 : %1f+%1fi\n", z2.real, z2.imag);
if(result.imag<0)printf("Complex number 2 : %1f%1fi\n", z2.real, z2.imag);

if(result.imag>=0)printf("Addition : %1f+%1fi\n", result.real, result.imag);
if(result.imag<0)printf("Addition : %1f%1fi\n", result.real, result.imag);
result=sub(z1,z2);
if(result.imag>=0)printf("Subtraction : %1f+%1fi\n", result.real, result.imag);
if(result.imag<0)printf("Subtraction : %1f%1fi\n", result.real, result.imag);
result=mul(z1,z2);
if(result.imag>=0)printf("Multiplication : %1f+%1fi\n", result.real, result.imag);
if(result.imag<0)printf("Multiplication: %1f%1fi\n", result.real, result.imag);
result=div(z1,z2);
if(result.imag>=0)printf("Division : %1f+%1fi\n", result.real, result.imag);
if(result.imag<0)printf("Division : %1f%1fi\n", result.real, result.imag);
f=mod(z1);
printf("Modulus of the complex number 1: %f\n",f);
f=mod(z2);
printf("Modulus of the complex number 2: %f\n",f);
return 0;
}
complex add(complex z1, complex z2){
complex temp;
temp.real = z1.real + z2.real;
temp.imag = z1.imag + z2.imag;
return (temp);
}
complex sub(complex z1, complex z2){
complex temp;
temp.real=z1.real-z2.real;
temp.imag=z1.imag-z2.imag;
return (temp);
}
complex mul(complex z1, complex z2){
complex temp;
temp.real=((z1.real*z2.real)-(z1.imag*z2.imag));
temp.imag=((z1.real*z2.imag)+(z1.imag*z2.real));
return (temp);
}
complex div(complex z1, complex z2){
complex temp;
temp.real=((z1.real*z2.real)+(z1.imag*z2.imag))/(sqrt(pow(z2.real,2)+pow(z2.imag,2)));
temp.imag=((z1.real*z2.imag)-(z1.imag*z2.real))/(sqrt(pow(z2.real,2)+pow(z2.imag,2)));
return (temp);
}
