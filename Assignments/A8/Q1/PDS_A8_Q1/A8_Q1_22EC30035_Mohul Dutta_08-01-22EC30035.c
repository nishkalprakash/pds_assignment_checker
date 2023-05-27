/*
Name Mohul Dutta
22EC30035
question 1 lab 8
*/
#include<stdio.h>
#include<math.h>
typedef struct complex{
float real;
float imag;
}complex;
complex add(complex z1,complex z2){
complex r;
r.real=z1.real+z2.real;
r.imag=z1.imag+z2.imag;
return r;
}
complex sub(complex z1,complex z2){
complex r;
r.real=z1.real-z2.real;
r.imag=z1.imag-z2.imag;
return r;
}
complex mul(complex z1,complex z2){
complex r;
r.real=z1.real*z2.real-z1.imag*z2.imag;
r.imag=z1.real*z2.imag+z2.real*z1.imag;
return r;
}
double mod(complex z1){
return sqrt((z1.real)*(z1.real)+(z1.imag)*(z1.imag));
}
complex divc(complex z1,complex z2){
complex r;
r.real=(z1.real*z2.real+z1.imag*z2.imag)/(z2.real*z2.real+z2.imag*z2.imag);
r.imag=(-z1.real*z2.imag+z2.real*z1.imag)/(z2.real*z2.real+z2.imag*z2.imag);
return r;
}
int main(){
float x1,y1,x2,y2,x3,y3;
printf("Enter the first complex number:\n");
printf("Enter the real part:");
scanf("%f",&x1);
printf("Enter the imaginary part:");
scanf("%f",&y1);
printf("Enter the second complex number\n");
printf("Enter the real part:");
scanf("%f",&x2);
printf("Enter the imaginary part:");
scanf("%f",&y2);
printf("Enter the third complex number:\n");
printf("Enter the real part:");
scanf("%f",&x3);
printf("Enter the imaginary part:");
scanf("%f",&y3);
complex z1,z2,z3;
z1.real=x1;
z1.imag=y1;
z2.real=x2;
z2.imag=y2;
z3.real=x3;
z3.imag=y3;
printf("complex number 1 =%0.2f+ %0.2fi\n",x1,y1);
printf("complex number 2 =%0.2f+ %0.2fi\n",x2,y2);
printf("complex number 3 =%0.2f+ %0.2fi\n",x3,y3);
complex addtn=add(z1,z2);
complex subt=sub(z1,z2);
complex mult=mul(z1,z2);
complex divd=divc(z1,z2);
double modul1=mod(z1);
double modul2=mod(z2);
double modul3=mod(z3);
printf("Addition: %0.2f+ %0.2fi\n",addtn.real,addtn.imag);
printf("Substraction: %0.2f+ %0.2fi\n",subt.real,subt.imag);
printf("Multiplication: %0.2f+ %0.2fi\n",mult.real,mult.imag);
printf("Division: %0.2f+ %0.2fi\n",divd.real,divd.imag);
printf("Modulus of complex no. 1: %0.2lf\n",modul1);
printf("Modulus of complex no. 2: %0.2lf\n",modul2);
printf("Modulus of complex no. 3: %0.2lf\n",modul3);
complex z=mul(divc(sub(z1,z2),add(z1,z2)),z3);
z.real+=4.39;
printf("final value of z =%0.2f+ %0.2f i\n",z.real,z.imag);
printf("modulus of z=%0.2lf",mod(z));
}
