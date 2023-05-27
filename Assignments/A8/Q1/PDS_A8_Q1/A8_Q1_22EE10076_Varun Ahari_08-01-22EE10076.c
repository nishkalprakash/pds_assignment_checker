#include <stdio.h>

typedef struct Complex {
    float real;
    float imag;
} complex;

void readComplex(complex *z) {
    printf("Enter the real part: ");
    scanf("%f", &(z->real));
    printf("Enter the imaginary part: ");
    scanf("%f", &(z->imag));
}

void printComplex(complex z) {
    printf("%.2f + %.3fi\n", z.real, z.imag);
}

complex add(complex z1, complex z2) {
    complex result;
    result.real = z1.real + z2.real;
    result.imag = z1.imag + z2.imag;
    return result;
}

complex sub(complex z1, complex z2) {
    complex result;
    result.real = z1.real - z2.real;
    result.imag = z1.imag - z2.imag;
    return result;
}

complex mul(complex z1, complex z2) {
    complex result;
    result.real = z1.real * z2.real - z1.imag * z2.imag;
    result.imag = z1.real * z2.imag + z1.imag * z2.real;
    return result;
}

complex div(complex z1, complex z2) {
    complex result;
    result.real = (z1.real * z2.real + z1.imag * z2.imag) / (z2.real * z2.real + z2.imag * z2.imag);
    result.imag = (z1.imag * z2.real - z1.real * z2.imag) / (z2.real * z2.real + z2.imag * z2.imag);
    return result;
}

float mod(complex z) {
    return sqrt(z.real * z.real + z.imag * z.imag);
}

int main() {
    complex z1, z2, z3, z;
    
    printf("Enter the complex number z1:\n");
    readComplex(&z1);
    printf("z1: ");
    printComplex(z1);
    
    printf("Enter the complex number z2:\n");
    readComplex(&z2);
    printf("z2: ");
    printComplex(z2);
    
    z = add(z1, z2);
    printf("z1 + z2: ");
    printComplex(z);
    
    z = sub(z1, z2);
    printf("z1 - z2: ");
    printComplex(z);
    
    z = mul(z1, z2);
    printf("z1 * z2: ");
    printComplex(z);
    
    z = div(z1, z2);
    printf("z1 / z2: ");
    printComplex(z);
    
    float modulus = mod(z2);
    printf("|z2|: %.2f\n", modulus);
    

    printf("Enter the complex number z3:\n");
    readComplex(&z3);
    
    z = div(sub(z1, z2), add(z1, z2));
    z = mul(z, z3);
    z.real += 4.39;
    printf("Z: ");
    printComplex(z);
    
    return 0;
}
