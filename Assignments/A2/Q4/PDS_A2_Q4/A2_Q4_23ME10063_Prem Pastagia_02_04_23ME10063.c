//ROLL NO:23ME10063
//NAME:Prem Pastagia

#include <stdio.h>
int main()
{
  int m,n;
  printf("Please enter two integers\n");
  scanf("%d%d",&m, &n);
  printf("The sum %d\n",m+n);
  printf("The difference %d\n",m-n);
  printf("The product %d\n",m*n);
  printf("The integer quotient %d\n",m/n);
  printf("The integer remiander %d\n",(m%n));
  printf("The floating point quotient %f\n",(float)m/n);
  printf("The sum of the squares %d\n", ((m*m)+(n*n)));
  printf("The square of the sum %d\n" ,(m+n)*(m+n));
  printf("The average %f as a floating point number\n",(float)(m+n)/2 );
  printf("The average of the sum of the squares %f as a floating point number\n", (float)((m*m)+(n*n))/2); 
  return 0;
}
