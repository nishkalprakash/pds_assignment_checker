
/*
section:14
roll no:22MI10013
name:animesh mishra
assignment no:9
description:program to add two complex numbers
*/
#include<stdio.h>
typedef struct complex {
     float real;
     float imag;
  } complex;
 
complex add(complex n1,complex n2);

int main() {
    complex n1,n2,result;

    printf("for 1st complex number\n");
    printf("enter the real and imaginary parts:");
    scanf("%f%f", &n1.real,&n1.imag);
    printf("\n for second complex number\n");
    printf("enter the real and imaginary parts:");
    scanf("%f%f",&n2.real,&n2.imag);

    result = add(n1,n2);

    printf("sum=%.1f + %.1fi",result.real,result.imag);
    return 0;
}

complex add(complex n1,complex n2) {
      complex temp;
      temp.real = n1.real + n2.real;
      temp.imag = n1.imag + n2.imag;
      return (temp);
}
