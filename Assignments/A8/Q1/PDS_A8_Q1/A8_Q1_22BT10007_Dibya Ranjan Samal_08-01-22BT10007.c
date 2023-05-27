#include<stdio.h>
#include<math.h>
 typedef struct complex{
float real;
float img;
}complex ;

complex add(complex n1, complex n2) {
complex temp;
temp.real = n1.real + n2.real;
temp.img = n1.img + n2.img;
return (temp);
}
complex sub(complex n1, complex n2) {
complex temp;
temp.real = n1.real - n2.real;
temp.img = n1.img - n2.img;
return (temp);
}

complex mult(complex z1,complex z2){
complex temp;
temp.real= (z1.real*z2.real)-(z1.img*z2.img);
temp.img=(z1.real*z2.img)+(z2.real*z1.img);
return (temp);}

complex divc(complex z1,complex z2){
complex temp;
temp.real= ((z1.real*z2.real)+(z1.img*z2.img))/((z2.real*z2.real)+(z2.img*z2.img));
temp.img = (-((z1.real*z2.img)-(z2.real*z1.img))/((z2.real*z2.real)+(z2.img*z2.img)));
return (temp);}

float modulus(complex n1){
    float z = (float)sqrt((n1.real*n1.real)+(n1.img*n1.img));
  return z;
}
complex z1,z2,z3;
int main()
{
printf("Enter the first complex no.\n");
printf("Enter the real part: ");
scanf("%f",&z1.real);
printf("Enter the imaginary part: ");
scanf("%f",&z1.img);
printf("Enter the second complex no.\n");
printf("Enter the real part: ");
scanf("%f",&z2.real);
printf("Enter the imaginary part: ");
scanf("%f",&z2.img);
printf("Enter the real part: ");
scanf("%f",&z3.real);
printf("Enter the imaginary part: ");
scanf("%f",&z3.img);
complex sum = add(z1, z2);
complex diff = sub(z1, z2);
complex prod= mult(z1,z2);
complex division= divc(z1,z2);
complex result = mult(divc(sub(z1,z2),add(z1,z2)),z3);
printf("Complex no.1 = %.2f + %.2f i\n",z1.real,z1.img);
printf("Complex no.2 = %.2f + %.2f i\n",z2.real,z2.img);
printf("Addition : %.2f + %.2f i\n", sum.real, sum.img);
printf("Subtraction : %.2f + %.2f i\n", diff.real, diff.img);
printf("Multiplication: %.2f + %.2f i\n", prod.real,prod.img);
printf("Division: %.2f + %.2f i\n", division.real,division.img);
printf("Modulus of complex number 1: %.2f\n",modulus(z1));
printf("Modulus of complex number 2: %.2f\n",modulus(z2));
printf("Value of z : %.2f + %.2f i\n",result.real+4.39,result.img);

printf("Modulus of z : %.2f", (float)sqrt((result.real+4.39)*(result.real+4.39)+(result.img*result.img)));



return 0;
}
