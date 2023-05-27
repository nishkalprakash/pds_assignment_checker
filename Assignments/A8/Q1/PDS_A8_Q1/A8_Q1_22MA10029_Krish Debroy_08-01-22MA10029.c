#include <stdio.h>
#include <math.h>

typedef struct Complex
{
    float real;
    float imag;
} complex ;

float modc(complex z1)
{
    float mod_z=(float)sqrt(pow(z1.real,2.0)+pow(z1.imag,2.0));
    return mod_z;
}


complex add(complex z1 , complex z2)
{
    complex add_res;
    add_res.real= z1.real + z2.real;
    add_res.imag= z1.imag + z2.imag;
    return add_res;
}

complex sub(complex z1 , complex z2)
{
    complex sub_res;
    sub_res.real= z1.real - z2.real;
    sub_res.imag= z1.imag - z2.imag;
    return sub_res;
}

complex mul(complex z1 , complex z2)
{
    complex mul_res;
    mul_res.real= (z1.real*z2.real)-(z1.imag*z2.imag);
    mul_res.imag= (z1.imag*z2.real) + (z1.real*z2.imag);
    return mul_res;
}

complex divc(complex z1 , complex z2)
{
    complex div_res;
    z2.imag= (-1.0 * z2.imag);
    div_res.real =  mul(z1,z2).real/pow(modc(z2),2.0);
    div_res.imag = mul(z1,z2).imag/pow(modc(z2),2.0);
    return div_res;
}




int main()
{
    complex z1,z2,z3,z;
    printf("Enter the first complex number :\n");
    printf("Enter the real part :");
    scanf("%f",&z1.real);
    printf("Enter the imaginary part:");
    scanf("%f",&z1.imag);

    printf("\n\nEnter the second complex number :\n");
    printf("Enter the real part :");
    scanf("%f",&z2.real);
    printf("Enter the imaginary part:");
    scanf("%f",&z2.imag);

    printf("\n\nEnter the third complex number :\n");
    printf("Enter the real part :");
    scanf("%f",&z3.real);
    printf("Enter the imaginary part:");
    scanf("%f",&z3.imag);


    z.real = mul(divc(sub(z1,z2),add(z1,z2)),z3).real + 4.39;
    z.imag = mul(divc(sub(z1,z2),add(z1,z2)),z3).imag;

    printf("\n\n\nComplex number 1: %.2f + %.2fi",z1.real,z1.imag);
    printf("\nComplex number 2: %.2f + %.2fi",z2.real,z2.imag);
    printf("\nAddition : %.2f + %.2fi",(add(z1,z2)).real,(add(z1,z2)).imag);
    printf("\nSubtraction : %.2f + %.2fi",(sub(z1,z2)).real,(sub(z1,z2)).imag);
    printf("\nMultiplication : %.2f + %.2fi",(mul(z1,z2)).real,(mul(z1,z2)).imag);
    printf("\nDivision : %.2f + %.2fi",(divc(z1,z2)).real,(divc(z1,z2)).imag);
    printf("\nModulus of complex number 1: %.2f",modc(z1));
    printf("\nModulus of complex number 2: %.2f",modc(z2));
    printf("\nValue of z: %.2f + %.2fi",z.real,z.imag);
    printf("\nModulus of z: %.2f",modc(z));



    return 0;
}

