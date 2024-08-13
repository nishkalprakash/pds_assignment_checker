//Program to compute the sum of the series
// Code Creater : Vedant Pawar
//roll number : 24NA10075


#include<stdio.h>
int main ()
{ 
  int n,S1,S2,S3,A1,A2,A3,Q1,Q2,Q3,S;
  printf( "Enter the number n " );
  scanf("%d",&n);
  S1=((n)*(n+1)/2);
  
  printf("\n sum of numbers from 1 to %d=%d",n,S1);
  S2=((n)*(n+1)*(2*n+1)/6 );
  printf("\ n sum of squares of  numbers S2  from 1 to %d,%d",n,S2);
 A1=n%10,Q1=n/10;
 A2=Q1%10,Q2=Q1/10;
 A3=Q2%10,Q3=Q2/10;
   S=A1+A2+A3;
   printf("SUM OF DIGITSIS %d",S);
   return 0;
   }
   
