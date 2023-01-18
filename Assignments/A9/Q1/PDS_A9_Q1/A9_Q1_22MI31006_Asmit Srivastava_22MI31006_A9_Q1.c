#include<stdio.h>
typedef struct complex{
float real;
float imag;
}complex;
int complex_add(complex p,complex q); // made a fxn for adding complex numbers
int main(){
complex z1,z2;
printf("Enter the first complex no. z1");
scanf("%f %f" ,&z1.real,&z1.imag); 
printf("Enter the second complex no. z2");
scanf("%f %f" ,&z2.real,&z2.imag); 
complex_add(z1,z2);
return 0;
}

int complex_add(complex p,complex q){ //defined a fxn
float r;
float i;
r=p.real+q.real;
i=p.imag+q.imag;
printf("Z=%f+%fi" ,r,i);
return 0;
}

