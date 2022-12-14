/*
 Test-1 Set-B
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No :T1-2
Description :To print all the armstrong numbers till the user input.
*/
#include<stdio.h>
#include<math.h>
int digits(int x)						//function to count the number of digits to calculate the power
{
	int i,d=0;						//declaring and initialising
	while(x>0)						//loop
	{
		d++;
		x=x/10;
	}
	return d;						//returning the number of digits
}
int power(int a,int b)						//function to calculate power from the number of digits
{
	int total=1;						//declaring and initialising 
	while(b>=1)						//calculation
	{
		total=total*a;
		b--;
	}
	return total;						//returning the b'th power of a
}
int arm(int x,int y)						//function to calculate sum of the y power of the digits of x
{
	int dig,dsum=0;						//declaring and initialising 
	while(x>0)						//CALCULATION
	{
		dig=x%10;
		dsum=dsum+power(dig,y);
		x=x/10;
	}
	return dsum;						//returning the sum of the y power of the digits of x
}
int main()
{	
	int i,d,n,armstrong;					//declaring and initialising
	printf("Enter a number:");				//Instruction for the user
	scanf("%d",&n);						//taking user input
	if(n>0)							//checking if the number is positive or not
	{
	for(i=1;i<=n;i++)					//loop running till n from 1
	{
	d=digits(i);						//calling the function digit()
	armstrong=arm(i,d);					//calling the function arm()
	if(armstrong==i)					//checking if the number is armstrong or not
	printf("%d\t",i);
	}
	}
	else							
	{
	printf("Invalid input");				//write
	}
	printf("\n");

}

	
