/*
*Section 14
*Roll no  22MF3IM17
*NAME  SARANSH ATTRI
*Assignment no 5
*description  functions and arrays 
*/


#include <stdio.h>

int power(int x, int n)   // first function to find the power of x raised to n
{
	int a=1;          //local variable
	int b=1;          //loop control variable
	while(b<=n)
	{
		a*=x;
		b++;
	}
	return(a);
}


int fact(int n)            // function to find n factorial
{
	int prod=1;        //local variable to store factorial
	int b=1;           //loop control variable
	while(b<=n)
	{
		prod*=b;
		b++;
	}
	return(prod);

}


int main()                   // main function
{
	int a,x,n;
	a=1;                //loop control variable
	printf("type the value of x \n");
	scanf("%d",&x);
	printf("type the value of n \n");
	scanf("%d",&n);
	float sign=1;       
	while(a<n)     
	{
		sign=sign+(float)(power(x,a))/fact(a);         
		a++;
	}
	printf("output is : %f \n",sign);
}

