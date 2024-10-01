#include <stdio.h>
// function to find x^n
int power(int x,int n)
  {
   int i; //i looping variable
    if (n==0)
       return 1;
    int value=1;
    for (i=0;i<n;i++)
      value*=x;
    return value;
    }
    
// function to calculate factorial
int fact(int n)
  { 
  int i; //i looping variable
   if (n==0 || n==1)
      return 1;
   else 
     {
       int factn=1;
       for (i=2;i<=n;i++)
           factn*=i;
       return factn;
       }
  }
  
int main()
{
  int x,n;
  // getting value of x,n from user
  printf("Enter value of x:");
  scanf("%d",&x);
  printf("Enter value of n:");
  scanf("%d",&n);
  int i; // i looping variable
  float sum=0,term;
  for (i=0;i<n;i++)
   { 
     term=(float)power(x,i)/fact(i);
     sum+=term;
     }
  printf("the sum of first %d terms of the series is %f",n,sum);
  return 0;
  }
 
