//NAME : HARSH PATIDAR
// ROLL NO . : 22MF10015
// SECTION : 2
// PROBLEM 1
//DESCRIPTION ;


#include<stdio.h>
#include<math.h>


typedef struct complex {
float real ;
float imag;
} complex;

complex add(complex z1, complex z2)
{
complex add;
add.real=z1.real+z2.real;
add.imag=z1.imag+z2.imag;
return add;
}

complex sub(complex z1, complex z2)
{
complex sub;
sub.real=z1.real-z2.real;
sub.imag=z1.imag-z2.imag;
return sub;
}
complex mul(complex z1, complex z2)
{
complex mul;
mul.real=((z1.real*z2.real)-(z1.imag*z2.imag));
mul.imag=((z1.real*z2.imag)+(z2.real*z1.imag));
return mul;
}

complex div_s(complex z1, complex z2)
{
complex div_s;
div_s.real=((z1.real*z2.real)+(z1.imag*z2.imag))/(pow(z2.real,2)+pow(z2.imag,2));
div_s.imag=((z1.real*z2.imag)-(z2.real*z1.imag))/(pow(z2.real,2)+pow(z2.imag,2));
return div_s;
}

float mod(complex z1)
{
    float mode_1 ;
    mode_1 = sqrt(pow(z1.real,2)+pow(z1.imag,2));
    return mode_1;
}


int main (){

    complex sum , minus,multi,division,i,j;
    printf("enter the first complex number\n");
    complex z1,z2,z3,z;
    printf("the real part of the complex 1 is :");
    scanf("%f",&z1.real);
    printf("the imaginary part of the complex 1 is :");
    scanf("%f",&z1.imag);

     printf("enter the second complex number\n");

     printf("the real part of the complex 2 is :");
    scanf("%f",&z2.real);
    printf("the imaginary part of the complex 2 is :");
    scanf("%f",&z2.imag);

     printf("enter the third complex number\n");

    printf("the real part of the complex 3 is :");
    scanf("%f",&z3.real);
    printf("the imaginary part of the complex 3 is :");
    scanf("%f",&z3.imag);



printf("complex1 is : %0.2f +%0.2fi\n",z1.real,z1.imag);

printf("complex2 is : %0.2f +%0.2fi\n",z2.real,z2.imag);


sum = add(z1,z2);
printf(" Addition is : %0.2f + %0.2fi\n",sum.real,sum.imag);
minus= sub(z1,z2);
printf("subtraction is %0.2f + %0.2fi\n",minus.real,minus.imag);
multi = mul(z1,z2);
printf(" multiplication is %0.2f + %0.2fi\n",multi.real,multi.imag);
division= div_s(z1,z2);
printf("Division is : %0.2f + %0.2fi\n",division.real,division.imag);
float z1_mode=mod(z1);
float z2_mode=mod(z2);
float z3_mode=mod(z3);

i=div_s(minus,sum);
j=mul(i,z3);
z.real=j.real+4.39;
z.imag=j.imag;
float z_mode=mod(z);
printf("modulous  of complex number 1  is %0.2f\n",z1_mode );
printf("modulous  of complex number 2  is %0.2f\n",z2_mode );

printf("value of z is: %0.2f+%0.2fi\n",z.real,z.imag);
printf("modulous  of complex number   is %0.2f\n",z_mode );
return 0;
}
