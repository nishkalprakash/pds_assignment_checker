
/*
sec2
name- Omkar Dilip Desai
Roll no - 22MF3IM06
q. no-01
description- operations on complex number  */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct complex{

float real;
float img;

}complex;

complex add(complex c1, complex c2);
complex sub(complex c1, complex c2);
complex mul(complex c1, complex c2);
complex division(complex c1, complex c2);
float modulus_(complex c1);

int main(){
    complex c1,c2,c3,c4,c5,c6,c7,c8;
    float z1,z2,z3;
    printf("Enter the real part ist complex number\n");
    scanf("%f",&c1.real);
    printf("Enter the imaginary part ist complex number\n");
    scanf("%f",&c1.img);
    printf("Enter the real part 2nd complex number\n");
    scanf("%f",&c2.real);
    printf("Enter the imaginary part ist complex number\n");
    scanf("%f",&c2.img);
     printf("Enter the real part 3rd complex number\n");
    scanf("%f",&c3.real);
     printf("Enter the imaginary part 3rd complex number\n");
    scanf("%f",&c3.img);

    printf("THe first complex number is %f + %fi \n",c1.real,c1.img);
     printf("THe 2nd complex number is %f + %fi \n",c2.real,c2.img);

c4=  add( c1,  c2);
   printf("Addition : %f + %fi \n",c4.real,c4.img);

c5= sub(c1,c2);

     printf("subtraction : %f + %fi \n",c5.real,c5.img);

  c6=mul(c1,c2);

      printf("multiplication   : %f + %fi \n",c6.real,c6.img);

    c7=division(c1,c2);

      printf("division   : %f + %fi \n",c7.real,c7.img);



     z1=modulus_(c1);
     printf("Modulus of 1st complex number is %0.3f\n",z1);
      z2=modulus_(c2);
     printf("Modulus of 1st complex number is %0.3f\n",z2);



     c8=mul(division(c5,c4),c3);
     c8.real=c8.real+4.39;
     printf("Value of z is %f + %fi \n",c8.real,c8.img);

     z3=modulus_(c8);
     printf("Modulus of z is %f0.3\n",z3);


return 0;
}
complex add(complex c1, complex c2){

  complex c4;
  c4.real= c1.real + c2.real;
  c4.img= c1.img + c2.img;

   return c4;
}
complex sub(complex c1, complex c2){

  complex c5;
  c5.real= c1.real - c2.real;
  c5.img= c1.img - c2.img;

   return c5;
}


complex mul(complex c1, complex c2){

  complex c6;
  c6.real= ((c1.real*c2.real)-(c1.img*c2.img));
  c6.img= ((c1.real*c2.img) + (c2.real*c1.img));

   return c6;
}


complex division(complex c1, complex c2){

  complex c7;
  c7.real= ((c1.real*c2.real)+(c1.img*c2.img))/(c2.real*c2.real+ c2.img*c2.img);
  c7.img= ((c1.real*c2.img) - (c2.real*c1.img))/(c2.real*c2.real+ c2.img*c2.img);

   return c7;
}


float modulus_(complex c1){

 float z;
 z=sqrt(c1.real*c1.real+c1.img*c1.img);

return z;
}





