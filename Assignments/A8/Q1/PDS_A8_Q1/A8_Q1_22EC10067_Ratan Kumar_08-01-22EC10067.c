/* Name : Ratan Kumar
Roll No.: 22EC10067
sec : 2;
question no.: 18*/
#include<stdio.h>
#include<math.h>
typedef struct complex {
float real;
float imag;
} complex;

 complex add(complex z1, complex z2){
     float ad1,ad2;
     ad1= z1.real+z2.real;
     ad2= z1.imag+z2.imag;
     printf("Addition: %0.2f + %0.2fi",ad1,ad2);
}
 complex sub(complex z1, complex z2){
     float sb1,sb2;
     sb1=(z1.real - z2.real);
     sb2=(z1.imag - z2.imag);

     printf("Subtraction: %0.2f + %0.2fi",sb1,sb2);
 }
 complex mul(complex z1, complex z2){
    float multiplication1 ,multiplication2;
      multiplication1= (z1.real*z2.real - z1.imag*z2.imag);
      multiplication2=(z1.real*z2.imag + z2.real*z1.imag);
      printf("Multiplication: %0.2f + %0.2fi",multiplication1,multiplication2);
}
 complex div(complex z1, complex z2){
     float di1,di2,di3,a,b;
     di1 = (z1.real*z2.real + z1.imag*z2.imag);
     di2=(z1.real*z2.imag - z2.real*z1.imag);
     di3=(z2.real*z2.real + z2.imag*z2.imag);
     a=di1/di3;
     b=di2/di3;
     printf("Division : %0.2f + %0.2fi",a,b);
 }
float mod(complex z1){
    float mo;
    mo= sqrt(z1.real*z1.real+z1.imag*z1.imag);
printf(" Modulus of complex number 1: %0.2f",mo);
}
float modulus(complex z2){
float mo1;
mo1= sqrt(z2.real*z2.real+z2.imag*z2.imag);
printf(" Modulus of complex number 2: %0.2f",mo1);


}
int main(){
complex z1,z2,z3;
printf("Enter the first complex number:\n");
printf("Enter the real part: ");
scanf("%f",&z1.real);
//printf("\n");
printf("Enter the imaginary part: ");
scanf("%f",&z1.imag);
//printf("\n");
printf("Enter the Second complex number: \n");
printf("Enter the real part: ");
scanf("%f",&z2.real);
printf("Enter the imaginary part: ");
scanf("%f",&z2.imag);
printf("Enter the real part: ");
scanf("%f",&z3.real);
printf("Enter the imaginary part: ");
scanf("%d",&z3.imag);
printf("Complex number 1: %.2f + %.2fi",z1.real,z1.imag);
printf("\n");
printf("Complex number 2: %.2f + %.2fi",z2.real,z2.imag);
printf("\n");
add(z1,z2);
printf("\n");
//printf("Addition: %d",temp);
sub(z1,z2);
printf("\n");
mul(z1,z2);
printf("\n");
div(z1,z2);
printf("\n");
mod(z1);
printf("\n");
modulus(z2);
//int z;

//z = ((z1-z2)*z3)/(z1+z2) + 4.39 ;
//printf("value of z: ((%d - %d) + (%d - %d+*i))/((%d + %d)+(%d+%d))")
//printf("value of z: %d",z);
return 0;
}





