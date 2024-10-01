#include<stdio.h>

int gcd(int x, int y) //gcd of two numbers should not be greater then the smaller number
{
	if(x<y)
	{
		for(int i=x; i>=1; i--)
		{if(y/i == 0);} // gcd is i 	
	}
	else
	{
		for(int i=y; i>=1; i--)
		{if(x/i == 0);} // gcd is i
	}
	return gcd(x,y);
}

int main()
{
	printf("%d", gcd(10,19));
	
	return 0;
}
