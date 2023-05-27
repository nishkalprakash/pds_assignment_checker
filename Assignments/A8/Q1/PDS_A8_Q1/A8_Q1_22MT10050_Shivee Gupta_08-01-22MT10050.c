#include<stdio.h>
#include<math.h>

typedef struct Complex {
 float real;
 float imag;
} complex;

complex add(complex z1, complex z2)
// z = z1 + z2
{
   complex za;
   za.real = z1.real + z2.real;
   za.imag = z1.imag + z2.imag;
   return za;
}

complex sub(complex z1,complex z2) // z = z1 - z2
{
    complex zs;
    zs.real = z1.real - z2.real;
    zs.imag = z1.imag - z2.imag;
    return zs;
}

complex mul(complex z1,complex z2) // z = z1*z2
{
    complex zm;
    zm.real = z1.real*z2.real - z1.imag*z2.imag;
    zm.imag = z1.real*z2.imag + z2.real*z1.imag;
    return zm;
}

complex div(complex z1,complex z2) // z = z1/z2
{
    complex zd;
    zd.real = (z1.real*z2.real + z1.imag*z2.imag)/(z2.real*z2.real + z2.imag*z2.imag);
    zd.imag = (z1.real*z2.imag - z2.real*z1.imag)/(z2.real*z2.real + z2.imag*z2.imag);
    return zd;
}

float modc(complex z1) // z = |z1|
{
    float zf;
    zf = sqrt(z1.real*z1.real + z1.imag*z1.imag);
    return zf;
}

void printc(complex z1) //z = x+yi
{
    printf("%.2f + %.2fi\n",z1.real,z1.imag);
}

int main(){
complex z1, z2, z3,sum,dif,mult,divd,t,z;
float abs1,abs2;

printf("Enter the first complex number : \n");
printf("Enter the real part : ");
scanf("%f",&z1.real);
printf("Enter the imaginary part : ");
scanf("%f",&z1.imag);
printf("Complex number 1 : ");
printc(z1);

printf("Enter the second complex number : \n");
printf("Enter the real part : ");
scanf("%f",&z2.real);
printf("Enter the imaginary part : ");
scanf("%f",&z2.imag);
printf("Complex number 2 : ");
printc(z2);

printf("Enter the third complex number : \n");
printf("Enter the real part : ");
scanf("%f",&z3.real);
printf("Enter the imaginary part : ");
scanf("%f",&z3.imag);
printf("Complex number 3 : ");
printc(z3);
printf("\n");

sum = add(z1,z2);
printf("Addition : ");
printc(sum);

dif = sub(z1,z2);
printf("Subtraction : ");
printc(dif);

mult = mul(z1,z2);
printf("Multiplication : ");
printc(mult);

divd = div(z1,z2);
printf("Division : ");
printc(divd);

abs1 = modc(z1);
printf("modulus of Complex number 1 : %f\n",abs1);
abs2 = modc(z2);
printf("modulus of Complex number 1 : %f\n",abs2);

t = mul(div(sub(z1,z2),add(z1,z2)),z3);
z.real = t.real + 4.39;
z.imag = t.imag;
printf("Value of z : ");
printc(z);
printf("Modulus of z : %f",modc(z));

return 0;
}
