#include<stdio.h>
#include<stdlib.h>
float Sum(int n)
{
	
	if(n==0)
	  return 0;
	else
	return ((1.0/n)+Sum(n-1));
	return Sum(n);
}
int main()
{
   unsigned int n;
   float sum;
   printf("Enter the value of n:\n ");
   scanf("%d",&n);
   sum=Sum(n);
   printf("The value of harmonic sum is %f",sum);








	return 0;
}