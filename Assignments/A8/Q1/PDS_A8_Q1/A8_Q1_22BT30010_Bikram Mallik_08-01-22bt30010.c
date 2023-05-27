#include<stdio.h>
#include<math.h>
typedef struct complex{
float real;
float imag;
} complex;
complex add(complex z1,complex z2);
complex sub(complex z1,complex z2);
complex mul(complex z1,complex z2);
complex div(complex z1,complex z2);

int main()
{
    complex n1,n2,n3,n4,z1,z2,z3,result1,result2,result3,result4;
    double z,modulus1,modulus2,modulus3,modulus4;
    printf("enter the first complex no:\n");
    printf("enter the real part:");
    scanf("%f",&n1.real);
    printf("enter the imaginary part:");
    scanf("%f",&n2.imag);

    printf("enter the second complex no:\n");
    printf("enter the real part:");
    scanf("%f",&n3.real);
    printf("enter the imaginary part:");
    scanf("%f",&n4.imag);

     printf("enter the real part of z3:");
    scanf("%f",&z3.real);
    printf("enter the imaginary part of z3:");
    scanf("%f",&z3.imag);

    z1.real=n1.real+n2.real;
    z1.imag=n1.imag+n2.imag;

    z2.real=n3.real+n4.real;
    z2.imag=n3.imag+n4.imag;




    printf("complex no 1: %.1f + %.1fi\n",z1.real,z1.imag);
    printf("complex no 2: %.1f + %.1fi\n",z2.real,z2.imag);
    result1= add(z1,z2);
    result2= sub(z1,z2);
    result3=mul(z1,z2);
    result4=div(z1,z2);

    modulus1=sqrt(pow(z1.real,2)+pow(z1.imag,2));
    modulus2=sqrt(pow(z2.real,2)+pow(z2.imag,2));
    modulus3=sqrt(pow(z3.real,2)+pow(z3.imag,2));
    z=((modulus1-modulus2)*modulus3/(modulus1+modulus2))+4.39;
//    modulus4=sqrt(pow(z.real,2)+pow(z.imag,2));
    printf("addition: %.1f+%.1fi\n",result1.real,result1.imag);
    printf("substaction: %.1f+%.1fi\n",result2.real,result2.imag);
    printf("multiplication: %.1f+%.1fi\n",result3.real,result3.imag);
    printf("division: %.1f+%.1fi\n",result4.real,result4.imag);
    printf("modulus of complex no 1: %.1f\n",modulus1);
     printf("modulus of complex no 2: %.1f\n",modulus2);
     printf("value of z: %.1f\n",z);
     printf("modulus of z: %.1f",modulus4);
    return 0;
}
complex add(complex z1,complex z2){
complex temp;
temp.real=z1.real+z2.real;
temp.imag=z1.imag+z2.imag;
return(temp);
}
complex sub(complex z1,complex z2){
complex temp;
temp.real=z1.real-z2.real;
temp.imag=z1.imag-z2.imag;
return(temp);}

complex mul(complex z1,complex z2){
complex temp;
temp.real=(z1.real*z2.real)-(z1.imag*z2.imag);
temp.imag=(z1.real*z2.imag)+(z2.real*z1.imag);
return(temp);}

complex div(complex z1,complex z2){
complex temp;
temp.real=(z1.real*z2.real)+(z1.imag*z2.imag)/sqrt(pow(z2.real,2)+pow(z2.imag,2));
temp.imag=(z1.real*z2.imag)-(z2.real*z1.imag)/sqrt(pow(z2.real,2)+pow(z2.imag,2));
return(temp);}

