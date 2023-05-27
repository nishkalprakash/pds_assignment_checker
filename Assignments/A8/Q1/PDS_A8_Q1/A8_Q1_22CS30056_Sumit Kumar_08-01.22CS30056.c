#include<stdio.h>
#include<math.h>
/*Nmae -Sumit Kumar
Section-2
Roll no-22CS30056
DESCRIPTION-COMPLEX NUMBERS*/
typedef struct complex{
    float real;
    float imag;
}complex;

complex add(complex z1,complex z2){
    complex r;
    r.real=z1.real+z2.real;
    r.imag=z1.imag+z2.imag;
    return r;
}
complex sub(complex z1,complex z2){
    complex r;
    r.real=z1.real-z2.real;
    r.imag=z1.imag-z2.imag;
    return r;
}
complex mul(complex z1,complex z2){
    complex r;
    r.real=(z1.real*z2.real)-(z1.imag*z2.imag);
    r.imag=(z1.real*z2.imag)+(z2.real*z1.imag);
    return r;
}
complex div_c(complex z1,complex z2){
    complex r;
    r.real=((z1.real*z2.real)+(z1.imag*z2.imag))/(pow(z2.real,2)+pow(z2.imag,2));
    r.imag=(-(z1.real*z2.imag)+(z2.real*z1.imag))/(pow(z2.real,2)+pow(z2.imag,2));
    return r;
}
float mod(complex z2){
     float r=sqrt(pow(z2.real,2)+pow(z2.imag,2));
     return r;
}
complex func(complex z1,complex z2,complex z3,complex z4){
        complex r,m,y;
        float f=((z1.real+z2.real)*(z1.real+z2.real))+((z1.imag+z2.imag)*(z1.imag+z2.imag));
         r.real=(((z1.real-z2.real)*(z1.real+z2.real))+((z1.imag-z2.imag)*(z1.imag+z2.imag)))/(f);
         r.imag=(((z1.real+z2.real)*(z1.imag-z2.imag))-((z1.real-z2.real)*(z1.imag+z2.imag)))/(f);
         m.real=(r.real*z3.real)-(r.imag*z3.imag);
         m.imag=(r.imag*z3.real)+(r.real*z3.imag);
         y.real=m.real+z4.real;
         y.imag=m.imag+z4.imag;
         return y;

 }
int main(){
    complex c1,c2,c3,c4,y;
    c4.real=4.39;
    c4.imag=0;
    printf("Enter the first complex number:");
    printf("\nEnter the real part:");
    scanf("%f",&c1.real);
    printf("\nEnter the imaginary part:");
    scanf("%f",&c1.imag);

    printf("\nEnter the second complex number:");
    printf("\nEnter the real part:");
    scanf("%f",&c2.real);
    printf("\nEnter the imaginary part:");
    scanf("%f",&c2.imag);

    //printf("\nEnter the third complex number:");
    printf("\nEnter the real part:");
    scanf("%f",&c3.real);
    printf("\nEnter the imaginary part:");
    scanf("%f",&c3.imag);

    printf("\nComplex number 1:%.2f+i%.2f",c1.real,c1.imag);
    printf("\nComplex number 2:%.2f+i%.2f",c2.real,c2.imag);
    //printf("\nComplex number 3:%.2f+i%.2f",c3.real,c3.imag);

    complex r=add(c1,c2);
    printf("\n Addition:%.2f+i%.2f",r.real,r.imag);
    r=sub(c1,c2);
    printf("\n Subtraction:%.2f+i%.2f",r.real,r.imag);
    r=mul(c1,c2);
    printf("\n Multiplication:%.2f+i%.2f",r.real,r.imag);
    r=div_c(c1,c2);
    printf("\n Division:%.2f+i%.2f",r.real,r.imag);
    float a=mod(c1);
    printf("\nModulus of complex number z1:%.2f",a);
    float b=mod(c2);
    printf("\nModulus of complex number z2:%.2f",b);
    y=func(c1,c2,c3,c4);
    printf("\n value is:%.2f+i%.2f",y.real,y.imag);
    float c=mod(y);
    printf("\nModulus of complex number:%.2f",c);

}
