#include<stdio.h>
#include<math.h>
int main()
{ 
float a,b,c;
printf("permeability(a)=");
scanf("%f",&a);
printf("permitivity(b)=");
scanf("%f",&b);
c=1/sqrt(a*b);
printf("c=%f",c);
return 0;
}
