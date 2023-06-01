#include<stdio.h>
#include<math.h>
typedef struct complex{
    float real;
    float imag;
}complex;
struct complex complex_add( struct complex z1, struct complex z2);//z=z1+z2
struct complex complex_sub(struct complex z1,struct complex z2);//z=z1-z2
struct complex complex_mul(struct complex z1,struct complex z2);//z=z1*z2
struct complex complex_div_c(struct complex z1,struct complex z2);//z=z1/z2
float mod_c(struct complex z1);//z=|z1|
int main (){
    struct complex z,a,z1,z2,b,c,z3,sum,subtract,multiply,divide;
    c.real=4.39;
    c.imag=0;
    float Z,Z1,Z2;
    printf("Enter real and imaginary parts of z1:");
    scanf("%f %f",&z1.real,&z1.imag);
    printf("\nz1=%f+i%f",z1.real,z1.imag);
    printf("\nEnter real and imaginary parts of z2:");
    scanf("%f %f",&z2.real,&z2.imag);
    printf("\nz2=%f+i%f",z2.real,z2.imag);
    printf("\nEnter real and imaginary parts of z3:");
    scanf("%f %f",&z3.real,&z3.imag);
    printf("\nz3=%f+i%f",z3.real,z3.imag);

    sum=complex_add(z1,z2);
    printf("\nAddition=%f +i%f",sum.real,sum.imag);
    subtract= complex_sub(z1,z2);
    printf("\nsubtraction=%f +i%f",subtract.real,subtract.imag);
    multiply=complex_mul(z1,z2);
    printf("\nmultiplication=%f +i%f",multiply.real,multiply.imag);
    divide=complex_div_c( z1,z2);
    printf("\ndivision=%f +i%f",divide.real,divide.imag);
    Z1= mod_c(z1);
    printf("\nmodulus of complex number1,|z1|=%f",Z1);
    Z2= mod_c(z2);
    printf("\nmodulus of complex number2,|z2|=%f",Z2);
    a=complex_div_c(subtract,sum);
    b=complex_mul(a,z3);
    printf("\nEnter the value of b=%f+i%f",b.real,b.imag);
    z=complex_add(b,c);
    printf("\nValue of z=%f+i%f",z.real,z.imag);
    Z=mod_c(z);
    printf("\nModulus of z=%f",Z);
    return 0;
}
    struct complex complex_add(struct complex z1,struct complex z2){
        complex z;
        z.real=z1.real+z2.real;
        z.imag=z1.imag+z2.imag;
        return z;
    }

   struct complex complex_sub(struct complex z1,struct complex z2){
        complex z;
        z.real=z1.real-z2.real;
        z.imag=z1.imag-z2.imag;
    return z;
    }


    struct complex complex_mul(struct complex z1,struct complex z2){
        complex z;
        z.real=(((z1.real)*(z2.real))-((z1.imag)*(z2.imag)));
        z.imag=(((z1.real)*(z2.imag))+((z1.imag)*(z2.real)));
        return z;
    }


    float mod_c(struct complex z1){
        float z;
        z=sqrt(pow(z1.real,2)+pow(z1.imag,2));
        return z;
    }

   struct complex complex_div_c(struct complex z1,struct complex z2){
        complex z;
        z.real=((((z1.real)*(z2.real))+((z1.imag)*(z2.imag)))/(pow(z2.real,2)+pow(z2.imag,2)));
        z.imag=((((z1.real)*(z2.imag))-((z1.imag)*(z2.real)))/(pow(z2.real,2)+pow(z2.imag,2)));
        return z;
        }

