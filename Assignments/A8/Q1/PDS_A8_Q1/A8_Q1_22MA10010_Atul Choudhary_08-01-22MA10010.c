
#include<stdio.h>
#include<math.h>

typedef struct complex{
    float real;
    float real1;
    float complex;
}complex;

struct complex sumcomp(struct complex z1, struct complex z2){
    struct complex result;
    result.real = z1.real + z2.real;
    result.complex = z1.complex + z2.complex;
    return result;
};
struct complex subtractcomp(struct complex z1, struct complex z2){
    struct complex result;
    result.real = z1.real - z2.real;
    result.complex = z1.complex - z2.complex;
    return result;
};
struct complex multcomp(struct complex z1, struct complex z2){
    struct complex result;
    result.real = (z1.real*z2.real) - (z1.complex*z2.complex);
    result.complex = (z1.complex* z2.real) + (z2.complex* z1.real);
    return result;
};
    struct complex divcomp(struct complex z1, struct complex z2){
    struct complex result;
    result.real = ((z1.real*z2.real) + (z1.complex*z2.complex))/(z2.real*z2.real + z2.complex*z2.complex);
    result.complex = ((z2.complex* z1.real) - (z1.complex* z2.real))/(z2.real*z2.real + z2.complex*z2.complex);
    return result;
};
float mod1comp(struct complex z1){
    float result;
    result =pow ((z1.real*z1.real+z1.complex*z1.complex), 0.5);

    return result;
};
float mod2comp(struct complex z2){
    float result;
    result =pow ((z2.real*z2.real+z2.complex*z2.complex), 0.5);

    return result;
};
float mod3comp(struct complex z){
    float result;

    result =pow ((z.real*z.real+z.complex*z.complex), 0.5);

    return result;
};


int main(){

    complex z1,z2,z3,sum, subtract, mult,div, mod1, mod2,z4,z5,z6,z, real1;
    printf("\nEnter the first complex number:");
    printf("\nEnter the real part of it:");
    scanf("%f", &z1.real);
    printf("Enter the imaginary part of it:");
    scanf("%f", &z1.complex);

    printf("\nEnter the second complex number:");
    printf("\nEnter the real part of it:");
    scanf("%f", &z2.real);
    printf("Enter the imaginary part of it:");
    scanf("%f", &z2.complex);


    printf("\nEnter the third complex number:");
    printf("\nEnter the real part of it:");
    scanf("%f", &z3.real);
    printf("Enter the imaginary part of it:");
    scanf("%f", &z3.complex);



    printf("\n Complex number 1: %.2f + %.2f i",z1.real, z1.complex );
    printf("\n Complex number 2: %.2f + %.2f i",z2.real, z2.complex );
    printf("\n Complex number 3: %.2f + %.2f i",z3.real, z3.complex );

    sum = sumcomp(z1,z2);
    printf("\n\Addition: %.2f + %.2f i", sum.real, sum.complex);

    subtract = subtractcomp(z1,z2);
    printf("\nSubtraction: %.2f + %.2f i", subtract.real, subtract.complex);

    mult = multcomp(z1,z2);
    printf("\n\Multiplication: %.2f + %.2f i", mult.real, mult.complex);

    div = divcomp(z1,z2);
    printf("\n\Division: %.2f - %.2f i", div.real, div.complex);

    float res1 =mod1comp(z1);
    printf("\nModulus of complex 1 is: %.2f", res1);

    float res2 =mod1comp(z2);
    printf("\nModulus of complex 2 is: %.2f", res2);
    z4=subtractcomp(z1,z2);
    z5=sumcomp(z1,z2);
    z6=divcomp(z3,z4);
    z = multcomp(z6,z3);
    printf("\n Complex z : %.2f + %.2f i",z.real+4.39, z.complex );


return 0;
}
