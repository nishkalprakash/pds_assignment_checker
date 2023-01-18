#include<stdio.h>

 typedef struct complex{
  float real;
  float imag;
} complex;

 int  addreal( complex z1,complex z2)
{
   float c;

  c = (z1.real)+(z2.real);
return c;
}

int  addimag( complex z1,complex z2)
{
   float q;

  q = (z1.imag)+(z2.imag);
return q;
}
int main()
{
     complex z1,z2;
  printf("Enter the value of z1:-\n");
  scanf("%f %f",&z1.real,&z1.imag);
  printf("Enter the value of z2:-\n");
  scanf("%f %f",&z2.real,&z2.imag);
 float p= addreal(z1,z2);
float r =addimag(z1,z2);
printf("sum is %.1f + %.1fi",p,r);
return 0;
}
