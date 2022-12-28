/*
Name : Govind Jiaswal
Roll no : 22CH10024
Section : 14
Assignment no : 6
Description : Program to check for co-prime numbers among the given set of numbers
*/

#include <stdio.h>
int gcd(int m,int n)    // returns gcd of x and y
{
	int  temp;
	while ((m % n) != 0) 
	 {
		temp = m % n;
		m = n;
		n = temp;
	}
	return n;
}

void CoPrime(int a , int b)    // prints all co-prime numbers in range a, b
{
	int GCD = gcd(a,b);
	if(GCD == 1)
	printf("Co-prime pairs : (%d,%d)   ",a,b);
}	

void pair(int a[])
{
	for (int i = 0; i < 5; i++)
	{
        	for (int j = i + 1; j < 5; j++)
            	CoPrime(a[i], a[j]);
	}
}

int main()
{
	int i,j,n,x[5];
	printf("Enter array elements :\n");     //taking input from the user
	for(n=0;n<5;n++)
	scanf("%d",&x[n]);
	for(n=0;n<5;n++)
	{
		for ( i = 0; i < 5; i++)
		for ( j = i + 1; j < 5; j++)
		if (gcd(x[i], x[j]) == 1)   // checking if at least one coprime pair exists
		{
               	 pair(x);
               	return 0;
		}
	}
	printf("No co-prime exist");   //program reaches here if no co-prime pair is found
	return 0;
}
