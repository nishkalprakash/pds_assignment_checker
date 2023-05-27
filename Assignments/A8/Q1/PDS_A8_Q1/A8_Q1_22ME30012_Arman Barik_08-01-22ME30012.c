# include <stdio.h>
# include <math.h>

typedef struct complex
{
    float real;
    float imag;
} com;

float POW(float x,float n)
{
    float P=1;
    for(int i=1;i<=n;i++)
    {
        P*=x;
    }
    return P;
}

 float mod_c( com Z1)
 {
     float modulas=sqrt((pow(Z1.real,2)+pow(Z1.imag,2)));
     return modulas;
 }

 com add(com Z1,com Z2)
 {
     com result;
     result.real=Z1.real+Z2.real;
     result.imag=Z1.imag+Z2.imag;
     return result;
 }

  com sub(com Z1,com Z2)
 {
     com result;
     result.real=Z1.real-Z2.real;
     result.imag=Z1.imag-Z2.imag;
     return result;
 }

  com mul(com Z1,com Z2)
 {
     com result;
     result.real=Z1.real*Z2.real-Z1.imag*Z2.imag;
     result.imag=Z1.real*Z2.imag+Z2.real*Z1.imag;
     return result;
 }

 com div_c(com Z1,com Z2)
 {
     com result;
     result.real=(Z1.real*Z2.real+Z1.imag*Z2.imag)/pow(mod_c(Z2),2);
     result.imag=(Z1.real*Z2.imag-Z1.imag*Z2.real)/pow(mod_c(Z2),2);
     return result;
 }



int main()
{
    com Z1,Z2,Z3;
    printf("Enter the first complex number:\n");
    printf("Enter the real part: ");
    scanf("%f",&Z1.real);
    printf("Enter the imaginary part: ");
    scanf("%f",&Z1.imag);

    printf("Enter the second complex number:\n");
    printf("Enter the real part: ");
    scanf("%f",&Z2.real);
    printf("Enter the imaginary part: ");
    scanf("%f",&Z2.imag);

    printf("Enter the third complex number:\n ");
    printf("Enter the real part: ");
    scanf("%f",&Z3.real);
    printf("Enter the imaginary part: ");
    scanf("%f",&Z3.imag);

    printf("Complex number 1: %.2f + %.2fi\n", Z1.real,Z1.imag);
    printf("Complex number 2: %.2f + %.2fi\n", Z2.real,Z2.imag);
    printf("Complex number 3: %.2f + %.2fi\n", Z3.real,Z3.imag);

    com addition=add(Z1,Z2);
    printf("Addition: %.2f + %.2fi\n",addition.real,addition.imag);

    com substraction=sub(Z1,Z2);
    printf("Substraction: %.2f + %.2fi\n",substraction.real,substraction.imag);

    com multiplication=mul(Z1,Z2);
    printf("Multiplication: %.2f + %.2fi\n",multiplication.real,multiplication.imag);

    com division=div_c(Z1,Z2);
    printf("Division: %.2f + %.2fi\n",division.real,division.imag);


    printf("Modulas of complex number 1: %.2f\n", mod_c(Z1));
    printf("Modulas of complex number 2: %.2f\n", mod_c(Z2));

    com Z,z,z1;
    z1.real=4.39;
    z1.imag=0.00;
    z=div_c(sub(Z1,Z2),add(Z1,Z2));
    Z=add(mul(z,Z3),z1);
    printf("Value of Z: %.2f + %.2fi\n", Z.real,Z.imag);
    printf("Modulas of Z: %.2f\n", mod_c(Z));








  return 0;
}
