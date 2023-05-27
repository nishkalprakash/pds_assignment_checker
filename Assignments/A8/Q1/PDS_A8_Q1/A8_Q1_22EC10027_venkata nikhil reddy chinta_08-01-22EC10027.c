/*
* Section 2
* Roll No : 22EC10027
* Name : Chinta venkata nikhil reddy
* Assignment No : 8
* Description :
*question : 1
*/
#include<stdio.h>
#include<math.h>
  typedef struct complex {
    float real;
    float img;
    }complex;
complex add(complex,complex);
complex sub(complex,complex);
complex mult(complex,complex);
complex div(complex,complex);
float modulus(complex);
int main()
{

    complex a,b,c1,c2,c3,c4,z,z1,z2;
    float d1,d2,d3;
    printf("enter the real part : ");
    scanf("%f" , &a.real);
    printf("\nenter the img part : ");
    scanf("%f" , &a.img);
    printf("\ncomplex number 1 : %.2f+i%.2f\n" , a.real,a.img);
    printf("\nenter the real part : ");
    scanf("%f" , &b.real);
    printf("\nenter the img part : ");
    scanf("%f" , &b.img);
    printf("\ncomplex number 2 : %.2f+i%.2f" , b.real,b.img);
      printf("\nenter the real part : ");
    scanf("%f" , &z.real);
    printf("\nenter the img part : ");
    scanf("%f" , &z.img);
    printf("\ncomplex number 1 : %.2f+i%.2f\n" , z.real,z.img);
    c1=add(a,b);
    printf("\naddition : %.2f+i%.2f" , c1.real,c1.img);
     c2=sub(a,b);
    printf("\nsubstraction : %.2f+i%.2f" , c2.real,c2.img);
    c3=mult(a,b);
    printf("\nmultiplication : %.2f+%.2f" , c3.real,c3.img);
     c4=div(a,b);
    printf("\ndivision : %.2f+%.2f" , c4.real,c4.img);
    d1=modulus(a);
    printf("\nmodulus of complex 1 : %f" , d1);
     d2=modulus(b);
    printf("\nmodulus of complex 2 : %f" , d2);
    z1=div(c2,c1);
    z2=mult(z1,z);
    z2.real=z2.real+4.39;
    printf("\nvalue of z : %.2f+i%.2f" , z2.real,z2.img);
    d3=modulus(z2);
    printf("\nmodulus of z : %.2f" , d3);

    return 0;
}
    complex add(complex p , complex q)
{
    complex r;
    r.real=p.real+q.real;
    r.img=p.img+q.img;
   return r;
}
complex sub(complex p2, complex q2)
{
   complex r2;
    r2.real=p2.real-q2.real;
    r2.img=p2.img-q2.img;
   return r2;
}
complex mult(complex p3 , complex q3)
{
    complex r3;
    r3.real=(p3.real)*(q3.real)-(p3.img)*(q3.img);
    r3.img=(p3.real)*(q3.img)+(q3.real)*(p3.img);
    return r3;
}
float modulus(complex p5)
{
    float r5;
    r5=sqrt((p5.real)*(p5.real)+(p5.img)*(p5.img));
    return r5;
}
complex div(complex p4 , complex q4)
{
    complex r4;
    r4.real=((p4.real)*(q4.real)+(p4.img)*(q4.img))/((q4.real)*(q4.real)+(q4.img)*(q4.img));
    r4.img=((q4.real)*(p4.img)-(p4.real)*(q4.img))/((q4.real)*(q4.real)+(q4.img)*(q4.img));
    return r4;
}
