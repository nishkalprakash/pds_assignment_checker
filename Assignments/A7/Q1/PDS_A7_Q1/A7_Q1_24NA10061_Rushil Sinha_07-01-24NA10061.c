//NAME: RUSHIL SINHA
//ROLL NO.: 24NA10061
//Program to find the sum of given series upto n terms
#include <stdio.h>

int x=0;			//Variable definition
int n = 0;
int prod = 1;
int exponent= 1;
float sum = 0;
int fact(int n)
	{
		for (int j=1; j <= n; j++)	//Generate factorial
		{
			prod = prod * j;
		}
		return prod;
	}
	int power(int x, int n)		//exponent function
	{
		for (int k = 1; k <= n; k++)
		{
			exponent = exponent * x;	
		}
		return exponent;
	}
int main() 
{
	scanf("%d %d", &x, &n);
	
	for(int i = 0; i <= n; i++)
	{
		sum = sum + (power(x,i) / (float)fact(i));	//generates sum of series upto n terms
			
	}
	printf("%f", sum);
	return 0;
}
