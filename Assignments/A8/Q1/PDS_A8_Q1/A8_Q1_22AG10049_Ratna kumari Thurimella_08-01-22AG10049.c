#include<stdio.h>
#include<string.h>
#include<math.h>
typedef struct complex
{
    float real;
    float imag;
}Complex;

struct complex add(struct complex , struct complex );
struct complex sub (struct complex , struct complex );

struct complex mult(struct complex , struct complex );
struct complex div(struct complex , struct complex);

float mod(struct complex);

int main()
{
    struct complex z1,z2,z3,addition,substraction,multiplication,division,r,p;
    float modulus;
    printf("enter the 1st complex number:");
    printf("\nenter the real part and imaginary parts:\n");
    scanf("%f%f",&z1.real,&z1.imag);
    printf("the 1st complex number %f+i%f\n",z1.real,z1.imag);

    printf("enter the 1st complex number:");
    printf("\nenter the real part and imaginary parts:\n");
    scanf("%f%f",&z2.real,&z2.imag);
    printf("the 2nd complex number %f+i%f\n",z2.real,z2.imag);

    printf("enter the 1st complex number:");
    printf("\nenter the real part and imaginary parts:\n");
    scanf("%f%f",&z3.real,&z3.imag);
    printf("the 3rd complex number %f+i%f\n",z3.real,z3.imag);

    addition=add(z1,z2);
    substraction=sub(z1,z2);
    multiplication=mult(z1, z2);
    division=div(z1,z2);
    modulus=mod(z1);
    modulus=mod(z2);




    printf("\naddition=%.1f+i%.1fi",addition.real,addition.imag);
    printf("\nsubstraction=%.1f+%.1fi",substraction.real,substraction.imag);
    printf("\n multiplication=%.1f+%.1f",multiplication.real,multiplication.imag);
    printf("\ndivision=%.1f+%.1f",division.real,division.imag);
    printf("\nmodulus of complex 1:%.2f",r);
    printf("\nmodulus of complex 2:%.2f",p);



    return 0;
}
struct complex add(struct complex z1,struct complex z2)
{
    struct complex temp;
    temp.real=z1.real+z2.real;
    temp.imag=z1.imag+z2.imag;
    return (temp);

}
struct complex sub(struct complex z1, struct complex z2)
{

    struct complex subst;
    subst.real=z1.real-z2.real;
    subst.imag=z1.imag-z2.imag;
    return(subst);
}
struct complex mult(struct complex z1, struct complex z2)

{

  struct complex multi;
    multi.real=((z1.real*z2.real)-(z1.imag*z2.imag));
    multi.imag=((z1.real*z2.imag)+(z2.real*z1.imag));
    return(multi);
}
struct complex div(struct complex z1, struct complex z2)
{
   struct  complex div;
    div.real=((z1.real*z2.real)+(z1.imag*z2.imag))/((z2.real*z2.real)+(z2.imag*z2.imag));
    div.imag=((z1.real*z2.imag)-(z2.real*z1.imag))/((z2.real*z2.real)+(z2.imag*z2.imag));
    return(div);
}
 float mod(struct complex z1)
{

   float r;
    r=(sqrt((z1.real*z1.real)+(z1.imag*z1.imag)));

    return r;

}





