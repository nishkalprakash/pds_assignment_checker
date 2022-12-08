/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 5
 Description : Program that finds the sum of the first n terms in the given series
*/

#include <stdio.h>									//including the standard input output library
int power(int x,int n);									//mentioning the function prototype of the power function before int main()
int fact(int n);									//mentioning the function prototype of the fact function before int main()
int main()
{
	int n,x,c=0;									//declaring variables to store x and n respectively, entered by the user
	double sum=0;									//declaring sum variable and initializing it with zero
	int i;										//declaring a loop control variable i
	printf("Enter the value of x(an integer) and n(0<=n<=10) respectively : ");	//prompting the user to enter a number
	scanf("%d%d",&x,&n);								//taking input from the user
	if(n>=0&&n<=10)
	{
		for(i=0;i<n;i++)
		{
			sum = sum + ((double)(power(x,i)))/((double)(fact(i)));		//evaluating sum with the help of power and fact functions
		}
		printf("%.4lf\n",sum);
	}
	else
	{
		printf("Invalid input\n");						//printing Invalid input if value of n does not lie in [0,10]
	}
	return 0;									//the int main() will return 0
}

int power(int x,int n)
{
	int res = 1;									//this variable will store x raised to the power of n
	int i;										//declaring a loop control variable
	if(n==0)
	{
		return 1;								//power function will return 1 if n==0
	}
	for(i=1;i<=n;i++)
	{
		res = res*x;
	}
	return res;									//power function returns an int value, res
}

int fact(int n)
{
	if(n==1 || n==0)								
	{
		return 1;								//fact function will return 1 if n==1 or n==0
	}
	else
	{
		return (fact(n-1)*n);							//fact function will return fact(n-1)*n if n>1
	}
}
