/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 9
Description :  to add two complex number
*/
#include<stdio.h>
typedef struct complex{//structure
float real;
float imag;
}complex;

complex add(complex Z1, complex Z2){//add function
complex Z3;
Z3.real=Z1.real+Z2.real;
Z3.imag=Z1.imag+Z2.imag;
return Z3;
}
int main(){// main
complex Z1 ,Z2;
printf("Enter Z1(a+ib):");
scanf("%f%f",&Z1.real,&Z1.imag);
printf("Enter Z2(c+id):");
scanf("%f%f",&Z2.real,&Z2.imag);
complex Z3 = add(Z1,Z2);//function calling
printf("Z = %.2f + %.2fi\n",Z3.real,Z3.imag);
}
