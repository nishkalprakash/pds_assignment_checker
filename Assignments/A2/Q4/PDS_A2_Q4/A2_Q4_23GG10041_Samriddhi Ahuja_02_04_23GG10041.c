//Roll No.: <23GG10041>
//Name:<Samriddhi>
#include <stdio.h>
int main()
{
  int m,n,sum,difference, product,quotient, remainder, sumofsquares, squareofsum;
  float floatingquotient, avg, avgsquare;
  printf("enter any no. m =\n");
  scanf("%d" ,&m);
  printf("enter any no. n =\n");
  scanf("%d" ,&n);
  sum = m+n;
  printf("sum of the two =%d\n",sum);
  difference = m-n;
  printf("difference of the two =%d\n" ,difference);
  product = m*n;
  printf("product of the two = %d\n" ,product);
  quotient = m/n;
  printf("integer quotient of the two =%d\n" ,quotient);
  remainder = m%n;
  printf("integer remainder of the two is =%d\n" ,remainder);
  floatingquotient = (float)m/n;
  printf("floating point quotient of the two =%f\n" ,floatingquotient);
  sumofsquares = m*m + n*n;
  printf("sum of the squares is=%d\n" ,sumofsquares);
  squareofsum = (m+n)*(m+n);
  printf("square of the sum =%d\n" ,squareofsum);
  avg = (m+n)/2;
  printf("average of the two =%f\n" ,avg);
  avgsquare =(m*m + n*n)/2;
  printf("average of the sum of squares =%f\n" ,avgsquare);
  return 0;
}
