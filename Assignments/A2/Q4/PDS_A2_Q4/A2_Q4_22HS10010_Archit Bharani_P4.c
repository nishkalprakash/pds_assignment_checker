#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d;
/*Enter permeability*/
printf("Permeability(a)=");
scanf("%f",&a);
/*Enter permitivity*/
printf("Permitivity(b)=");
scanf("%f",&b);
d=1/(sqrt(a*b));
printf("Speed of Light(c)=%f",d);
return 0;
}
