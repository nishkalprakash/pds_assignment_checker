/*
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No : 6
 Question No :1
 Description :program to print the given series
*/
#include <stdio.h>


int term(int n)
{
 if(n<=2)
  return n;
 else
  return 3*term(n-1)*term(n-2)-2*term(n-2)*term(n-3)+1;//recursively calling term(int)
}//end of term(int)

int main()
{
  int n,k,t;
  printf("Enter the number of terms ( k= ) :\n");
  scanf("%d",&k);//accepting the number of terms from the user
  if(k<=0)
     printf("Invalid input");//atleast one term to be printed
  else
     {
       for(n=0;n<k;n++)
        {
          t=term(n);//n-th term of the series
          printf("%d,",gt);
       }
    }
 return 0;
}//end of main
