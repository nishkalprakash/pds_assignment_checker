//code by Pradyumna 24na10048

#include<stdio.h>
int power(int x , int n)   //function computing x^n
{
int temp=x;
for (int i=1;(i<n);i++)
	{temp=temp*x;}	
return temp; 		//rerturns x^n
}

int fact(int n)		//function computing factorial
{
int prod=1;
for (int temp=1;(temp<=n);++temp)
	{prod=prod*temp;}
return prod;		//reutrns factorial
}

int main()
{
int x,n;
float sum=1;
printf("enter value of x ");
scanf("%d",&x);			//inputs given by user
printf("enter value of n <=10 ");
scanf("%d",&n);
for (int i=1;(i<n);i++)
	{int a = power(x,i);
	int b = fact(i);
	sum = sum+ (float)a/b;}
printf("the sum is %f",sum);	//finally prints the sum using for loop
	
	




}
