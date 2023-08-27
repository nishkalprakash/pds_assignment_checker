//Roll No:23MF10042
//Name:theyanesh Eswaramoorthy Rajahkrishnan
#include <stdio.h>
int main()
{
  int m,n;
  printf("Enter two integers:");
  scanf("%d%d",&m,&n);
  printf("The sum is %d\n",m+n);
  printf("The difference is %d\n",m-n);
  printf("The product is %d\n",m*n);
  printf("The integer quotient %d\n",m/n);
  printf("The integer remainder is %d\n",m%n);
  printf("The floating point quotient is %f\n",(float)m/n);
  printf("The sum of squares is %d\n",m*m+n*n);
  printf("The square of the sum is %d\n",(m+n)*(m+n));
  printf("The average is %f\n",(m+n)/2.0);
  printf("The average of the sum of the squares is %f\n",(m*m+n*n)/2.0);
  return 0;
}
