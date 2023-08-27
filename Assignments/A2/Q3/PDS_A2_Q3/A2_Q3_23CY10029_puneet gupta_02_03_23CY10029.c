#include <stdio.h>

int main ()
{
  int a ,b ;
  float c ,d;
 printf("enter amount you are deposit \n");
 scanf("%d", &a);
   printf(" period of deposit in year  \n");
   scanf("%d",&b);
  printf( " enter arate of interest \n");
scanf("%f",&c);
 d = a*b*c/100;
   printf("  the total amount payable at end of the deposit period  %f\n", d+a);
  	     
  
  return 0;
}
