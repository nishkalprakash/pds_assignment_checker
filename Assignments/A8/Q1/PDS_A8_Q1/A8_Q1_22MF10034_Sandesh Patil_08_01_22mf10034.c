/* name - sandesh pati
roll no-22mf10034 */


#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 typedef struct Complex
 {
     float real;
     float imag;

 }complex;

 complex add(complex num1,complex num2);
 complex sub(complex num1,complex num2);
 complex division(complex num1,complex num2);
 complex mul(complex num1,complex num2);
 float mod(complex num1);


 int main()
 {
     complex num1,num2,num3,num4,num5,num6,num7,z;
     float z1,z2;
     printf("imaginary part of 1st complex no: \n");
     scanf("%f",&num1.imag);
     printf("real part of 1st complex no: \n");
     scanf("%f",&num1.real);
     printf("imaginary part of 2nd complex no: \n");
     scanf("%f",&num2.imag);
     printf("real part of 2nd complex no: \n");
     scanf("%f",&num2.real);
     printf("imaginary part of 3rd complex no: \n");
     scanf("%f",&num3.imag);
     printf("real part of 3rd complex no: \n");
     scanf("%f",&num3.real);

     printf("complex number1: %f + i%f \n",num1.real,num1.imag);
     printf("complex number2: %f + i%f \n",num2.real,num2.imag);
     printf("complex number3: %f + i%f \n",num3.real,num3.imag);
     num4=add(num1,num2);
     printf("addition of complex number is %f + i%f \n",num4.real,num4.imag);
     num5=sub(num1,num2);
     printf("substraction of complex number is %f + i%f \n",num5.real,num5.imag);
     num7=mul(num1,num2);
     printf("multiplication of complex number is %f + i%f \n",num7.real,num7.imag);
     num6=division(num1,num2);
     printf("division of complex number is %f + i%f \n",num6.real,num6.imag);
     z1=mod(num1);
     printf("modulus of 1st complex number is %f \n",z1);
     z2=mod(num2);
     printf("modulus of 2nd complex number is %f \n",z2);


    z = mul(division(sub(num1,num2),add(num1,num2)),num3);
    z.real = 4.39 + z.real;

    printf("the value of z :%f + i%f",z.real,z.imag);
    printf("modulus of z: %f",mod(z));


     return 0;
 }

complex add(complex num1,complex num2)
{
    complex num4;
    num4.imag=num1.imag + num2.imag;
    num4.real=num1.real+num2.real;

    return num4;
}

 complex sub(complex num1,complex num2)
 {
    complex num5;
    num5.imag=num1.imag - num2.imag;
    num5.real=num1.real-num2.real;
    return num5;

 }

 complex division(complex num1,complex num2)
 {
     complex v;
     v.imag=-((((num1.real)*(num2.imag))+((num2.real)*(num1.imag)))/(sqrt((num2.real)*(num2.real)+(num2.imag)*(num2.imag))));
     v.real=(((num1.real)*(num2.real))-((num1.imag)*(num2.imag)))/(sqrt((num2.real)*(num2.real)+(num2.imag)*(num2.imag)));
     return v;
 }

 complex mul(complex num1,complex num2)
 {
     complex num7;
     num7.imag=((num1.real)*(num2.imag))+((num2.real)*(num1.imag));
     num7.real=((num1.real)*(num2.real))-((num1.imag)*(num2.imag));
     return num7;
 }

float mod(complex num1)
{
    int s;
    s = sqrt((num1.real)*(num1.real) + (num1.imag)*(num1.imag));
    return s;
}













