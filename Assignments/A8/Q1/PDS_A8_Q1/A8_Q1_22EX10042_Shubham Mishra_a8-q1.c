
#include<stdio.h>
#include<math.h>
typedef struct complex{
   float real;
   float imag;
}complex;
complex add(complex z1,complex z2)
{
    complex z3;
    z3.real=z1.real+z2.real;
    z3.imag=z1.imag+z2.imag;
    return z3;

}
complex sub(complex z1,complex z2)
{
    complex z3;
    z3.real=z1.real-z2.real;
    z3.imag=z1.imag-z2.imag;
    return z3;

}
complex mul(complex z1,complex z2)
{
    complex z3;
    z3.real=(z1.real*z2.real-z1.imag*z2.imag);
    z3.imag=(z1.real*z2.imag+z2.real*z1.imag);
    return z3;

}
complex divi(complex z1,complex z2)
{
    complex z3;
    z3.real=(z1.real*z2.real+z1.imag*z2.imag)/(pow(z2.real,2)+pow(z2.imag,2));
    z3.imag=((z1.real*z2.imag-z2.real*z1.imag)/((pow(z2.real,2))+(pow(z2.imag,2))))*(-1);
    return z3;

}
float mod(complex z1)
{
    float mod;
   mod =(sqrt((pow(z1.real,2))+(pow(z1.imag,2))));
   return mod;
}
int main(){
complex z1,z2,z3;
printf("enter the first complex no.\n");
printf("enter the real part\n");
scanf("%f",&z1.real);
printf("enter the imag part\n");
scanf("%f",&z1.imag);
printf("enter the second complex no.\n");
printf("enter the real part\n");
scanf("%f",&z2.real);
printf("enter the imag part\n");
scanf("%f",&z2.imag);
printf("enter the third complex no.\n");
printf("enter the real part\n");
scanf("%f",&z3.real);
printf("enter the imag part\n");
scanf("%f",&z3.imag);
printf("z1= %f+i%f",z1.real,z1.imag);
printf("z2= %f+i%f",z2.real,z2.imag);
complex a = add(z1,z2);
printf("the addition of two complex no is %f + i%f\n",a.real,a.imag);
complex s = sub(z1,z2);
printf("the addition of two complex no is %f + i%f\n",s.real,s.imag);
complex m = mul(z1,z2);
printf("the addition of two complex no is %f + i%f\n",m.real,m.imag);
complex d = divi(z1,z2);
printf("the addition of two complex no is %f + i%f\n",d.real,d.imag);
float moda= mod(z1);
printf("the mod of complex no 1 is %f\n",moda);
float modb= mod(z2);
printf("the mod of complex no 2 is %f\n",modb);
complex z;
z=mul(divi(s,a),z3);
z.real=z.real+4.39;
printf("z= %f+i%f",z.real,z.imag);

float modz= mod(z);
printf("modulus of z is %f",modz);



}
