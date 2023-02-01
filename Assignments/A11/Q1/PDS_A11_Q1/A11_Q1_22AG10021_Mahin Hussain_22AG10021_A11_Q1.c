/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:11
Description: Program to print the sum of harmonic series.
*/

#include<stdio.h>
float hSer(int n)              //recursive function to return sum of harmonic series
{
	if(n==1)              //base case
		return 1.0;
	else
	return (1.0/n)+hSer(n-1);
}

int main()
{
	int n;
	printf("Enter the value of n\n");   //asking user to n and storing it
	scanf("%d",&n);
	printf("%f",hSer(n));  //printing sum of harmonic series upto n
	return 0;
}
