// Roll_No. : 23PH10013
// Name : Bhoomik Modi
#include <stdio.h>// Invoking the header file
int main(){// Creating main function
  int m,n;
  printf ("Enter the two numbers (Leave a space between two) : ");
  scanf("%d%d",&m,&n);
  printf ("The sum : %d ",m+n);
  printf ("\nThe difference : %d",m-n);
  printf ("\nThe product : %d",m*n);
  printf ("\nThe Integer quotient : %d",m/n);
  printf ("\nThe Integer Remainder : %d",m%n);
  printf ("\nThe Floating Quotient : %f",(m*1.0/n*1.0)*1.0);
  printf ("\nThe sum of square : %d",m*m+n*n);
  printf ("\nThe square of sum : %d",(m+n)*(m+n));
  printf ("\nThe floating average : %f",((m+n)/2.0));
  printf ("\nThe Average of sum of square : %f\n ",((m*m+n*n)/2.0));
  return 0;
}
  
