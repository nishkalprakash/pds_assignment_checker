//Section 2
//RollNo:22ME30031
//Name:Jigyanshu Pati
// LAB 7
//description:Q1
#include<stdio.h>
#include<math.h>
    typedef struct Complex
    {
        float real;
        float imag;
    } complex;
    complex add(complex z1,complex z2)
    {
        complex addt;
        addt.real = z1.real + z2.real;
        addt.imag = z1.imag + z2.imag;
        return (addt);
    }
     complex sub(complex z1,complex z2)
    {
        complex subt;
        subt.real = z1.real - z2.real;
        subt.imag = z1.imag - z2.imag;
        return (subt);
    }
     complex mult(complex z1,complex z2)
    {
        complex multt;
        multt.real = (z1.real*z2.real)-(z1.imag*z2.imag);
        multt.imag = (z1.real*z2.imag)+(z1.imag*z2.real);
        return (multt);
    }
    float modulus(complex z1)
    {
        float m;
        m=sqrt(z1.real*z1.real+z1.imag*z1.imag);
        return m;
    }


    complex divh(complex z1,complex z2)
    {
        complex divht;
        divht.real = ((z1.real*z2.real)+(z1.imag*z2.imag))/pow(modulus(z2),2);
        divht.imag = ((z1.real*z2.imag)-(z1.imag*z2.real))/pow(modulus(z2),2);
        return (divht);
    }





int main()
{
    complex a,b,c,addition,subtraction,multiplication,division,d,t;
    t.real=4.39;
    t.imag=0;
    printf("Enter the first complex number:\n");
    printf("Enter the real part:");
    scanf("%f",&a.real);
    printf("Enter the complex part:");
    scanf("%f",&a.imag);
    printf("Enter the second complex number:\n");
    printf("Enter the real part:");
    scanf("%f",&b.real);
    printf("Enter the complex part:");
    scanf("%f",&b.imag);
     printf("Enter the second complex number:\n");
    printf("Enter the real part:");
    scanf("%f",&c.real);
    printf("Enter the complex part:");
    scanf("%f",&c.imag);
    printf("Complex number 1:%.2f + %.2f i\n",a.real,a.imag);
    printf("Complex number 2:%.2f + %.2f i\n",b.real,b.imag);
    addition=add(a,b);
    subtraction=sub(a,b);
    multiplication=mult(a,b);
    division=divh(a,b);

    printf("Addition :%.2f+%.2fi\n",addition.real,addition.imag);
    printf("subtraction :%.2f+%.2fi\n",subtraction.real,subtraction.imag);
    printf("multiplication :%.2f+%.2fi\n",multiplication.real,multiplication.imag);
    printf("division :%.2f-%.2fi\n",division.real,division.imag);
    d=add((mult((divh(sub(a,b),add(a,b))),c)),t);
    printf("Modulus of complex number 1:%f\n",modulus(a));
    printf("Modulus of complex number2:%f\n ",modulus(b));
    printf("Z is  :%.2f+%.2f\n",d.real,d.imag);
    printf("Modulus of Z:%f\n",modulus(d));
}

