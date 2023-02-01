//Assignment 11
//Section 14
//Name:Sanika Kadam
//Question 1


#include<stdio.h>

//recursive function to calculate sum of harmonic series

float har_sum(int N)
{
  if(N==1)
      return 1;
  if(N==0)
      return 0;
  else
      return har_sum(N-1)+(1.0/N);
}

int main()
{
  int N;
  printf("Enter N:"); //Enter N in range [0,99999]
  scanf("%d",&N);
  
  printf("Sum of %d terms of series: %f",N,har_sum(N));
  return 0;
}
  

