#include<stdio.h>
#include<math.h>


int main()
{
 double mu ,ep,c;
 printf("enter value of mu ,ep");
 scanf("%lf %lf",&mu ,&ep);

 c=1/sqrt(mu*ep);
 printf("%lf",c);
 
return 0;
} 
 
