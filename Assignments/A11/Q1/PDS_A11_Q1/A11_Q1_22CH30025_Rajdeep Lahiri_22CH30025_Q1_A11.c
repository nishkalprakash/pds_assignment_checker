/*Name - Rajdeep Lahiri
section -14
assignment - 11
Roll no - 22CH30025*/
 
#include <stdio.h>
float harmonic(int n)
{
if(n==1)
	return 1.0;//base case
else 
	return (1.0/n) + harmonic(n-1); // recursive function call
}
 
int main()
{
printf("enter the value of n\n");
int n;
scanf("%d",&n);
printf("the harmonic sum upto n is \n");
printf("%f",harmonic(n));
return 0;
} 
