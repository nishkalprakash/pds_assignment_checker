
# include<stdio.h>
struct complex {
   float real;
   float imag;
}; struct complex z1, z2, z;
// adding two complex numbers

int main ()
{
  printf("z1 : ");
  scanf("%f %f", &z1.real, &z1.imag);
  printf("z2 : ");
  scanf("%f %f", &z2.real, &z2.imag);
  z.real = z1.real + z2.real;
  z.imag = z1.imag + z2.imag;
  if(z.imag >= 0)
{
  printf("z : %f + %fi\n", z.real, z.imag);
}
else
{
  printf("z : %f - %fi\n", z.real, ((-1)*z.imag));
}
   return 0;
}
