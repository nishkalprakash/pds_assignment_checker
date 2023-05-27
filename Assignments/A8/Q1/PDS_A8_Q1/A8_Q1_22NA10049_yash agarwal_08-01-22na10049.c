/*
yash agarwal
22na10049
sec 2
*/
#include <stdio.h>
#include <math.h>
typedef struct complex
    {
        float real;
        float imag;
    }complex;

complex add(complex z1,complex z2)  //adding
{
    complex d;
  d.real=z1.real+z2.real;
  d.imag=z1.imag+z2.imag;
  return (d);

}

complex sub(complex z1,complex z2)  //subtarcting
{
    complex d;
   d.real=z1.real-z2.real;
  d.imag=z1.imag-z2.imag;
  return (d);

}

complex mul(complex z1,complex z2)  //multiplication
{
    complex d;
    d.real=z1.real*z2.real-z1.imag*z2.imag;
    d.imag=z1.real*z2.imag+z2.real*z1.imag;
    return (d);

}

float mod(complex z1)  //modulus
{
    complex d;
    d.real=pow(z1.real*z1.real + z1.imag*z1.imag,0.5);
    return (d.real);
}

complex div(complex z1,complex z2)   //division
{
    complex d;
    d.real=(z1.real*z2.real+z1.imag*z2.imag)/(mod(z2)*mod(z2));
    d.imag=(z1.real*z2.imag-z2.real*z1.imag)/(mod(z2)*mod(z2));

    return (d);

}




int main()
{
    complex a,b,c,result;

    float modu;
    printf("Enter the first complex number \n");
    printf("Enter the real part:");
    scanf("%f",&a.real);
    printf("Enter the imaginary part");
    scanf("%f",&a.imag);

    printf("Enter the second complex number\n");
    printf("Enter the real part");
    scanf("%f",&b.real);
    printf("Enter the imaginary part");
    scanf("%f",&b.imag);

    printf("Enter the third complex number\n");
    printf("Enter the real part");
    scanf("%f",&c.real);
    printf("Enter the imaginary part");
    scanf("%f",&c.imag);



    printf("\n Addition: ");   // printing the values
    result=add(a,b);
    printf("%.2f + %.2f i",result.real,result.imag);

    printf("\n Subtraction: ");
    result=sub(a,b);
    printf("%.2f + %.2f i",result.real,result.imag);

    printf("\n Multiplication: ");
    result=mul(a,b);
    printf("%.2f + %.2f i",result.real,result.imag);

    printf("\n Division: ");
    result=div(a,b);
    printf("%.2f + %.2f i",result.real,result.imag);

    printf("\n Mod of complex number 1: ");
    modu=mod(a);
    printf("%.2fi",modu);

    printf("\n Mod of complex number 2: ");
    modu=mod(b);
    printf("%.2fi",modu);

    printf("\n the reqired value of z: ");    // the extra mudulus
    result= mul(div(sub(a,b),add(a,b)),c) ;
    result.real=result.real+4.39;
    printf("%.2f + %.2f i",result.real,result.imag);

    printf("\n Mod of complex number z: ");
    modu=mod(result);
    printf("%.2fi",modu);


}
