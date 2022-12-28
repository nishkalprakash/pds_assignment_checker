/*
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No : 6
 Question No :2
 Description :program to print the co-prime pairs from a set of numbers
*/
#include <stdio.h>
int n;//to store the length of array

int gcd(int m,int n)//to compute the gcd of two numbers
{
	if(m%n==0)
		return n;
	else
		return gcd(n,m%n);       
}

void CoPrime(int a,int b)
{
   if( gcd(a,b)==1) //if a and b are co-primes print a and b
   	printf(" ( %d , %d )" ,a,b );
}

void pair(int a[])  // Generates pairing and calls coprime() for each pair
{
    for (int i = 0; i < n;i++)
        for (int j = i + 1; j < n;j++)
            CoPrime(a[i], a[j]);
}

int main()
{
	int i;
	printf("Enter the value of n :");
    scanf("%d",&n);
    int A[n];//array of n numbers
    float A2[n];
    printf("Enter  n numbers");
    for ( i = 0; i< n; i++) //loop for storing input
    {
        scanf("%f",&A2[i]);
        A[i]=(int)A2[i];
    }
    for( i = 0; i< n; i++)//loop for checking for negative numbers 
       {
       	if(A[i]<0)
       	{
       		printf("Invalid entries! All  should be positive numbers");
       	     return 0;
       	}
       }
     for( i = 0; i< n; i++)//loop for checking for decimals
       {
       	if(A[i]-A2[i]!=0)
       	{
       		printf("Invalid entries! All  should be integer numbers");
       	     return 0;
       	}
       }

    printf("Co-prime pairs:");
    pair(A);//calling pair function with Array A as arguement
    return 0;
}