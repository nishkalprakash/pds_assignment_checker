#include<stdio.h>
#include<math.h>
/*NAME- NAIN ADITYA
SECTION 2 | ROLL - 22AG10029
LAB - 8 QUESTION 1*/
typedef struct complex{
float real;
float imag;
}complex;
complex add(complex z1,complex z2){
complex z3;
z3.real=z1.real+z2.real;
z3.imag=z1.imag+z2.imag;
return z3;
}
complex sub(complex z1,complex z2){
complex z3;
z3.real=z1.real-z2.real;
z3.imag=z1.imag-z2.imag;
return z3;
}
complex mul_c(complex z1,complex z2){
complex z3;
z3.real=z1.real*z2.real-(z1.imag*z2.imag);
z3.imag=z1.real*z2.imag+z1.imag*z2.real;
return z3;
}
complex div_c(complex z1,complex z2){
complex z3;
z3.real=(z1.real*z2.real+z1.imag*z2.imag)/pow(z2.real*z2.real+z2.imag*z2.imag,1);
z3.imag=(-1)*(z1.real*z2.imag-z2.real*z1.imag)/pow(z2.real*z2.real+z2.imag*z2.imag,1);
return z3;
}
float mod_c(complex z2){
float z3;
z3=pow(z2.real*z2.real+z2.imag*z2.imag,0.5);
return z3;
}
int main(){
complex z1,z2,z3,z4,z,add1,sub1,mul1,div1;
printf("enter the first complex no.\n");
printf("enter the real part : ");
scanf("%f",&z1.real);
printf("enter the imaginary part : ");
scanf("%f",&z1.imag);
printf("\nenter the second complex no.\n");
printf("enter the real part : ");
scanf("%f",&z2.real);
printf("enter the imaginary part : ");
scanf("%f",&z2.imag);
printf("enter the third complex no. for modulus\n");
printf("enter the real part : ");
scanf("%f",&z3.real);
printf("enter the imaginary part : ");
scanf("%f",&z3.imag);
add1=add(z1,z2);
sub1=sub(z1,z2);
mul1=mul_c(z1,z2);
div1=div_c(z1,z2);
z4=mul_c(div_c(sub1,add1),z3);
z.real=z4.real+4.39;
z.imag=z4.imag;
printf("\ncomplex no. : %.2f + (%.2f)i\n",z1.real,z1.imag);
printf("complex no. : %.2f + (%.2f)i\n",z2.real,z2.imag);
printf("addition : %.2f + (%.2f)i\n",add1.real,add1.imag);
printf("substraction : %.2f + (%.2f)i\n",sub1.real,sub1.imag);
printf("Multiplication : %.2f + (%.2f)i\n",mul1.real,mul1.imag);
printf("division : %.2f + (%.2f)i\n",div1.real,div1.imag);
printf("modulus of first complex number 1 : %.2f\n",mod_c(z1));
printf("modulus of first complex number 2 : %.2f\n",mod_c(z2));
printf("value of z : %.2f + (%.2f)i\n",z.real,z.imag);
printf("modulus of z : %.2f\n",mod_c(z));
return 0;
}
