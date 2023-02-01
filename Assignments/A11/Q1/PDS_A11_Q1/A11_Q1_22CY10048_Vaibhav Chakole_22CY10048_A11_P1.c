/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 11
Description : sum of harmonic series
*/
#include<stdio.h>
float sumSeries(int n); //function delcaration
int main()
{
int n;
float sum=0;
printf("Enter n where 0<n<=99999 ");
scanf("%d",&n); //scan number of terms
sum=sumSeries(n); //function calling
printf("Sum of the harmonic series is %0.3f ",sum); //printing the sum
return 0;
}
float sumSeries(int n) //function definition
{
float sum=0;
for(int i=0;i<n;i++)
{
if(n==1)
return 1; //terminating case for n=1
else
{
sum=sumSeries(n-1)+1/(float)n; //used recursion
}
}
return sum; // returning value
}
