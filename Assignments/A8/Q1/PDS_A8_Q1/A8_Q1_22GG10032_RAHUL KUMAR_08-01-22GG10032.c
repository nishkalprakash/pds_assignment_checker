/*
* Section- 02
* Name - Rahul kumar
* Roll no. - 22GG10032
* Assignment - 08
* Question Number - 01
* Description - Complex no. & its calculations
*/
#include<stdio.h>
#include<math.h>
typedef struct complex{
       float real;
       float imag;
   } complex;
void complex_add(complex Z1,complex Z2){
    float a,b;
    a = Z1.real+Z2.real;
    b = Z1.imag+Z2.imag;
    printf("Addition : %f + %fi\n",a,b);
    return;
}
void complex_sub(complex Z1,complex Z2){
    float a,b;
    a = Z1.real-Z2.real;
    b = Z1.imag-Z2.imag;
    printf("Subtraction : %f + %fi\n",a,b);
    return;
}
void complex_mul(complex Z1,complex Z2){
    float a,b;
    a = (Z1.real*Z2.real)-(Z1.imag*Z2.imag);
    b = (Z1.real*Z2.imag)+(Z2.real*Z1.imag);
    printf("Multiplication : %f + %fi\n",a,b);
    return;
}
void complex_div(complex Z1,complex Z2){
    float a,b,c,p,q;
    a = (Z1.real*Z2.real)+(Z1.imag*Z2.imag);
    b = (Z1.real*Z2.imag)-(Z2.real*Z1.imag);
    c = (Z2.real*Z2.real) + (Z2.imag*Z2.imag);
    p = a/c;
    q = b/c;
    printf("Division : %f - %fi\n",p,q);
    return;
}
void complex_mod1(complex Z1){
    float a;
    a = pow((Z1.real*Z1.real) + (Z1.imag*Z1.imag),0.5);
    printf("Modulus of complex number 1 : %f\n",a);
       return;
}
void complex_mod2(complex Z2){
    float a;
    a = pow((Z2.real*Z2.real) + (Z2.imag*Z2.imag),0.5);
    printf("Modulus of complex number 2 : %f\n",a);
       return;
}
void complexZ(complex Z1,complex Z2,complex Z3){
    float a,b,c,d,e,f,g;
    a = ((Z1.real-Z2.real)*Z3.real) - ((Z1.imag-Z2.imag)*Z3.imag);
    b = ((Z1.real-Z2.real)*Z3.imag) + ((Z1.imag-Z2.imag)*Z3.real);
    c = Z1.real+Z2.real;
    d = Z1.imag+Z2.imag;
    e = (((a*c)+(b*d))/((c*c) + (d*d))) + 4.39;
    f = ((b*c)-(a*d))/((c*c) + (d*d));
    g = pow((e*e + f*f),0.5);
    printf("Value of Z : %f + %fi\n",e,f);
    printf("Modulus of Z : %f\n",g);
       return;
}
int main(){
   complex Z1,Z2,Z3,Z;
   printf("Enter the first complex number : \n");
   printf("Enter the real part : \n");
   scanf("%f",&Z1.real);
   printf("Enter the imaginary part : \n");
   scanf("%f",&Z1.imag);
   printf("Enter the second complex number : \n");
   printf("Enter the real part : \n");
   scanf("%f",&Z2.real);
   printf("Enter the imaginary part : \n");
   scanf("%f",&Z2.imag);
   printf("Enter the third complex number : \n");
   printf("Enter the real part : \n");
   scanf("%f",&Z3.real);
   printf("Enter the imaginary part : \n");
   scanf("%f",&Z3.imag);
   printf("Complex Number 1 : %f + %fi\n",Z1.real,Z1.imag);
   printf("Complex Number 2 : %f + %fi\n",Z2.real,Z2.imag);
   printf("Complex Number 3 : %f + %fi\n",Z3.real,Z3.imag);
   complex_add(Z1,Z2);
   complex_sub(Z1,Z2);
   complex_mul(Z1,Z2);
   complex_div(Z1,Z2);
   complex_mod1(Z1);
   complex_mod2(Z2);
   complexZ(Z1,Z2,Z3);
    return 0;
}
