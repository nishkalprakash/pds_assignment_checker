#include<stdio.h>
#include<math.h>
typedef struct Complex {
float real;
float imag;}complex;

complex add(complex z1, complex z2){
 complex z3;
 z3.real= z1.real + z2.real;
 z3.imag= z1.imag + z2.imag;
return z3;}

complex sub(complex z1, complex z2){
 complex z3;
 z3.real= z1.real - z2.real;
 z3.imag= z1.imag - z2.imag;
 return z3;
}

complex mul(complex z1, complex z2){
 complex z3;
 z3.real= (z1.real * z2.real) - (z1.imag * z2.imag) ;
 z3.imag= (z1.imag * z2.real) + (z1.real*z2.imag);
return z3;}

complex div(complex z1, complex z2){
 complex z3;
 z3.real= ((z1.real * z2.real) + (z1.imag * z2.imag))/(z2.real*z2.real + z2.imag*z2.imag);
 z3.imag= ((z1.real * z2.imag) - (z1.imag*z2.real))/(z2.real*z2.real + z2.imag*z2.imag);
return z3;}

float mod(complex z1){
float i;
i=sqrt(z1.real*z1.real + z1.imag*z1.imag);
return i;}


int main(){
complex z1, z2, z3, z4, z5, z6, z7, z8, z9, z, z0, z11;
float m, n, j, k=4.39;
scanf("%f %f", &z1.real, &z1.imag);
scanf("%f %f", &z2.real, &z2.imag);
scanf("%f %f", &z3.real, &z3.imag);
z0.real=4.39;
z0.imag=0;
z4=add(z1,z2);
z5=sub(z1,z2);
z6=mul(z1,z2);
z7=div(z1,z2);
m=mod(z1);
n=mod(z2);
z8=div(z5,z4);
z11=mul(z8,z3);
z=add(z11,z0);
j=mod(z);

printf("z1: %f + %fi", z1.real,z1.imag);
printf("\nz2: %f + %fi", z2.real,z2.imag);
printf("\nz1+z2: %f + %fi", z4.real,z4.imag);
printf("\nz1-z2: %f + %fi", z5.real,z5.imag);
printf("\nz1*z2: %f + %fi", z6.real,z6.imag);
printf("\nz1/z2: %f + %fi", z7.real,z7.imag);
printf("\n|z1|: %f", m);
printf("\n|z2|: %f", n);
printf("\nz: %f +%fi", z.real, z.imag);
printf("\n|z|:%f", j);









return 0;}