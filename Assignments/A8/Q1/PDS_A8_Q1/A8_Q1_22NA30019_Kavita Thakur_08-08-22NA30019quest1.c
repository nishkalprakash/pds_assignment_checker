

/*
* Section 2
* Roll No.: 22NA30019
* Name : Kavita Thakur
* Assignment No.: 8
* Description : complex number algebra
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

typedef struct Complex{
   float real;
   float imag;
   }complex;

   //function prototype
   complex add(complex z1,complex z2);
   complex sub(complex z1,complex z2);
   complex mul(complex z1,complex z2);
   complex divc(complex z1,complex z2);
   float modc(complex z1);

int main(){
    complex z1,z2,z3,addition,subtraction,multiplication,division,z11,z;
    float mod1,mod2,modz;
    printf("Enter z1\n");
    printf("Enter real part of z1 : ");
    scanf("%f",&z1.real);
    printf("Enter imaginary part of z1 : ");
    scanf("%f",&z1.imag);

    printf("Enter z2\n");
    printf("Enter real part of z2 : ");
    scanf("%f",&z2.real);
    printf("Enter imaginary part of z2 : ");
    scanf("%f",&z2.imag);

    printf("Enter z3\n");
    printf("Enter real part of z3 : ");
    scanf("%f",&z3.real);
    printf("Enter imaginary part of z3 : ");
    scanf("%f",&z3.imag);

    printf("z1 = %f + %fi \n",z1.real,z1.imag);
    printf("z2 = %f + %fi \n",z2.real,z2.imag);
    printf("z3 = %f + %fi \n",z3.real,z3.imag);

    addition = add(z1,z2);
    subtraction = sub(z1,z2);
    multiplication = mul(z1,z2);
    mod1 = modc(z1);
    mod2 = modc(z2);
    division = divc(z1,z2);
    z11 = mul(divc(sub(z1,z2),add(z1,z2)),z3);
    z.imag = z11.imag;
    z.real = z11.real + 4.39;
    modz = modc(z);

    printf("Addition : %f + %fi \n",addition.real,addition.imag);
    printf("Subtraction : %f + %fi \n",subtraction.real,subtraction.imag);
    printf("multiplication : %f + %fi \n",multiplication.real,multiplication.imag);
    printf("division : %f + %fi \n",division.real,division.imag);
    printf("Modulus of complex number 1 : %f \n",mod1);
    printf("Modulus of complex number 2 : %f \n",mod2);
    printf("value of z = %f + %fi \n",z.real,z.imag);
    printf("Modulus of z : %f \n",modz);

return 0;
}

//function definition
complex add(complex z1,complex z2){
  complex sum;
  sum.real=z1.real+z2.real;
  sum.imag=z1.imag+z2.imag;
  return sum;
}

complex sub(complex z1,complex z2){
  complex sub;
  sub.real=z1.real-z2.real;
  sub.imag=z1.imag-z2.imag;
  return sub;
}

complex mul(complex z1,complex z2){
  complex mul;
  mul.real=(z1.real*z2.real)-(z1.imag*z2.imag);
  mul.imag=(z1.real*z2.imag)+(z2.real*z1.imag);
  return mul;
}

 float modc(complex z1){
   float mod;
   mod=sqrt((z1.real*z1.real)+(z1.imag*z1.imag));
   return mod;
}

complex divc(complex z1,complex z2){
    complex divs;
    divs.real=((z1.real*z2.real)+(z1.imag*z2.imag))/(modc(z2)*modc(z2));
    divs.imag=(-1)*((z1.real*z2.imag)-(z2.real*z1.imag))/(modc(z2)*modc(z2));
    return divs;
}
