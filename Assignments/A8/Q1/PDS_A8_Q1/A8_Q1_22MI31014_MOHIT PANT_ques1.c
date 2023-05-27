#include<stdio.h>
#include<math.h>
typedef struct Complex{
    float real;
    float imag;
};
int main(){
    struct Complex z1;
    struct Complex z2;
    struct Complex z3;
    printf("Enter the first complex number\n");
    printf("Enter the real part :\n");
    scanf("%f",&z1.real);
    printf("Enter the imaginary part :\n");
    scanf("%f",&z1.imag);
    printf("Enter the first complex number\n");
    printf("Enter the real part :\n");
    scanf("%f",&z2.real);
    printf("Enter the imaginary part :\n");
    scanf("%f",&z2.imag);
    printf("Enter the real part :\n");
    scanf("%f",&z3.real);
    printf("Enter the imaginary part :\n");
    scanf("%f",&z3.imag);
    printf("Complex number 1: %f+%f i\n",z1.real,z1.imag);
    printf("Complex number 2: %f+%f i\n",z2.real,z2.imag);
    add(z1,z2);
    printf("\n");
    sub(z1,z2);
    printf("\n");
    mul(z1,z2);
    printf("\n");
    divi(z1,z2);
    printf("\n");
    printf("Modulus of complex number 1:%f",modu(z1));
    printf("\n");
    printf("Modulus of complex number 1:%f",modu(z2));
    printf("\n");
    printf("value of z: %f + %f i");
    divi(mul(sub(z1,z2),z3),add(z1,z2));
    return 0;

}
void add(struct Complex z1,struct Complex z2){
    printf("Addition: %f + %f i",z1.real+z2.real,z1.imag+z2.imag);

}
void sub(struct Complex z1,struct Complex z2){
    printf("subtraction: %f - %f i",z1.real-z2.real,z1.imag-z2.imag);

}
void mul(struct Complex z1,struct Complex z2){
    printf("Multiplication: %f + %f i",(z1.real*z2.real)-(z1.imag*z2.imag),(z1.real*z2.imag)+(z1.imag*z2.real));

}
void divi(struct Complex z1,struct Complex z2){
    printf("Division: %f + %f i",((z1.real*z2.real)+(z1.imag*z2.imag))/(((z2.real*z2.real)+(z2.imag*z2.imag))),((z1.imag*z2.real)-(z1.real*z2.imag))/((z2.real*z2.real)+(z2.imag*z2.imag)));

}
void modu(struct Complex z){
    return((float)pow(z.real*z.real+z.imag*z.imag,0.5));
    return 0;
}
