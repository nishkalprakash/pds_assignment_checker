#include <stdio.h>
#include <math.h>
typedef struct Complex{
float real;
float img;
} complex;

complex add(complex a, complex b){
   complex tmp;
   tmp.real=a.real+ b.real;
   tmp.img=a.img+b.img;
    return tmp;
}
complex sub(complex a, complex b){
    complex tmp;
    tmp.real= a.real-b.real;
    tmp.img= a.img-b.img;
    return tmp;

}
complex mul(complex a, complex b){
    complex tmp;
    tmp.real= (a.real*b.real)-(a.img*b.img);
    tmp.img= (a.real*b.img) + (b.real*a.img);
    return tmp;
}
complex divc(complex a, complex b){
    complex tmp;
    //complex sum;
    tmp.real=((a.real*b.real)+(a.img*b.img))/(((b.real*b.real)+(b.img*b.img)));
    tmp.img=((a.real*b.img)-(b.real*a.img))/(((b.real*b.real)+(b.img*b.img)));
    //sum.real=tmp.real;
    //sum.img=tmp.img;
    return tmp;

}
float modc(complex a){
    float zc;
    zc=sqrt((a.real*a.real)+(a.img*a.img) );
    return zc;


}


int main(){
complex z1,z2,z3,zsum,zsubtract,zmul,zdivc,z;

printf("Enter the first complex number:\n");
printf("Enter the real part:");
scanf("%f",&z1.real);
printf("Enter the imaginary part:");
scanf("%f",&z1.img);
printf("Enter the second complex number:\n");
printf("Enter the real part:");
scanf("%f",&z2.real);
printf("Enter the imaginary part:");
scanf("%f",&z2.img);
printf("Enter the third complex number:\n");
printf("Enter the real part:");
scanf("%f",&z3.real);
printf("Enter the imaginary part:");
scanf("%f",&z3.img);
zsum=add(z1,z2);
zsubtract=sub(z1,z2);
zmul= mul(z1,z2);
zdivc= divc(z1,z2);
z = mul(divc((sub(z1,z2)),(add(z1,z2))),z3);
z.real=z.real+4.39;



printf("Complex number 1: %f + %fi \n",z1.real,z1.img);
printf("Complex number 2: %f + %fi \n",z2.real,z2.img);
printf("Addition: %f + %fi\n",zsum.real,zsum.img);
printf("Subtraction: %f + %fi\n",zsubtract.real,zsubtract.img);
printf("Multiplication: %f + %fi\n",zmul.real,zmul.img);
printf("Division: %f + %fi\n",zdivc.real,zdivc.img);
printf("Modulus of complex number 1: %f\n",modc(z1));
printf("Modulus of complex number 2: %f\n",modc(z2));
printf("Value of z: %f + %fi\n",z.real,z.img);
printf("Modulus of z: %f",modc(z));











return 0;
}

