#include<stdio.h>
#include<math.h>
typedef struct complex{
    float real;
    float imag;
}complex;


complex add(complex z1, complex z2){
    complex temp;
temp.real = z1.real + z2.real;
temp.imag = z1.imag + z2.imag;


return temp;
}


complex sub(complex z1, complex z2){
    complex temp;
temp.real = z1.real - z2.real;
temp.imag = z1.imag - z2.imag;


return temp;
}

complex mul(complex z1, complex z2){
    complex temp;
    temp.real = z1.real*z2.real-z1.imag*z2.imag;
    temp.imag = z1.real*z2.imag + z1.imag*z2.real;


return temp;
}

complex div(complex z1, complex z2){
    complex temp;
    temp.real = (z1.real*z2.real + z1.imag*z2.imag)/((z2.real)*(z2.real) + (z2.imag)*(z2.imag));
    temp.imag = (z1.real*z2.imag - z2.real*z1.imag)/((z2.real)*(z2.real) + (z2.imag)*(z2.imag));


return temp;
}

float mod(complex z1){



return sqrt(z1.real*z1.real + z1.imag*z1.imag);
}

complex z(complex z1, complex z2, complex z3){

complex temp3;
temp3 = mul((div(sub(z1,z2),add(z1,z2))),z3);
temp3.real = temp3.real + 4.39;

return temp3;
}

int main(){
complex c1,c2,c3;
printf("Enter the first complex number\n");
printf("Enter the real part");
scanf("%f",&c1.real);
printf("Enter the complex part");
scanf("%f",&c1.imag);
printf("Enter the second complex number\n");
printf("Enter the real part");
scanf("%f",&c2.real);
printf("Enter the imaginary part");
scanf("%f",&c2.imag);
printf("Enter the real part");
scanf("%f",&c3.real);
printf("Enter the imaginary part");
scanf("%f",&c3.imag);
printf("Complex number1 : %0.2f + %0.2fi\n", c1.real, c1.imag);
printf("Complex number2 : %0.2f + %0.2fi\n", c2.real, c2.imag);
printf("Addition: %0.2f + %0.2fi\n", add(c1,c2).real, add(c1,c2).imag);
printf("Suntraction: %0.2f + %0.2fi\n", sub(c1,c2).real, sub(c1,c2).imag);
printf("Multipliation:%0.2f + %0.2fi\n", mul(c1,c2).real, mul(c1,c2).imag);
printf("Division: %0.2f + %0.2fi\n", div(c1,c2).real, div(c1,c2).imag);
printf("Modulus of complex number1 is %0.2f\n", mod(c1));
printf("Modulus of complex number2 is %0.2f\n", mod(c2));
float a = z(c1,c2,c3).real;
float b = z(c1,c2,c3).imag;
printf("Value of z : %f + %fi \n", a,b);
printf("Modulus of z is %f",sqrt(a*a + b*b));

}
