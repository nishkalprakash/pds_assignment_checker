/*
section 14
ANUSHREE GHOSH
22CH30005
ASSIGNMENT 11
description:finding the sum of harmonic series
*/

#include<stdio.h>
//defining the function called harmonic_sum
float harmonic_sum(int n)
{
 float sum=0;
  if(n==1)
 {
   return 1;
 }
  else if(n==0)
 {
   return 0;
 }
  else
   return harmonic_sum(n-1)+(1.0/n); //returning the sum
}


 
int main(){
 int n;
 printf("enter the value of n: "); //taking the value of n
 scanf("%d",&n);
 printf("%f", harmonic_sum(n)); 

 return 0;
}
