#include<stdio.h>
#include<math.h>
typedef struct complex{
    float real;
    float imag;

} complex ;
complex add(complex z1,complex z2);
complex sub(complex z1,complex z2);
complex mul(complex z1,complex z2);
complex div(complex z1,complex z2);

int main(){
    complex z1,z2,z3,result,res1,res2,res3;
printf("Enter the first complex number:\n");
printf("Enter the real part:");
scanf("%f",&z1.real);
printf("Enter the imaginary part:");
scanf("%f",&z1.imag);
printf("Enter the second complex number:\n");
printf("Enter the real part:");
scanf("%f",&z2.real);
printf("Enter the imaginary part:");
scanf("%f",&z2.imag);
printf("Enter the real part:");
scanf("%f",&z3.real);
printf("Enter the imaginary part:");
scanf("%f",&z3.imag);


result=add(z1,z2);
res1=sub(z1,z2);
res2=mul(z1,z2);
res3=div(z1,z2);

printf("Complex 1:%.2f + %.2fi\n",z1.real,z1.imag);
printf("Complex 2:%.2f + %.2fi\n",z2.real,z2.imag);
printf("Addition = %.2f + %.2fi\n", result.real, result.imag);
printf("Subtraction = %.2f + %.2fi\n", res1.real, res1.imag);
printf("Multiplication = %.2f + %.2fi\n", res2.real, res2.imag);
printf("Division= %.2f + %.2fi\n", res3.real, res3.imag);

return 0;
}


complex add(complex z1,complex z2){
    complex temp;
temp.real = z1.real + z2.real;
temp.imag = z1.imag + z2.imag;
return (temp);


}
 complex sub(complex z1,complex z2){
complex temp;
temp.real = z1.real - z2.real;
temp.imag = z1.imag -z2.imag;
return (temp);
}


 complex mul(complex z1,complex z2){
    complex temp;
temp.real = ((z1.real) * (z2.real)-(z1.imag*z2.imag));
temp.imag = ((z1.real*z2.imag)+(z2.real*z1.imag));
return (temp);
}
 complex div(complex z1,complex z2){
    complex temp;
temp.real = ((z1.real)*(z2.real)+(z1.imag*z2.imag))/((z2.real*z2.real)+(z2.imag*z2.imag));
temp.imag = ((z1.real)*(z2.imag)-(z2.real*z1.imag))/((z2.real*z2.real)+(z2.imag*z2.imag));
return (temp);
}


