/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 5-2
Description : To check for coprimes within the array
*/
#include <stdio.h>			
int total=0;								//Declaring global variable
void CoPrime(int a,int b)						//Function to check co prime
{
	int check=0,min=0;						//Declaring local variable
	if(a>b)	
	min=b;
	else
	min=a;
	while(min>0)							//Calulating GCD
	{
		if(a%min==0 && b%min==0)
		{
		check++;
		}
	min--;
	}
	if(check==1)							//Checking for co prime
	{total++;
	printf("%d and %d are Co-Prime\n",a,b);}
}
int main()
{
	int A[5],a=0;							//Creating array
	int i=0,j,check=0;
	printf("Enter five values for the array\n");			//Instruction for the user
	scanf("%d %d %d %d %d",&A[0], &A[1], &A[2], &A[3], &A[4]);	//read
	for(i=0;i<5;i++)						
		for(j=i;j<5;j++)
			{
			CoPrime(A[i],A[j]);
			}
	if(total==0)							//If no co primes
	printf("No co-primes found\n");
}

		
