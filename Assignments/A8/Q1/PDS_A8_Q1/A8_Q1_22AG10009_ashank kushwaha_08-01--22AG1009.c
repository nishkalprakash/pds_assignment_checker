//ashank kumar kushwaha
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
    r.imag=(z1.real*z2.imag)+(z1.imag*z2.real);
    return r;
}
complex conjucate(complex z1){
    z1.imag=-1*z1.imag;
    return z1;
}
float _mod(complex z1){
    return sqrt((pow(z1.real,2))+(pow(z1.imag,2)));
}
complex _div(complex z1,complex z2){
    complex r;
    r=mul(z1,conjucate(z2));
    r.real=r.real/((float)(pow(_mod(z2),2)));
    r.imag=r.imag/((float)(pow(_mod(z2),2)));
    return r;
}

int main(){
    int i;
    complex z[3],r;
    for (i=0;i<3;i++){
    printf("Enter the complex number %d\n",i+1);
    printf("Enter the real part");
    scanf("%f",&(z[i].real));
    printf("Enter the imaginary part");
    scanf("%f",&(z[i].imag));
    }
    printf("complex number 1: %.2f + %.2f i\n",z[0].real,z[0].imag);
    printf("complex number 1: %.2f + %.2f i\n",z[1].real,z[1].imag);
    printf("Addition: %.2f + %.2f i\n",add(z[0],z[1]).real,add(z[0],z[1]).imag);
    printf("Subtraction: %.2f + %.2f i\n",sub(z[0],z[1]).real,sub(z[0],z[1]).imag);
    printf("Multiplication: %.2f + %.2f i\n",mul(z[0],z[1]).real,mul(z[0],z[1]).imag);
    printf("Division: %.2f + %.2f i\n",_div(z[0],z[1]).real,_div(z[0],z[1]).imag);
    printf("Modulus of complex number 1: %.2f \n",_mod(z[0]));
    printf("Modulus of complex number 2: %.2f \n",_mod(z[1]));

    r=mul(_div(sub(z[0],z[1]),add(z[0],z[1])),z[2]);
    r.real=r.real+4.39;
    printf("Value of z: %.2f + %.2f i\n",r.real,r.imag);
    printf("Modulus of z: %.2f \n",_mod(r));
    return 0;
}
