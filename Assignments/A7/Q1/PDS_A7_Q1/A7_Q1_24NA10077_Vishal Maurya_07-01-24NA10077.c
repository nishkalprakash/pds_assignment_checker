//Program to output value of an equation
//Code Creater: Vishal Maurya
//Roll NO: 24NA10077
#include <stdio.h>

float fact(int n);
float power(int x, int n);

int main()
{

	int x,n;
	printf("Enter X and N:\n");
	scanf("%d%d", &x, &n);
	float value = 0;
	
	for(int i=0; i<n; i++)
	{
		value = value + (power(x,i))/(fact(i));
	}
	printf("%f\n", value);
	
	return 0;
}

float fact(int n)
{
	float value = 1;
	for(int i=1; i<n; i++)
	{
		value = value*(i+1);
	}
	return value;
}

float power(int x, int n)
{
	float value = 1;
	for(int i=1; i<=n; i++)
	{
		value = value*x;
	}
	return value;
}
