#include<stdio.h>
#include<math.h>
int main()
{
   double u,e;//b= 12.566*10^-7,c=8.85*10^-12
  printf("Enter value of b and c");
  scanf("%lf %lf",&u,&e);
  printf("%lf" ,(1/sqrt(u*e)));
  
  return 0;
}
