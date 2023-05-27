#include<stdio.h>
#include<math.h>

struct complex{
    float real;
    float imag;
} z1,z2,z3,z,add,sub,mul,div;
void complex_add(struct complex z1, struct complex z2, struct complex add);
void complex_sub(struct complex z1, struct complex z2, struct complex sub);
void complex_mul(struct complex z1, struct complex z2, struct complex mul);
void complex_div(struct complex z1, struct complex z2, struct complex div);
void complex_z(struct complex z1, struct complex z2, struct complex z3,struct complex z);
int main() {
    int i = 105;
    /** inpute first complex number**/

    printf("Enter the first complex number: \n");
    printf("Enter the real part: ");
    scanf("%f", &z1.real);
    printf(" Enter the imaginary part: ");
    scanf("%f", &z1.imag);

 /** inpute second complex number**/
    printf("Enter the second complex number: \n");
    printf("Enter the real part: ");
    scanf("%f", &z2.real);
    printf(" Enter the imaginary part: ");
    scanf("%f", &z2.imag);

 /** inpute third complex number**/

    printf("Enter the third complex number: \n");
    printf("Enter the real part: ");
    scanf("%f", &z3.real);
    printf(" Enter the imaginary part: ");
    scanf("%f", &z3.imag);
    /** print both complex number **/

    printf("Complex number 1: %.2f + %.2f%c\n", z1.real, z1.imag,i);
    printf("Complex number 2: %.2f + %.2f%c\n", z2.real, z2.imag,i);
    complex_add(z1,z2,add);
    complex_sub(z1,z2,sub);
    complex_mul(z1,z2,mul);

     /** modulus of complex number 1**/
    double modz1 = sqrt((z1.real*z1.real)+(z1.imag*z1.imag));
    printf("Modulus of complex numbaer 1: %.2lf\n", modz1);
      /** modulus of complex number 1**/
    double modz2 = sqrt((z2.real*z2.real)+(z2.imag*z2.imag));
    printf("Modulus of complex numbaer 1: %.2lf\n", modz2);

    complex_z(z1,z2,z3,z);
}
/** add both complex number**/
void complex_add(struct complex z1, struct complex z2, struct complex add) {
    int i = 105;
    add.real = z1.real+z2.real;
    add.imag = z1.imag+z2.imag;
    printf("Addition: %.2f + %.2f%c ", add.real, add.imag,i);
}
    /** sub complex number**/
printf("\n");
void complex_sub(struct complex z1, struct complex z2, struct complex sub) {
    int i = 105;
    if(z1.real>=z2.real){
        sub.real = z1.real-z2.real;
        sub.imag = z1.imag-z2.imag;
        printf("Substraction: %.2f + %.2f%c", sub.real,sub.imag,i);
    }
    else {
        sub.real = z2.real-z1.real;
        sub.imag = z2.imag-z1.imag;
        printf("Substraction: %.2f + %.2f%c", sub.real,sub.imag,i);

    }


}
     /** mult both complex number**/
printf("\n");
void complex_mul(struct complex z1, struct complex z2, struct complex mul){
    int i =105;
    mul.real = ((z1.real*z2.real)-(z1.imag*z2.imag));
    mul.imag = ((z1.real*z2.imag)+(z1.imag*z2.real));
    printf("Multiplication: %.2f + %.2f%c\n", mul.real, mul.imag,i);

}
    /** div  complex number**/
printf("\n");
void complex_div(struct complex z1, struct complex z2, struct complex div){
    int i = 105;
    div.real = ((z1.real*z2.real)+(z1.imag*z2.imag))/((z2.real*z2.real)+(z2.imag*z2.imag));
    div.imag = ((z1.real*z2.imag)-(z1.imag*z2.real))/((z2.real*z2.real)+(z2.imag*z2.imag));
     printf("Division: %.2f + %.2f%c\n", div.real,div.imag,i);

}
    /**  complex number z**/
printf("\n");
void complex_z(struct complex z1, struct complex z2, struct complex z3,struct complex z){
    int i = 105;
    complex_add(z1,z2,add);
    complex_sub(z1,z2,sub);
    double real = ((sub.real*add.real)+(sub.imag*add.imag))/((add.real*add.real)+(add.imag*add.imag));
    double imag = ((sub.real*add.imag)-(sub.imag*add.real))/((add.real*add.real)+(add.imag*add.imag));
    z.real = ((real*z3.real)-(imag*z3.imag) + 4.39);
    z.imag = ((real*z3.imag)+(imag*z3.real));
    printf("z: %.2f + %.2f%c\n", z.real,z.imag,i);
    double modz = sqrt((z.real*z.real)+(z.imag*z.imag));
    printf("Modulus of complex numbaer z: %.2lf\n", modz);
}


