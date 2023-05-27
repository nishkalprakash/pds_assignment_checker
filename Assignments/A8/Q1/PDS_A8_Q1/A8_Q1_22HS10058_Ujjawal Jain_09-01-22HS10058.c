/*sec2
Assignment no.9
Roll no. 22HS10058
Name - Ujjawal Jain
Question no. 1
*/
#include<stdio.h>
#include<math.h>
typedef struct complex{
float real;
float imaginary;
}complex;
complex add(complex z1,complex z2){
    complex ad ;
    ad.real = z1.real+z2.real;
    ad.imaginary = z1.imaginary + z2.imaginary;
    return ad;
}
complex sub(complex z1,complex z2){
    complex su ;
    su.real = z1.real-z2.real;
    su.imaginary = z1.imaginary - z2.imaginary;
    return su;
}
complex mul(complex z1,complex z2){
    complex mul;
    mul.real = z1.real*z2.real-z1.imaginary*z2.imaginary;
    mul.imaginary = z1.real*z2.imaginary +z2.real*z1.imaginary;
    return mul;
}
complex div(complex z1,complex z2){
    complex di;
    di.real =(z1.real*z2.real+z1.imaginary*z2.imaginary)/(z2.real*z2.real+z2.imaginary*z2.imaginary);
    di.imaginary = -(z1.real*z2.imaginary-z1.imaginary*z2.real)/(z2.real*z2.real+z2.imaginary*z2.imaginary);
    return di;

}
float mod(complex z1){
float com = sqrt(z1.real*z1.real+z1.imaginary*z1.imaginary);
return com;
}
int main(){
complex z1,z2,z3;
printf("Enter the first complex number: \n");
printf("Enter the real part: ");
scanf("%f",&z1.real);
printf("Enter the imaginary part: ");
scanf("%f",&z1.imaginary);
printf("Enter the second complex number: \n");
printf("Enter the real part: ");
scanf("%f",&z2.real);
printf("Enter the imaginary part: ");
scanf("%f",&z2.imaginary);
printf("Enter the third complex number: \n");
printf("Enter the real part: ");
scanf("%f",&z3.real);
printf("Enter the imaginary part: ");
scanf("%f",&z3.imaginary);
printf("Complex Number 1: %0.2f + %0.2fi\n",z1.real,z1.imaginary);
printf("Complex Number 2: %0.2f + %0.2fi\n",z2.real,z2.imaginary);
printf("Addition : %0.2f + %0.2fi \n",add(z1,z2).real,add(z1,z2).imaginary);
printf("Subtraction : %0.2f + %0.2fi \n",sub(z1,z2).real,sub(z1,z2).imaginary);
printf("Multiplication : %0.2f + %0.2fi \n",mul(z1,z2).real,mul(z1,z2).imaginary);
printf("Division : %0.2f + %0.2fi \n",div(z1,z2).real,div(z1,z2).imaginary);
printf("Modulus of Complex number 1 : %0.2f\n",mod(z1));
printf("Modulus of Complex number 2 : %0.2f\n",mod(z2));

complex z;

z = mul((div(sub(z1,z2),add(z1,z2))),z3);
z.real = z.real + 4.39;
printf("Value of z: %0.2f + %0.2fi \n",z.real,z.imaginary);
printf("Modulus of z : %0.3f",mod(z));












return 0;
}
