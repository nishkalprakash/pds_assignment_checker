//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
int main()
{
  int m,n;                      // Initiallising variables
  printf("Please enter two integers : ");
  scanf("%d %d",&m,&n);
  printf("\nThe sum = %d ",m+n);
  printf("\nThe difference = %d ",m-n);
  printf("\nThe product  = %d",m*n);
  if (n != 0)                  // Checking if n is equal to 0
    {
      printf("\nThe integer quotient = %d",m/n);
      printf("\nThe integer remainder = %d",m%n);
      printf("\nThe floating point quotient = %1.3f",(float)m/n);
    }
  else printf("\nDivision with zero is not possible!");
  printf("\nThe sum of the squares = %d ",m*m+n*n);
  printf("\nThe square of the sum = %d ",(m+n)*(m+n));
  printf("\nThe average = %1.3f ",(m+n)/2.0);
  printf("\nThe average of sum of squares = %1.3f\n",(m*m+n*n)/2.0);
  return 0;
}
