/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 11
Description : Program to print sum of harmonic series upto n.
*/

#include <stdio.h>

float sum=0, temp;

float add(int n)
{
  
   if (n>0)
   {
	
	sum= sum+1.0/n+add(n-1);
        
        
        return sum;
   }
else
return 0;
   

}

int main()
{
   int n;
   float x;
   printf("Enter a number between 0 and 99999.\n");
   scanf("%d",&n);
   x=add(n);
   printf("The sum of harmonic series upto n is: %f",x);
   return 0;
}
   
