/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 5
Description :  calculating expansion sum
*/

#include <stdio.h>  //including the header file

int power(int x,int n)   //function to calculate x^n 
{
int p=1;               //using a loop to calculation
	for(int i=0;i<n;i++)
	{
		p*=x;
	}
return p;
}

int fact(int n)    //function to calculate factorial
{
	float f=1;
	if(n>=1)
	{
		for(int i=1;i<=n;i++)   
		{
		f*=i;
		}
	}
	return f;
}


int main(){
	int x,n;
	printf("Enter x and n : ");   //taking x and and no. of terms as input
	scanf("%d%d",&x,&n);
	float sum = 0;
	for(int i=0;i<=n;i++)
	{
		sum+=power(x,i)/(float)fact(i);   //calculating sum and type casting to ensure float values are obtained in each term
	}
	printf("The sum is %f ",sum);
	

	return 0;
}


