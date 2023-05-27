#include<stdio.h>
#include<math.h>
typedef struct complex {
float real;
float imag;
} complex;
complex add (complex z1,complex z2);
complex sub (complex z1,complex z2);
complex mul (complex z1,complex z2);
complex div (complex z1,complex z2);
int main(){
complex z1,z2,result1,result2,result3,result4;
printf("For 1st complex number \n");
printf("Enter the real and imaginary parts");
scanf("%f %f", &z1.real , &z1.imag);
printf("For 2nd complex number \n");
printf("Enter the real and imaginary parts");
scanf("%f %f", &z2.real , &z2.imag);
result1 = add(z1,z2);
printf("Sum = %.lf + %.lfi", result1.real,result1.imag);
result2 = sub(z1,z2);
printf("Subtraction = %.lf - %.lfi", result2.real, result2.imag);
result3 = mul(z1,z2);
printf("Multiplication = %.2f + %.2fi", result3.real, result3.imag);
result4 = div(z1,z2);
printf("Division = %.2f - %.2fi", result4.real, result4.imag);
return 0;
}
complex add (complex z1,complex z2){
complex temp;
temp.real = z1.real + z2.real ;
temp.imag = z1.imag + z2.imag ;
return (temp);

}
complex sub(complex z1,complex z2){
complex temp;
temp.real = z1.real - z2.real ;
temp.imag = z1.imag - z2.imag ;
return (temp);
}
complex mul (complex z1,complex z2){
complex temp;
temp.real = (z1.real*z2.real) - (z1.imag*z2.imag) ;
temp.imag = (z1.real*z2.imag) + (z2.real*z1.imag);
return (temp);
}
complex div(complex z1,complex z2){
complex temp;
temp.real = (z1.real*z2.real + z1.imag*z2.imag) / (z2.real*z2.real + z2.imag*z2.imag);
temp.imag = (z1.real*z2.imag - z2.real*z1.imag) / (z2.real*z2.real + z2.imag*z2.imag);
return (temp);
}

