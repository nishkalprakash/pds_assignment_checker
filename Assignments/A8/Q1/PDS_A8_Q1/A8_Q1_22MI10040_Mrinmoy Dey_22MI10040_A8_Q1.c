/*
Name :: Mrinmoy Dey
Roll :: 22MI10040
Section :: 2
Assignment :: 8
Question :: 1
*/
#include <stdio.h>
#include <math.h>
typedef struct complex{
    float real;
    float imag;
}comp;
comp add(comp z1,comp z2){
    comp z3;
    z3.real = z1.real+z2.real;
    z3.imag = z1.imag+z2.imag;
    return z3;
}
comp sub(comp z1,comp z2){
    comp z3;
    z3.real = z1.real-z2.real;
    z3.imag = z1.imag-z2.imag;
    return z3;
}
comp mul(comp z1,comp z2){
    comp z3;
    z3.real = (z1.real*z2.real)-(z1.imag*z2.imag);
    z3.imag = (z1.real*z2.imag)+(z2.real*z1.imag);
    return z3;
}
float modc(comp z1){
    float m;
    m = sqrt(pow(z1.real,2)+pow(z1.imag,2));
    return m;
}
comp divc(comp z1,comp z2){
    comp z3;
    z3.real = ((z1.real*z2.real)+(z1.imag*z2.imag))/(pow(modc(z2),2));
    z3.imag = ((z1.real*z2.imag)-(z2.real*z1.imag))/(pow(modc(z2),2));
    return z3;
}
comp fn(comp z1,comp z2,comp z3){
    comp z;
    z = mul(divc((sub(z1,z2)),(add(z1,z2))),z3);
    return z;
}

int main(){
    comp z1,z2,z3;
    comp add_z1_z2;
    comp sub_z1_z2;
    comp mul_z1_z2;
    comp div_z1_z2;
    comp z;
    comp z_new;
    float m1,m2,m3;
    printf("Enter the first complex number\n");
    printf("Enter the real part: ");
    scanf("%f",&z1.real);
    printf("Enter the imaginary part: ");
    scanf("%f",&z1.imag);
    printf("Enter the second complex number\n");
    printf("Enter the real part: ");
    scanf("%f",&z2.real);
    printf("Enter the imaginary part: ");
    scanf("%f",&z2.imag);
    printf("Enter the third complex number\n");
    printf("Enter the real part: ");
    scanf("%f",&z3.real);
    printf("Enter the imaginary part: ");
    scanf("%f",&z3.imag);
    printf("Complex Number 1: %.2f + %.2fi\n",z1.real,z1.imag);
    printf("Complex Number 2: %.2f + %.2fi\n",z2.real,z2.imag);
    add_z1_z2 = add(z1,z2);
    printf("Addition: %.2f + %.2fi\n",add_z1_z2.real,add_z1_z2.imag);
    sub_z1_z2 = sub(z1,z2);
    printf("Subtraction: %.2f + %.2fi\n",sub_z1_z2.real,sub_z1_z2.imag);
    mul_z1_z2 = mul(z1,z2);
    printf("Multiplication: %.2f + %.2fi\n",mul_z1_z2.real,mul_z1_z2.imag);
    div_z1_z2 = divc(z1,z2);
    printf("Division: %.2f + %.2fi\n",div_z1_z2.real,div_z1_z2.imag);
    m1 = modc(z1);
    m2 = modc(z2);
    printf("Modulus of complex number 1: %.2f\n",m1);
    printf("Modulus of complex number 2: %.2f\n",m2);
    z = fn(z1,z2,z3);
    z_new.real = z.real+4.39;
    z_new.imag = z.imag;
    m3 = modc(z_new);
    printf("Value of z: %.2f + %.2fi\n",z.real+4.39,z.imag);
    printf("Modulus of z: %.3f",m3);
}

