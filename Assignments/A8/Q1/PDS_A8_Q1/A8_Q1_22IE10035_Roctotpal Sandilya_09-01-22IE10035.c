#include <stdio.h>
#include <math.h>
/*
   sec-2
   Assignment no.- 8
   Roll no- 22IE10035
   Name- Roctotpal Sandilya
   Que no.- 1
*/

int main(){
typedef struct Complex{
    float real;
    float img;
}complex;

complex addc(complex a, complex b){
    complex z;
    z.real = a.real+b.real;
    z.img = a.img+b.img;
    return z;
}
complex subc(complex a, complex b){
    complex z;
    z.real = a.real-b.real;
    z.img = a.img-b.img;
    return z;
}
complex mul(complex a, complex b){
    complex z;
    z.real = a.real*b.real-a.img*b.img;
    z.img = a.real*b.img+a.img*b.real;
    return z;
}
float modc(complex a){
    return sqrt(a.real*a.real+a.img*a.img);
}
complex divc(complex a, complex b){
    complex z;
    z.real = (a.real*b.real+a.img*b.img)/pow(modc(b),2);
    z.img = (a.img*b.real-a.real*b.img)/pow(modc(b),2);
    return z;
}

complex z1, z2, z3;

printf("Enter the 1st complex number:\n");
printf("Enter the real part: ");
scanf("%f", &z1.real);
printf("Enter the imaginary part: ");
scanf("%f", &z1.img);
printf("Enter the 2nd complex number:\n");
printf("Enter the real part: ");
scanf("%f", &z2.real);
printf("Enter the imaginary part: ");
scanf("%f", &z2.img);
printf("Enter the 3rd complex number:\n");
printf("Enter the real part: ");
scanf("%f", &z3.real);
printf("Enter the imaginary part: ");
scanf("%f", &z3.img);
printf("\nComplex number 1: ");
printf("%f + %fi", z1.real, z1.img);
printf("\nComplex number 2: ");
printf("%f + %fi", z2.real, z2.img);

printf("\nAddition: %f + %fi", addc(z1,z2).real, addc(z1,z2).img);
printf("\nSubtraction: %f + %fi", subc(z1,z2).real, subc(z1,z2).img);
printf("\nMultiplication: %f + %fi", mul(z1,z2).real, mul(z1,z2).img);
printf("\nDivision: %f + %fi", divc(z1,z2).real, divc(z1,z2).img);
printf("\nModulus of complex number 1: %f", modc(z1));
printf("\nModulus of complex number 2: %f", modc(z2));


complex z;
z.real = mul(divc(subc(z1,z2),addc(z1,z2)), z3).real + 4.39;
z.img =  mul(divc(subc(z1,z2),addc(z1,z2)), z3).img;

printf("\nValue of z: %f + %fi", z.real, z.img);
printf("\nModulus of z: %f", modc(z));

return 0;
}



