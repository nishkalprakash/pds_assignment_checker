/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 5
 Description : Program that finds the Co-Primes in a given array
*/
#include <stdio.h>									//including the standard input output library

int count = 0;										//a global variable to count

void CoPrime(int a,int b);								//mentioning the function prototype of the CoPrime function before int main()
int gcd(int a,int b);									//mentioning the function prototype of the gcd function before int main()
void pair(int a[]);									//mentioning the function prototype of the pair function before int main()
int main()
{
	int n[5];									//declaring the array
	int i;										//declaring a loop control variable i
	printf("Enter five integers: ");						//prompting the user to enter a number
	for(i=0;i<5;i++)
	{
		scanf("%d",&n[i]);							//taking input from the user
	}
	pair(n);
	return 0;									//the int main() will return 0
}

void CoPrime(int a, int b)
{
	int c = gcd(a,b);								//the returned value from gcd function gets stored into c
	if(c==1)
	{
		printf("%d and %d are Co-Prime\n",a,b);					//printing the Co-Primes
		count++;								//incrementing the global variable, count
	}
}

int gcd(int a,int b)
{
	int min,max,i,c;								//declaring required variables
	if(a>b)										//finding the minimum value out of a and b
	{
		min=b;
		max=a;
	}
	else
	{
		min=a;
		max=b;
	}
	for(i=1;i<=min;i++)								//calculating the gcd of min and max
	{
		if(min%i==0 && max%i==0)
		{
			c=i;
		}
	}
	return c;
}


void pair(int a[])
{
	int i,j;									//declaring loop control variables
	for(i=0;i<5;i++)								//finding each pair of integers int the array
	{
		for(j=i+1;j<5;j++)
		{
			CoPrime(a[i],a[j]);
		}
	}
	if(count == 0)
	{
		printf("No Co-Prime found\n");						//printing No Co-Prime found if the array contains no pair of co-primes
	}
}
