#include <stdio.h>
#include <math.h>
int main()
{
float a, b, c, u, e;
printf("Enter the values of u and e");
scanf("%f%f", &u, &e);
a=u*e; //multiplying the constants 
b=sqrtf(a); //applying root
c=1/b;
printf("%f", c);
return 0;
} 
