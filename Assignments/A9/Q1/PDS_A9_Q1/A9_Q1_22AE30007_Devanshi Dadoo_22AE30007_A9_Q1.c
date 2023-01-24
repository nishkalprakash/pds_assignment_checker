/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
Assigment 9
desciption: TO ADD 2 COMPLEX NUMBERS 
*/

#include<stdio.h>  


// DEFINING STRUCTURE COMPLEX 



typedef struct complex
{
 float real;
 float imag;
} complex;

complex z1, z2;

// READING Z1

struct complex read_numbers1()
{
 struct complex z1;
 printf("z1: ");
 scanf("%f %f", &z1.real, &z1.imag);
 return z1;
}


// READING Z2



struct complex read_numbers2()
{
 struct complex z2;
 printf("z2: ");
 scanf("%f %f", &z2.real, &z2.imag);
 return z2;
}
 

// ADDING Z1 AND Z2



float complex_add(complex a,complex b)
{
 struct complex z1, z2, z;
 z.real= a.real+ b.real;
 z.imag= a.imag+ b.imag;
 printf("Z = %f + %fi", z.real, z.imag);
}

int main()
{
 struct complex z1, z2;
 z1= read_numbers1();
 z2= read_numbers2();
 complex_add(z1, z2);

}
 
