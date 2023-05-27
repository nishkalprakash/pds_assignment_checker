/* name - neeraj
    section - 2
    roll no. - 22CY10036

*/
#include<stdio.h>
#include<math.h>
    typedef struct Complex{
        float real;
        float imag;
    } complex;
 complex add(complex z1,complex z2){
    complex c ;
    c.real = z1.real + z2.real;
    c.imag = z1.imag + z2.imag;
    return c;
}
    complex sub(complex z1,complex z2){
    complex c ;
    c.real = z1.real - z2.real;
    c.imag = z1.imag - z2.imag;
    return c;
}
    complex mul(complex z1,complex z2){
        complex c;
        c.real = (z1.real)*(z2.real)-(z1.imag)*(z2.imag);
        c.imag = (z1.real)*(z2.imag)+(z1.imag)*(z2.real);
    return c;
    }
    complex div_c(complex z1,complex z2){
        complex c;
        c.real = ((z1.real*z2.real)+(z1.imag*z2.imag))/((z2.real*z2.real)+(z2.imag*z2.imag));
        c.imag = ((z1.real*z2.imag)-(z1.imag*z2.real))/((z2.real*z2.real)+(z2.imag*z2.imag));
    return c;
    }

    float mod(complex z){
                float c = sqrt((z.real)*(z.real)+(z.imag)*(z.imag));
    return c;
    }
int main(){

    complex z1, z2,z3 ;
    printf("enter the first complex number:\n");
    printf("Enter real part:");
    scanf("%f",&z1.real);
    printf("Enter imaginary  part:");
    scanf("%f",&z1.imag);

    printf("enter the second complex number:\n");
    printf("Enter real part:");
    scanf("%f",&z2.real);
    printf("Enter imaginary  part:");
    scanf("%f",&z2.imag);

    printf("enter the third complex number:\n");
    printf("Enter real part:");
    scanf("%f",&z3.real);
    printf("Enter imaginary  part:");
    scanf("%f",&z3.imag);

    printf("complex number 1 : %0.2f + %0.2fi\n", z1.real,z1.imag);
    printf("complex number 2 : %0.2f + %0.2fi\n", z2.real,z2.imag);
   // printf("complex number 3 : %0.2f + %0.2fi\n", z3.real,z3.imag);

    complex a = add(z1,z2);
    printf("addition : %0.2f + %0.2fi\n",a.real,a.imag);
    complex b = sub(z1,z2);
    printf("subtraction : %0.2f + %0.2fi\n",b.real,b.imag);
    complex c = mul(z1,z2);
    printf("multiplication : %0.2f + %0.2fi\n",c.real,c.imag);
    complex d = div_c(z1,z2);
    printf("division : %0.2f + %0.2fi\n",d.real,d.imag);
    float m = mod(z1);
    printf(" mod of z1 : %.2f\n", m);
    float n = mod(z2);
    printf("mod of z2 : %.2f\n",n);


        complex p = add(z1,z2);
        complex q = sub(z1,z2);
        complex r = mul(q,z3);
        complex s = div_c(r,p);

        s.real = s.real + 4.39;
        float modulas = mod(s);
        printf(" z = %.2f + %.2fi\n",s.real, s.imag);
        printf("mod of z : %0.2f", modulas);

return 0;
}
