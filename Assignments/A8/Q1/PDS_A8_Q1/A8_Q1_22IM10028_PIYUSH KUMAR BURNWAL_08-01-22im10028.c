#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*declaring a structure */
typedef struct complex{
    float real;
    float imagi;
}complex;
//function prototypes

complex add(complex z1,complex z2);
complex sub(complex z1,complex z2);
complex mult(complex z1,complex z2);
complex divc(complex z1,complex z2);
float modu(complex z1);

int main()
{
    complex z1,z2,z3,result1,result2,result3,result4,result5,z,z4;
    /*result1,result2,result3,result4 will be used for storing the complex number returned after computing addition,subtraction,multiplication and division*/
    printf("Enter the first complex number:\n");
    printf("Enter the real part:");
    scanf("%f",&z1.real);
    printf("Enter the imaginary part");
    scanf("%f",&z1.imagi);
    printf("Enter the second complex number:\n");
    printf("Enter the real part:");
    scanf("%f",&z2.real);
    printf("Enter the imaginary part");
    scanf("%f",&z2.imagi);
    //for third complex number
    printf("Enter the real part:");
    scanf("%f",&z3.real);
    printf("Enter the imaginary part:");
    scanf("%f",&z3.imagi);
    printf("\n\n");
    printf("Complex number 1: %0.2f + %0.2fi\n",z1.real,z1.imagi);
    printf("Complex number 2: %0.2f + %0.2fi\n",z2.real,z2.imagi);
    result1=add(z1,z2);
    printf("Addition: %0.2f + %0.2fi\n",result1.real,result1.imagi);
    result2=sub(z1,z2);
    printf("Subtraction: %0.2f + %0.2fi\n",result2.real,result2.imagi);
    result3=mult(z1,z2);
    printf("Multiplication: %0.2f + %0.2fi\n",result3.real,result3.imagi);
    result4=divc(z1,z2);
    printf("Division: %0.2f + %0.2fi\n",result4.real,result4.imagi);
    printf("Modulus of complex number 1: %0.2f\n",modu(z1));
    printf("Modulus of complex number 2: %0.2f\n",modu(z2));
    z4.real=4.39;
    z4.imagi=0;
    z=(add((mult((divc(sub(z1,z2),add(z1,z2))),z3)),z4));//computing the complex number z by the functions which we defined
    printf("Value of z: %0.2f + %0.2fi\n",z.real,z.imagi);
    printf("Modulus of z : %0.2f",modu(z));//%0.2f is used in each place because the outputs are required till 2 decimal places


}
complex add(complex z1,complex z2){
    complex addi;
    addi.real=z1.real + z2.real;
    addi.imagi=z1.imagi +z2.imagi;
    return (addi);

}
complex sub(complex z1,complex z2){
    complex subr;
    subr.real=z1.real -z2.real;
    subr.imagi=z1.imagi -z2.imagi;
    return (subr);

}
complex mult(complex z1,complex z2){
    complex multi;
    multi.real=(z1.real*z2.real)-(z1.imagi*z2.imagi);
    multi.imagi=(z1.real*z2.imagi)+(z2.real*z1.imagi);
    return multi;

}
complex divc(complex z1,complex z2){
    complex divi;
    divi.real=(((z1.real*z2.real)+(z1.imagi*z2.imagi))/((pow(z2.real,2))+pow(z2.imagi,2)));
    divi.imagi=(((z1.real*z2.imagi)-(z2.real*z1.imagi))/((pow(z2.real,2))+pow(z2.imagi,2)))*(-1);
    return divi;
}

float modu(complex z1)
{
    return (sqrt((pow(z1.real,2))+(pow(z1.imagi,2))));//computing modulus of complex no.
}

