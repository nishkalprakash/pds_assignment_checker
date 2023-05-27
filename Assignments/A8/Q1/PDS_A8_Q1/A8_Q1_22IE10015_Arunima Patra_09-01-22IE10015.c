//sec 2
//Assignment no-8
//Roll no-22IE10015
//Name-Arunima Patra
//Question no-1
#include<stdio.h>
#include<math.h>
typedef struct complex{
   float real;
   float imag;
}complex;
complex add(complex z1, complex z2){
   complex z4;
   z4.real=z1.real+z2.real;
   z4.imag=z1.imag+z2.imag;
return z4;
}
complex sub(complex z1, complex z2){
    complex z5;
    z5.real=z1.real-z2.real;
    z5.imag=z1.imag-z2.imag;
    return z5;
}
complex mul(complex z1, complex z2){
  complex z6;
   z6.real=z1.real*z2.real-z1.imag*z2.imag;
    z6.imag=z1.real*z2.imag+z1.imag*z2.real;
 return z6;

}
complex divc(complex z1, complex z2){
  complex z7;
  z7.real=(z1.real*z2.real+z1.imag*z2.imag)/(z2.real*z2.real+z2.imag*z2.imag);
  z7.imag=(z1.imag*z2.real-z1.real*z2.imag)/(z2.real*z2.real+z2.imag*z2.imag);
  return z7;
}
float mod(complex z1){
   float z;
   z=sqrt(z1.real*z1.real+z1.imag*z1.imag);
   return z;
}





int main(){
    complex z1, z2, z3, z4, z5,z6, z7, z;
    printf("Enter the first complex number\n:");
    printf("Enter the real part\n:");
    scanf("%f", &z1.real);
    printf("Enter the imaginary part\n:");
    scanf("%f", &z1.imag);
    printf("Enter the second complex number\n:");
    printf("Enter the real part:\n");
    scanf("%f", &z2.real);
    printf("Enter the imaginary part:\n");
    scanf("%f", &z2.imag);
    printf("Enter the third complex number\n:");
    printf("Enter the real part\n:");
    scanf("%f", &z3.real);
    printf("Enter the imaginary part\n:");
    scanf("%f", &z3.imag);
    int i=1;
    printf("\ncomplex number %d:%0.2f +%0.2fi\n", i, z1.real,z1.imag);
    printf("\nModulus of complex number %d: %0.2f", i, mod(z1));
    i++;
    printf("\ncomplex number %d:%0.2f +%0.2fi\n", i, z2.real,z2.imag);
    printf("\nModulus of complex number %d: %0.2f", i, mod(z2));
    z4=add(z1,z2);
    z5=sub(z1,z2);

    printf("\nAddition:%0.2f+%0.2fi\n", z4.real,z4.imag);
    printf("\nSubstraction:%0.2f+%0.2fi\n", z5.real,z5.imag);
    z6=mul(z1,z2);
    printf("\nMultiplication:%0.2f+%0.2fi\n", z6.real,z6.imag);
    z7=divc(z1, z2);
    printf("\nDivision:%0.2f+%0.2fi\n", z7.real,z7.imag);
     z=mul(z3,divc(sub(z1, z2),add(z1, z2)));
     z.real=z.real+4.39;


    printf("\nValue of z:%0.2f+%0.2fi\n", z.real,z.imag);
    printf("\nModulus of z:%0.2f",mod(z));
    return 0;
}
