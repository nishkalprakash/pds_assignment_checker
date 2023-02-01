/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 11
	Description : Program to check fibonacci number
*/

#include <stdio.h>

int Fib( int n)
{
	if ( n == 2 || n == 1)
		return n-1;
	else
	{
		return (Fib(n-1)+(Fib(n-2)));
	}	

}
int main()
{
	int n;

	printf("Enter number:");
	scanf("%d" , &n);

	int i;
	int flag = 0;

	for( i = 1 ; n <= Fib(i) ; i++)
	{
		if ( Fib(i) == n )
		{
			printf("Yes");
			flag++;
		}	
	}
	if (flag == 0)
		printf("No");
}