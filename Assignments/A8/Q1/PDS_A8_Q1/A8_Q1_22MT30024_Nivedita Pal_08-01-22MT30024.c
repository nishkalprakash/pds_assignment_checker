#include<stdio.h>
#include<stdlib.h>
#include<math.h>


// defining structures
 typedef struct complex{
     float real;
     float imag;
 }complex;

   //addition of complex numbers
 complex add(complex z1, complex z2){

    complex temp;
    temp.real=z1.real+z2.real;
    temp.imag=z1.imag+z2.imag;
    return (temp);
    }

    //subtraction of complex numbers

    complex sub(complex z1,complex z2){

    complex temp;
    temp.real=z1.real-z2.real;
    temp.imag=z1.imag-z2.imag;
    return(temp);
    }

    //multiplication of complex numbers

    complex mul(complex z1,complex z2){

      complex temp;
      temp.real=((z1.real)*(z2.real))-((z1.imag)*(z2.imag));
      temp.imag=((z1.real)*(z2.imag))-((z2.real)*(z1.imag));
      return(temp);

    }

    //division of complex numbers

    complex divc(complex z1,complex z2){

    complex temp;
    temp.real=(((z1.real)*(z2.real))+((z1.imag)*(z2.imag)))/(((z2.real)*(z2.real))+((z2.imag)*(z2.imag)));
    temp.imag=(((z1.real)*(z2.imag))-((z2.real)*(z1.imag)))/(((z2.real)*(z2.real))+((z2.imag)*(z2.imag)));
    return(temp);
    }

 float modc(complex z1){
     float modulus;
     modulus = sqrt((z1.real)*(z1.real)+(z1.imag)*(z1.imag));
     return(modulus);
 }

int main(){

    complex z1,z2,z3,resultAdd,resultSub,resultMul,resultDiv,z;
    float resultMod;

    //defining first complex number
    printf("Enter the first complex number:");
    printf("Enter the real part:");
    scanf("%f",&z1.real);
    printf("Enter the imaginary part:");
    scanf("%f",&z1.imag);
    printf("Complex number 1: %f + %fi\n",z1.real,z1.imag);

    //defining second complex number
    printf("Enter the second complex number: ");
    printf("Enter the real part:");
    scanf("%f",&z2.real);
    printf("Enter the imaginary part");
    scanf("%f",&z2.imag);
    printf("Complex number 2: %f + %f i\n",z2.real,z2.imag);

    //value of z3
    printf("Enter the real part:");
    scanf("%f",&z3.real);
    printf("Enter the imaginary part:");
    scanf("%f",&z3.imag);

    resultAdd=add(z1,z2);
    printf("sum= %f + %fi",resultAdd.real,resultAdd.imag);

    resultSub=sub(z1,z2);
    printf("sub=%f + %fi",resultSub.real,resultSub.imag);

    resultMul=mul(z1,z2);
    printf("mul=%f +%fi",resultMul.real,resultMul.imag);

    resultDiv=divc(z1,z2);
    printf("div=%f - %fi",resultDiv.real,resultDiv.imag);

    resultMod=modc(z1);
    printf("Modulus of Complex number 1: %f\n",modc(z1));

    resultMod=modc(z2);
    printf("Modulus of Complex number 2: %f\n",modc(z2));



    return 0;




    }








