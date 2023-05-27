/*
*Name-Aditya Raj Shit
*Roll no.-22AE10002
*Section-2
*Question-1
*/

#include<stdio.h>
#include<math.h>

typedef struct                      //structure for complex number
{
    float real;
    float img;
}complex;

void display(complex z)         //function to print complex number
{
    printf("%f + %fi",z.real,z.img);
    return;
}

complex add(complex a,complex b)        //function to add two complex numbers
{
    complex sum;
    sum.real=a.real+b.real;
    sum.img=a.img+b.img;
    return sum;
}

complex sub(complex a,complex b)        //function to subtract two complex numbers
{
    complex diff;
    diff.real=a.real-b.real;
    diff.img=a.img-b.img;
    return diff;
}

complex mul(complex a,complex b)        //function to multiply two complex numbers
{
    complex prod;
    prod.real=(a.real*b.real)-(a.img*b.img);
    prod.img=(a.real*b.img)+(a.img*b.real);
    return prod;
}

complex divc(complex a,complex b)       //function to divide two complex numbers
{
    complex divi;
    divi.real=((a.real*b.real)+(a.img*b.img))/(pow(b.real,2)+pow(b.img,2));
    divi.img=(-(a.real*b.img)+(a.img*b.real))/(pow(b.real,2)+pow(b.img,2));
    return divi;
}

float modc(complex a)               //function to calculate modulus of a complex number
{
    float val;
    val=sqrt(pow(a.real,2)+pow(a.img,2));
    return val;
}

int main()
{
    complex sum,diff,prod,divi;
    complex z,z1,z2,z3;
   float  a1,a2;
   float  b1,b2;
   float  c1,c2;

   //asking for first complex number from user
   printf("Enter first complex number: \n");
   printf("    Enter the real part: ");
   scanf("%f",&a1);
   printf("    Enter the imaginary part: ");
   scanf("%f",&a2);
   printf("\n");

   z1.real=a1;
   z1.img=a2;
   display(z1);

   //asking the user for second complex number
   printf("Enter second complex number: \n");
   printf("    Enter the real part: ");
   scanf("%f",&b1);
   printf("    Enter the imaginary part: ");
   scanf("%f",&b2);
   printf("\n");

   z2.real=b1;
   z2.img=b2;

   //asking the user for third complex number
   printf("Enter third complex number: \n");
   printf("    Enter the real part: ");
   scanf("%f",&c1);
   printf("    Enter the imaginary part: ");
   scanf("%f",&c2);
   printf("\n");

   z3.real=c1;
   z3.img=c2;

   sum=add(z1,z2);
   diff=sub(z1,z2);
   prod=mul(z1,z2);
   divi=divc(z1,z2);

   printf("\nComplex number 1            : ");
   display(z1);
   printf("\nComplex number 2            : ");
   display(z2);

   printf("\nAddition                    : ");
   display(sum);

   printf("\nSubtraction                 : ");
   display(diff);

   printf("\nMultiplication              : ");
   display(prod);

   printf("\nDivision                    : ");
   display(divi);

    complex zAux=mul(divc(sub(z1,z2),add(z1,z2)),z3);
    z.real=zAux.real+4.39;
    z.img=zAux.img;

    printf("\nModulus of complex number 1  :%f",modc(z1));
    printf("\nModulus of complex number 2  :%f",modc(z2));
    printf("\nValue of z                   :");
    display(z);
    printf("\nModulus of z               :%f",modc(z));
}
