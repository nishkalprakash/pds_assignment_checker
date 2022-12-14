/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Test No : 1
	Description : Program to print all perfect numbers below an user input
*/

#include <stdio.h>

int checkPerfect( int num )		//function to check whether number is perfect
{
	int i;
	int sum = 0;
	for ( i = 1 ; i < num ; i++ )
	{
		if ( num%i == 0)	// i is made to take the divisors of num
			sum += i ; 
	}
	if (sum == num)
		return 1;
	else
		return 0;
}

int main()
{
	int n;
	printf("Enter positive integer n (other than 1): ");
	scanf("%d", &n);

	if ( n<=1 )
	{	
		printf("Invalid input \n");
		return 0;
	}
	else
		printf("Perfect numbers less than or equal to %d are:\n",n);
	
	int check ,flag = 0;

	for (check = 2 ; check <= n ; check++)	//loop checks perfectness of all numbers below n
	{
		if (checkPerfect(check) == 1)
		{
			printf("%d  ", check);
			flag++;
		}
	}

	if (flag == 0)		// flag variable checks if a perfect number is found
		printf("N/A ");
	
	return 0;

}
