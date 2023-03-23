#include <stdio.h>

int main()

  {
      int n;
      printf("Enter the number:\n");
      scanf("%d",&n); //To read an integer
      printf("The input number is: %d \n",n);
      int S = n+1 ; //To reduce typing

      int S1 = (n*S)/2 ; //Sum of first n natural numbers

      int S2 = (n*S*((2*n)+1))/6 ; //Sum of square of first n natural numbers

      int S3 = n/100 + (n-((n/100)*100)-(n%10))/10 + n%10 ; //Sum of digit of the input number

      printf(" The value of S1 is %d \n", S1) ;
      printf(" The value of S2 is %d \n", S2 ) ;
      printf(" The value of S3 is %d", S3) ;

      return 0;

  }










