// Name : Krishna Chaudhari
// Roll.: 22MT10012
//Assingment 8, Q-1


#include<stdio.h>
#include<math.h>

typedef struct complex{
    float real;
    float img;
} complex;
complex add(complex a,complex b);
complex sub(complex a,complex b);
complex divc(complex a,complex b);
complex mul(complex a,complex b);
float modulas(complex a);


int main()
{
    struct complex z1,z2,z3,Za,Zs,Zd,Zm,Zn,Znd,Znm;
    float Z;
    printf("Enter the 1st complex number:\n");
    printf("Enter the Real part : ");
    scanf("%f",&z1.real);
    printf("\n Enter the imaginary part : ");
    scanf("%f",&z1.img);


    printf("Enter the 2nd complex number:\n");
    printf("Enter the Real part : ");
    scanf("%f",&z2.real);
    printf("\n Enter the imaginary part : ");
    scanf("%f",&z2.img);

    printf("Enter the 3rd complex number:\n");
    printf("Enter the Real part : ");
    scanf("%f",&z3.real);
    printf("\n Enter the imaginary part : ");
    scanf("%f",&z3.img);

    printf("\nComplex Number 1: %.2f + %.2fi",z1.real,z1.img);

    printf("\nComplex Number 2: %.2f + %.2fi",z2.real,z2.img);

    Za=add(z1,z2);
    printf("\n Addition is : %.2f + %.2fi",Za.real,Za.img);

    Zs=sub(z1,z2);
    printf("\n Subtraction is : %.2f + %.2fi",Zs.real,Zs.img);

    Zm=mul(z1,z2);
    printf("\nMultiplication is : %.2f + %.2fi",Zm.real,Zm.img);

    Zd=divc(z1,z2);
    printf("\n Division is : %.2f + %.2fi",Zd.real,Zd.img);

    Z=modulas(z1);
    printf("\nModulus of complex number 1 : %.2f",Z);

    Z=modulas(z2);
    printf("\nModulus of complex number 2 : %.2f",Z);

    Znd=divc(Zs,Za);
    Znm=mul(Znd,z3);
    Znm.real+=4.39;
    Zn=Znm;
    printf("\n Value of z : %.2f + %.2fi",Zn.real,Zn.img);
    printf("\n Modulus of z is : %.2f",modulas(Zn));

    return 0;
}

complex add(complex a,complex b){
    complex z;
    z.real=a.real+b.real;
    z.img=a.img+b.img;
    return z;
}
complex sub(complex a,complex b){
    complex z;
    z.real=a.real-b.real;
    z.img=a.img-b.img;
    return z;
}
complex divc(complex a,complex b){
    complex z;
    float numr,numi,den;
    den=(b.real*b.real)+(b.img*b.img);
    numr=((a.real*b.real)+a.img*b.img);
    numi=-((a.real*b.img)-(a.img*b.real));
    z.real=numr/den;
    z.img=numi/den;
    return z;
}
complex mul(complex a,complex b){
    complex z;
    z.real=((a.real*b.real)-(a.img*b.img));
    z.img=((a.real*b.img)+(a.img*b.real));
    return z;
}
float modulas(complex a){
    float z;
    z=sqrt((a.real*a.real)+(a.img*a.img));
    return z;
}

