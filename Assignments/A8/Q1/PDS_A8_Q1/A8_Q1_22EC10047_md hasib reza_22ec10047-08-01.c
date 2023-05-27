#include <stdio.h>
typedef struct complex {
float real;
float imag;
} complex;
complex add(complex z1, complex z2);
complex sub(complex z1, complex z2);
complex multi(complex z1,complex z2);
complex div(complex z1,complex z2);
float mod1(complex z1);
complex zee(complex z1,complex z2,complex z5);
int main() {
complex z1, z2,z3,z5,z;
float z4;
printf("Enter 1st complex number \n");
printf("Enter the real and imaginary parts: ");
scanf("%f %f", &z1.real, &z1.imag);
printf("\nEnter 2nd complex number \n");
printf("Enter the real and imaginary parts: ");
scanf("%f %f", &z2.real, &z2.imag);
printf("\nEnter z5(third) complex number \n");
printf("Enter the real and imaginary parts: ");
scanf("%f %f", &z5.real, &z5.imag);
printf("\n the first complex number is : %.lf + i%.lf", z1.real,z1.imag);
printf("\n the second complex number is : %.lf + i%.lf", z2.real,z2.imag);
z3 = add(z1, z2);
printf("Sum = %.1f + i%.1f", z3.real, z3.imag);
z3 = sub(z1, z2);
printf("sub = %.1f - i%.1f", z3.real, z3.imag);
z3 = mul(z1, z2);
printf("mul = %.1f+ i%.1f", z3.real, z3.imag);
z3 = div(z1, z2);
printf("mul = %.1f- i%.1f", z3.real, z3.imag);
z4 = mod1(z1);
printf("mod of z1 = %.1f", z4.real);
z4 = mod1(z2);
printf("mod of z2 = %.1f", z4.real);
z = zee(z1,z2,z5)
return 0;
}
complex add(complex z1, complex z2) {
complex temp;
temp.real = z1.real + z2.real;
temp.imag = z1.imag + z2.imag;
return (temp);
}
complex sub(complex z1, complex z2) {
complex temp;
temp.real = z1.real - z2.real;
temp.imag = z1.imag - z2.imag;
return (temp);
}
complex mul(complex z1, complex z2) {
complex temp;
temp.real = (z1.real)*(z2.real)-(z1.imag)*(z2.imag);
temp.imag = (z1.real)*(z2.imag)+(z2.real)*(z1.imag);
return (temp);
}
complex div(complex z1, complex z2) {
complex temp;
temp.real = ((z1.real)*(z2.real)+(z1.imag)*(z2.imag))/((z2.real*z2.real)+(z2.imag*z2.imag));
temp.imag = ((z1.real)*(z2.imag)-(z2.real)*(z1.imag))/((z2.real*z2.real)+(z2.imag*z2.imag));
return (temp);
}
float mod(complex z1) {
float temp;
temp.real = sqrt((z1.real*z1.real)+(z1.imag*z1.imag));
temp.imag = 0;
return (temp);
}
float mod(complex z2) {
float temp;
temp.real = sqrt((z2.real*z2.real)+(z2.imag*z2.imag));
temp.imag = 0;
return (temp);
}
complex zee(z1,z2,z5){
complex temp;

}