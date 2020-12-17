#include <stdio.h>

int main()
{
  float a,b,c;
  printf("Enter the coefficients a, b, c of quadratic equation: ");
  scanf("%f%f%f",&a,&b,&c);
  printf("The coefficients of the equation are %f, %f, %f\n",a,b,c);
  double D=pow(b,2)-(4.0*a*c);
  if(D<0)
    printf("The roots are complex.\n");
  else
    {
        float r1=(sqrt(D)-b)/(2.0*a);
        float r2=(-sqrt(D)-b)/(2.0*a);
        printf("The roots of the equation are %f, %f\n",r1,r2);
        if(r1==r2)
            printf("The roots are equal.\n");
    }
}
