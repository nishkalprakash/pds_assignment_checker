//Roll No.:23CE10045
//Name:PRIYANSHU VERMA

#include <stdio.h>

int main()
{ int m;
  int n;
  float k;
  float l;
  printf("Enter first integer:");
  scanf("%d",&m);
  printf("Enter second integer: ");
  scanf("%d", &n);
  printf("Entered integers are %d and %d ",m,n);
  printf("\n a. The sum %d ", m+n);
  printf("\n b. The difference  %d", m-n);
  printf("\n c. The product %d", m*n);
  printf("\n d. The integer quotient %d", m/n);
  printf("\n e. The integer remainder %d", m%n);
  k = m*1;
  l = n*1;
  printf("\n f. The floating point quotient %f", k/n);
  printf("\n g. The sum of the squares %d", m*m+n*n);
  printf("\n h. The square of the sum %d", (m+n)*(m+n));
  printf("\n i. The average %f" , (k+l)/2) ;
  printf("\n j. The average of the sum of squares %f", (k*k+l*l)/2);

  return 0;
}
