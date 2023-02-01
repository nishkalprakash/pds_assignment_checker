/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 11
Program to calulate the sum of harmonic progression
*/
#include<stdio.h>
float s=0;
float harmonic(int p)
 {
 	
 	if(p==1)
 	{
 		s=s+1;
 		return s;      // returning sum
 	}
 	else 
 	{
 		s=s+1.0/p;                 //calculating sum
 		return harmonic(p-1);      //calling recursively
 	}
 }
int main()
 {
 	int n;
 	float sum;
 	printf("Enter the value of n\n");
 	scanf("%d",&n);
 	sum=harmonic(n);            //calling function
 	printf("%f",sum);
 	return 0;
 }