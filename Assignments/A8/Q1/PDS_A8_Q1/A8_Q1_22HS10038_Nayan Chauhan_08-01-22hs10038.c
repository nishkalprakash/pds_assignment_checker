/*
* Section 2
* Roll No : 22HS10038
* Name : Nayan Chauhan
* Assignment No : 8
* Description :
*/
#include <stdio.h>
#include<math.h>
typedef struct Complex{
    float real;
    float imag;
} complex;




complex add(complex z1, complex z2)
{
    complex add;
    add.real = z1.real + z2.real;
    add.imag = z1.imag + z2.imag;
    return add;
}
complex sub(complex z1, complex z2)
{
    complex sub;
    sub.real = z1.real - z2.real;
    sub.imag = z1.imag - z2.imag;
    return sub;
}
complex mul(complex z1, complex z2)
{
    complex mul;
    mul.real = (z1.real)*(z2.real) - (z1.imag)*(z2.imag);
    mul.imag = (z1.real)*(z2.imag) + (z1.imag)*(z2.real);
    return mul;
}
float modc(complex z1)
{
    float Mod = sqrt((z1.real)*(z1.real)+(z1.imag)*(z1.imag));
    return Mod;
}

complex divc(complex z1, complex z2)
{
    complex divc;
    float Mod = modc(z2);
    divc.real = ((z1.real)*(z2.real) + (z1.imag)*(z2.imag))/(Mod*Mod);
    divc.imag = (-(z1.real)*(z2.imag) + (z1.imag)*(z2.real))/(Mod*Mod);
    return divc;
}

int main()
{
    complex z1, z2, z3, z;
    printf("Enter the first complex number: \n");
    printf("Enter the real part: ");
    scanf("%f", &z1.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &z1.imag);
    printf("\nEnter the second complex number: \n");
    printf("Enter the real part: ");
    scanf("%f", &z2.real);
    printf("\nEnter the imaginary part: ");
    scanf("%f", &z2.imag);
    printf("\nEnter the third complex number: \n");
    printf("Enter the real part: ");
    scanf("%f", &z3.real);
    printf("\nEnter the imaginary part: ");
    scanf("%f", &z3.imag);
    printf("Complex number 1: %.2f + %.2fi",z1.real,z1.imag);
    printf("Complex number 2: %.2f + %.2fi\n",z2.real,z2.imag);
    complex addn = add(z1, z2);
    complex subn = sub(z1, z2);
    complex muln = mul(z1, z2);
    complex divn = divc(z1, z2);
    printf("Addition: %.2f + %.2fi\n", addn.real,addn.imag);
    printf("Subtraction: %.2f + %.2fi\n",subn.real,subn.imag);
    printf("Multiplication: %.2f + %.2fi\n",muln.real,muln.imag);
    printf("Division: %.2f + %.2fi\n",divn.real,divn.imag);
    printf("Modulus of complex number 1: %.2f\n", modc(z1));
    printf("Modulus of complex number 1: %.2f\n", modc(z2));
    complex a = {4.39,0};
    z = add(divc((mul((sub(z1,z2)),(z3))),(add(z1,z2))),a);
    printf("Value of z: %.2f + %.2fi\n",z.real,z.imag);
    printf("Modulus of complex z: %.2f\n", modc(z));
}
