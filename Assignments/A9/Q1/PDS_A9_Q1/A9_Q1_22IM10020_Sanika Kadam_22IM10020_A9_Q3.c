//Assignment 9
//Section 14
//Name:Sanika Kadam
//Question 3

//Program to add two complex number

#include<stdio.h>

typedef struct{
              float real;
              float imag;
              }complex;

//Function to find sum of two complex numbers

complex sum(complex *Z1,complex *Z2,complex *Z)
{
  Z->real=(Z1->real)+(Z2->real);
  Z->imag=(Z1->imag)+(Z2->imag);
}

int main()
{
  complex Z1,Z2,Z;
  
  printf("Z1:"); //Enter first complex number 
  scanf("%f %f",&Z1.real,&Z1.imag);
  printf("\n");
  printf("Z2:"); //Enter second complex number
  scanf("%f %f",&Z2.real,&Z2.imag);

  sum(&Z1,&Z2,&Z); //Calling a function
  printf("Sum Z: %f + %fi\n",Z.real,Z.imag);
  return 0;
}
  


  

