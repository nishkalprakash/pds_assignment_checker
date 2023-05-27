#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct complex{
    float real;
    float imag;
}complex;
complex add(complex z1,complex z2);
complex sub(complex z1,complex z2);
complex mul(complex z1,complex z2);
complex div_a(complex z1,complex z2);
float mod(complex z1);
float mod2(complex z2);
complex exp_c(complex z1, complex z2, complex z3);
int main(){
    complex z,z1,z2,z3,addition,mult,divi,subtraction,modu1,modu2,modu;
    printf("enter the first complex number:");
    printf("\n enter the real part:");
    scanf("%f",&z1.real);
    printf("\n enter the imaginary part:");
    scanf("%f",&z1.imag);
    printf("enter the second complex number:");
    printf("\n enter the real part:");
    scanf("%f",&z2.real);
    printf("\n enter the imaginary part:");
    scanf("%f",&z2.imag);
    printf("enter the third complex number:");
    printf("\n enter the real part:");
    scanf("%f",&z3.real);
    printf("\n enter the imaginary part:");
    scanf("%f",&z3.imag);
    addition=add(z1,z2);
    subtraction=sub(z1,z2);
    mult=mul(z1,z2);
    divi=div_a(z1,z2);
    modu1=mod(z1);
    modu2=mod2(z2);
    modu=exp_c(z1,z2,z3);
    printf("addition: %f+%f i/n",addition.real,addition.imag);
    printf("subtraction: %f+%f i/n",subtraction.real,subtraction.imag);
    printf("multiplication: %f+%f i/n",mult.real,mult.imag);
    printf("division: %f+%f i/n",divi.real,divi.imag);
    printf("modulus of z1:%lf/n",modu1);
    printf("modulus of z2:%lf",modu2);
    printf("modulus of z:%lf",modu);
    printf("value of modulus of z:",);
    return 0;
}
complex add(complex z1,complex z2){
    complex x;
    x.real=z1.real+z2.real;
    x.imag=z1.imag+z2.imag;
    return (x);
}
complex sub(complex z1,complex z2){
    complex y;
    y.real=z1.real-z2.real;
    y.imag=z1.imag-z2.imag;
    return (y);
}
complex mul(complex z1,complex z2){
    complex a;
    a.real=((z1.real*z2.real)-(z1.imag*z2.imag));
    a.imag=((z1.real*z2.imag)-(z2.real*z1.imag));
    return(a);
}
complex div_a(complex z1,complex z2){
    complex b;
    b.real=((z1.real*z2.real)-(z1.imag*z2.imag))/(pow(z2.real,2)+pow(z2.imag,2));
    b.imag=((z1.real*z2.imag)-(z2.real*z1.imag))/(pow(z2.real,2)+pow(z2.imag,2));
    return(b);
}
float mod(complex z1){
    float c;
    c=sqrt((z1.real*z1.real)+(z1.imag*z1.imag));
    return (c);
}
float mod2(complex z2){
    float d;
    d=sqrt((z2.real*z2.real)+(z2.imag*z2.imag));
    return (d);
}
complex exp_c(complex z1, complex z2, complex z3){
    complex e;
    e=mul((div_a(sub(z1,z2),add(z1,z2))),z3);
    e.real=e.real+4.39;
    return(e);
}
