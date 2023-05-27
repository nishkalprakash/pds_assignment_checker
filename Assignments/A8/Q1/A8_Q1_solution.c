#include <stdio.h>
#include <math.h>

typedef struct Complex
{
    float real;
    float imag;
} complex;

// Function to read a complex number from the keyboard
complex readComplex()
{
    complex z;
    printf("Enter the real part: ");
    scanf("%f", &z.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &z.imag);
    return z;
}

// Function to print a complex number in the format x+iy
void printComplex(complex z)
{
    if (z.imag < 0)
        printf("%.2f - %.2fi\n", z.real, -z.imag);
    else
        printf("%.2f + %.2fi\n", z.real, z.imag);
}

// Function to add two complex numbers
complex add_c(complex z1, complex z2)
{
    complex result;
    result.real = z1.real + z2.real;
    result.imag = z1.imag + z2.imag;
    return result;
}

// Function to subtract two complex numbers
complex sub_c(complex z1, complex z2)
{
    complex result;
    result.real = z1.real - z2.real;
    result.imag = z1.imag - z2.imag;
    return result;
}

// Function to multiply two complex numbers
complex mul_c(complex z1, complex z2)
{
    complex result;
    result.real = z1.real * z2.real - z1.imag * z2.imag;
    result.imag = z1.real * z2.imag + z1.imag * z2.real;
    return result;
}

// Function to divide two complex numbers
complex div_c(complex z1, complex z2)
{
    complex result;
    float denominator = z2.real * z2.real + z2.imag * z2.imag;
    result.real = (z1.real * z2.real + z1.imag * z2.imag) / denominator;
    result.imag = (z1.imag * z2.real - z1.real * z2.imag) / denominator;
    return result;
}

// Function to calculate the modulus of a complex number
float mod_c(complex z1)
{
    float result;
    result = sqrt(z1.real * z1.real + z1.imag * z1.imag);
    return result;
}
complex part3(complex z1, complex z2, complex z3)
{
    // complex temp1=sub_c(z1,z2);
    // complex temp2=add_c(z1,z2);
    // complex temp4=div_c(temp1,temp2);
    // complex temp5=mul_c(temp4,z3);
    // complex temp6 = {4.39,0};
    // complex result1=add_c(temp5,temp6);

    // z=(z_1-z_2)/(z_1+z_2 )×z_3+4.39
    complex temp={4.39,0};
    complex result = add_c(mul_c(div_c(sub_c(z1,z2),add_c(z1,z2)),z3),temp);
    return result;

}

int main()
{
    complex z1, z2, z3, result;

    // Read two complex numbers from the keyboard
    printf("Enter the first complex number:\n");
    z1 = readComplex();
    printf("Enter the second complex number:\n");
    z2 = readComplex();
    printf("Enter the third complex number:\n");
    z3 = readComplex();

    // Perform operations and display the results
    printf("\n");
    printf("z1\t: ");
    printComplex(z1);

    printf("z2\t: ");
    printComplex(z2);

    result = add_c(z1, z2);
    printf("z1+z2\t: ");
    printComplex(result);

    result = sub_c(z1, z2);
    printf("z1-z2\t: ");
    printComplex(result);

    result = mul_c(z1, z2);
    printf("z1*z2\t: ");
    printComplex(result);

    result = div_c(z1, z2);
    printf("z1/z2\t: ");
    printComplex(result);

    printf("|z1|\t: %.2f\n", mod_c(z1));
    printf("|z2|\t: %.2f\n", mod_c(z2));
    result = part3(z1, z2, z3);
    
    printf("z\t: ");
    printComplex(result);

    printf("|z|\t: %.2f\n", mod_c(result));
    return 0;
}
