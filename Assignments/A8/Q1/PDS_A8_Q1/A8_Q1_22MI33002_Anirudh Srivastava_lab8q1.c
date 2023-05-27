#include<stdio.h>
#include<math.h>

typedef struct Complex {
    float real;
    float imag;
} ;

void add_c(struct Complex c1, struct Complex c2) {
    float realadd, imgadd;
    realadd= c1.real + c2.real;
    imgadd= c1.imag + c2.imag;
    printf("\nAddition=%f + i%f\n", realadd,imgadd);

}
void sub_c(struct Complex c1, struct Complex c2) {
    float realsub, imgsub;
    realsub= c1.real - c2.real;
    imgsub= c1.imag - c2.imag;
    printf("\nSubtraction=%f + i%f\n", realsub,imgsub);

}
void mul_c(struct Complex c1, struct Complex c2) {
    float realmul, imgmul;
    realmul= (c1.real*c2.real) - (c1.imag*c2.imag);
    imgmul= (c1.real*c2.imag + c1.imag*c2.real);
    printf("\nMultiplication=%f + i%f\n", realmul,imgmul);

}
void div_c(struct Complex c1, struct Complex c2) {
    float realdiv, imgdiv;
    realdiv= (c1.real*c2.real + c1.imag*c2.imag)/((c2.real*c2.real) + (c2.imag*c2.imag));
    imgdiv= ( c1.imag*c2.real -c1.real*c2.imag )/((c2.real*c2.real) + (c2.imag*c2.imag));
    printf("\nDivision= %f + i%f\n", realdiv,imgdiv);

}
float mod_c( struct Complex c1 ) {
float realmod, imagmod,modulus,expmod;
realmod= c1.real*c1.real;
imagmod= c1.imag*c1.imag;
expmod= realmod + imagmod;
modulus= (float)pow(expmod,0.5);
return modulus;

}



void main()
{   struct Complex c1,c2,c3;
    float realadd, imgadd,z,y;
    printf("enter the 1st complex number\n");
    printf("enter the real part\n");
    scanf("%f", &c1.real);
    printf("enter the imaginary part\n");
    scanf("%f", &c1.imag);
     printf("enter the 2nd complex number\n");
    printf("enter the real part\n");
    scanf("%f", &c2.real);
    printf("enter the imaginary part\n");
    scanf("%f", &c2.imag);
     printf("enter the 3rd complex number\n");
    printf("enter the real part\n");
    scanf("%f", &c3.real);
    printf("enter the imaginary part\n");
    scanf("%f", &c3.imag);
    printf("Complex number 1: %f + i%f\n", c1.real , c1.imag);
      printf("Complex number 2: %f + i%f\n", c2.real ,  c2.imag);
      add_c(c1,c2);
      sub_c(c1,c2);
      mul_c(c1,c2);
      div_c(c1,c2);
     z= mod_c(c1);
      printf("Modulus of complex number 1:%f",z);
       y= mod_c(c2);
      printf("Modulus of complex number 2:%f",y);
}













