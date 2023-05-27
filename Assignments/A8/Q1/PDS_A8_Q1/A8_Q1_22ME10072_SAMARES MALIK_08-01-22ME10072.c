/*name- samares Malik
  roll no-22ME10072
  assignment 8 q1*/
#include<stdio.h>
#include<math.h>
typedef struct complex{
    float real;
    float imag;

}complex;
complex add(complex z1,complex z2){
    struct complex z;
    z.real = z1.real + z2.real;
    z.imag = z1.imag + z2.imag;
    return z;

}
complex sub(complex z1,complex z2){
    struct complex z;
    z.real = z1.real - z2.real;
    z.imag = z1.imag - z2.imag;
    return z;
}
float modc(complex z){
    return sqrt((z.real*z.real)+(z.imag*z.imag));
}
complex mul(complex z1,complex z2){
    complex z;
    z.real = (z1.real*z2.real)-(z2.imag*z1.imag);
    z.imag = (z1.real*z2.imag)+(z2.real*z1.imag);
    return z;

}
complex divc(complex z1,complex z2){
    complex z;
    z.real  = ((z1.real*z2.real)+(z1.imag*z2.imag))/(z2.real*z2.real + z2.imag*z2.imag);
    z.imag = -((z1.real*z2.imag)-(z2.real*z1.imag))/(z2.real*z2.real + z2.imag*z2.imag);
    return z;


}

int main(){
    complex z1,z2,z3,z4,z,c;
    c.real = 4.39;
    c.imag = 0;
    printf("Enter the 1st complex number:\n");
    printf("Enter the real part:");
    scanf("%f",&z1.real);
    printf("\nEnter the imaginary part:");
    scanf("%f",&z1.imag);
    printf("\nEnter the 2nd complex number:\n");
    printf("Enter the real part:");
    scanf("%f",&z2.real);
    printf("\nEnter the imaginary part:");
    scanf("%f",&z2.imag);
    printf("\nEnter the 3rd complex number:\n");
    printf("Enter the real part:");
    scanf("%f",&z3.real);
    printf("\nEnter the imaginary part:");
    scanf("%f",&z3.imag);
    printf("\n");
    printf("complex number 1: %.2f + %.2fi\n",z1.real,z1.imag);
    printf("Complex number 2: %.2f + %.2fi\n",z2.real,z2.imag);
    printf("Addition:%.2f + %.2fi\n",add(z1,z2).real,add(z1,z2).imag);
    printf("substraction:%.2f + %.2fi\n",sub(z1,z2).real,sub(z1,z2).imag);
    printf("Multiplication:%.2f + %.2fi\n",mul(z1,z2).real,mul(z1,z2).imag);
    printf("Division:%.2f + %.2fi\n",divc(z1,z2).real,divc(z1,z2).imag);
    printf("Modulus of complex number 1:%.2f\n",modc(z1));
    printf("Modulus of complex number 2:%.2f\n",modc(z2));
    z4 = mul(divc(sub(z1,z2),add(z1,z2)),z3);
    z = add(z4,c);
    printf("Value of z:%.2f + %.1fi\n",z.real,z.imag);
    printf("Modulus of z:%.3f\n",modc(z));





    return 0;
}
