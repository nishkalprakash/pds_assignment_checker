/*
Dhavale Surabhi

22ME10026
LAB10
Section 14
Question2
*/

typedef struct complex // including packages 
{
float real;
float imag;
}
complex;
complex add(complex z1,complex z2)   //method to add comple numbers 
{
complex z;
z.real=z1.real+z2.real;
z.imag=z1.imag+z2.imag;
return z;
}
int main() // main function 
{
complex z1,z2;
printf("z1= ");
scanf("%f %f",&z1.real,&z1.imag);
printf("z2= ");
scanf("%f %f",&z2.real,&z2.imag);
complex z=add(z1,z2);
printf("z=%f + %f",z.real,z.imag);   //printing sum of imaginary numbers
return 0; 
}




