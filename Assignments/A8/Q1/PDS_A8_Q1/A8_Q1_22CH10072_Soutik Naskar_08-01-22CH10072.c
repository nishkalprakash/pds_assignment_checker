

#include<stdio.h>
#include<math.h>
typedef struct Complex {
float real;
float imag;
} complex;
complex add(complex n1, complex n2);
complex sub(complex n1, complex n2);
complex mul(complex n1, complex n2);
complex divi(complex n1,complex n2);

int main() {
complex n1, n2,n3, result1,result2,result3,result4,result5,result6;
printf("For 1st complex number \n");
printf("Enter the real and imaginary parts: ");
scanf("%f %f", &n1.real, &n1.imag);
printf("\nFor 2nd complex number \n");
printf("Enter the real and imaginary parts: ");
scanf("%f %f", &n2.real, &n2.imag);
printf("enter the 3rd complex number :");
printf("enter the real and imaginary part");
scanf("%f %f",&n3.real,&n3.imag);
result1= add(n1, n2);
result2= sub(n1, n2);
result3= mul(n1, n2);
result4=divi(n1,n2);
result5=divi(result2,result1);
result6=mul(result5,n3);
printf("\ncomplex number 1:%f+%fi\n",n1.real,n1.imag);
printf("\ncomplex number 2:%f+%fi\n",n2.real,n2.imag);
printf("\nSum = %.2f + %.2fi\n", result1.real, result1.imag);
printf("\nsub = %.2f + %.2fi\n", result2.real, result2.imag);
printf("\nmul = %.2f + %.2fi\n", result3.real, result3.imag);
printf("\ndivi= %.2f - %.2fi\n", result4.real, result4.imag);
printf("\nz= %.2f - %.2fi\n", result6.real, result6.imag);
return 0;
}
complex add(complex n1, complex n2) {
complex temp;
temp.real = n1.real + n2.real;
temp.imag = n1.imag + n2.imag;
return temp;
}
complex sub(complex n1, complex n2) {
complex temp;
temp.real = n1.real - n2.real;
temp.imag = n1.imag - n2.imag;
return (temp);
}
complex mul(complex n1, complex n2) {
complex temp;
temp.real = ((n1.real * n2.real)-(n1.imag*n2.imag));
temp.imag = ((n1.real*n2.imag)+(n1.imag*n2.real));
return (temp);
}

complex divi(complex n1, complex n2) {
complex temp;
temp.real = ((n1.real*n2.real)+(n1.imag*n2.imag))/(pow(n2.real,2)+pow(n2.imag,2));
temp.imag = ((n1.real*n2.imag)-(n2.real*n1.imag))/(pow(n2.real,2)+pow(n2.imag,2));
return (temp);
}
