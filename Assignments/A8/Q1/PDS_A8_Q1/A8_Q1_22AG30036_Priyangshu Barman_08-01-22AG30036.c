#include<stdio.h>
#include<math.h>
typedef struct Complex
{
    float real;
    float imag;
}
complex;
complex add(complex z1, complex z2);
complex sub(complex z1, complex z2);
complex mul(complex z1, complex z2);
complex div(complex z1, complex z2);
float mod1(complex z1);
float mod2(complex z2);
float mod3(complex z);
int main()
{
  complex z1, z2, z3, z, ans;
  printf("Enter the first complex number: \n");
  printf("Enter the real part: ");
  scanf("%f", &z1.real);
  printf("Enter the imaginary part: ");
  scanf("%f", &z1.imag);
  printf("Enter the second complex number: \n");
  printf("Enter the real part: ");
  scanf("%f", &z2.real);
  printf("Enter the imaginary part: ");
  scanf("%f", &z2.imag);
  printf("Enter the real part: ");
  scanf("%f", &z3.real);
  printf("Enter the imaginary part: ");
  scanf("%f", &z3.imag);
  printf("\n");
  printf("Complex number 1: %.2f + %.2fi \n", z1.real, z1.imag);
  printf("Complex number 2: %.2f + %.2fi \n", z2.real, z2.imag);
  ans = add(z1, z2);
  printf("Addition: %.2f + %.2fi \n", ans.real, ans.imag);
  ans = sub(z1, z2);
  printf("Subtraction: %.2f + %.2fi \n", ans.real, ans.imag);
  ans = mul(z1, z2);
  printf("Multiplication: %.2f + %.2fi \n", ans.real, ans.imag);
  ans = div(z1, z2);
  printf("Division: %.2f + %.2fi \n", ans.real, ans.imag);
  printf("Modulus of complex number 1: %.2f \n", mod1(z1));
  printf("Modulus of complex number 2: %.2f \n", mod2(z2));
  z = mul(div(sub(z1,z2),add(z1,z2)),z3);
  printf("Value of z: %.2f + %.2fi\n", z.real, z.imag);
  printf("Modulus of z: %.2f \n", mod3(z));
  return 0;
}
complex add(complex z1, complex z2)
{
    complex pb;
    pb.real = z1.real + z2.real;
    pb.imag = z1.imag + z2.imag;
    return(pb);
}
complex sub(complex z1, complex z2)
{
    complex pb;
    pb.real = z1.real - z2.real;
    pb.imag = z1.imag - z2.imag;
    return(pb);
}
complex mul(complex z1, complex z2)
{
    complex pb;
    pb.real = (z1.real * z2.real) - (z1.imag * z2.imag);
    pb.imag = (z1.real * z2.imag) + (z2.real * z1.imag);
    return(pb);
}
complex div(complex z1, complex z2)
{
    complex pb;
    pb.real = ((z1.real * z2.real) + (z1.imag * z2.imag))/((z2.real * z2.real) + (z2.imag * z2.imag));
    pb.imag = (-((z1.real * z2.imag) - (z2.real * z1.imag))/((z2.real * z2.real) + (z2.imag * z2.imag)));
    return(pb);
}
float mod1(complex z1)
{
    float PB;
    PB = sqrt((z1.real * z1.real) + (z1.imag * z1.imag));
    return(PB);
}
float mod2(complex z2)
{
    float PB;
    PB = sqrt((z2.real * z2.real) + (z2.imag * z2.imag));
    return(PB);
}
float mod3(complex z)
{
    float PB;
    PB = sqrt((z.real * z.real) + (z.imag * z.imag));
    return(PB);
}
