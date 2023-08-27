//Roll No: 23EC30056
//Name: Swaraj Dian

#include <stdio.h>
int main()
{
  int m=0,n=0;
  printf("Enter two integers: ");
  scanf("%d%d",&m,&n);
  printf("\nThe sum  of two integers=%d",m+n);
  printf("\nThe difference  of two integers=%d",m-n);
  printf("\nThe product  of two integers=%d",m*n);
  printf("\nThe integer quotient  of two integers=%d",m/n);
  printf("\nThe integer remainder of the two integers=%d",m%n);
  printf("\nThe floating point quotient  of two integers=%f",m/((float) n));
  printf("\nThe sum of squares of two integers=%d",m*m+n*n);
  printf("\nThe square of the sum of two integers=%d",(m+n)*(m+n));
  printf("\nThe average of the two integers=%f",(m+n)/2.0);
  printf("\nThe average of the sum of squares of the two integers=%f",(m*m+n*n)/2.0);
}
