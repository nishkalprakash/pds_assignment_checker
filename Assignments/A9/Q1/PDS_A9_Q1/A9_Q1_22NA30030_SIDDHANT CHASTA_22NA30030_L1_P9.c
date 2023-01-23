
/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 9
Description :A program to add two complex numbers by passing structure to a funtion.
*/

#include<stdio.h>

    typedef struct complex 
  {
         float real;
         float img;
  } complex;
   
  void add(complex z1,complex z2)
 {
                 complex z3;
                 
                 z3.real = z1.real + z2.real;
                 z3.img  = z1.img + z2.img;
                 printf("Z : %f + %fi",z3.real,z3.img);
 }

int main()
{
    complex z1,z2;
    printf("Enter the two complex numbers z1 and z2 : ");
    printf("\n");
    printf("z1 : ");
    scanf("%f %f",&z1.real,&z1.img);
    printf("z2 : ");
    scanf("%f %f",&z2.real,&z2.img);
    
    add(z1,z2);
  
    return 0;
}



