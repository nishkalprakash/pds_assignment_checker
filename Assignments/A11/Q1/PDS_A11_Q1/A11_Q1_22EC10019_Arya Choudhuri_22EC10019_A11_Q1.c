/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 11
	Description : Program to find harmonic series
*/

#include <stdio.h>

float gethp( int n )
{
	float sum = 0;
	if ( n == 1 )
	{
		return 1.00;
	}
	sum += (1.0)/(float)(n);
	sum += gethp( n-1 );
	return sum;
}
int main()
{
	int n;

	printf("Enter number of terms in harmonic series:");
	scanf("%d" , &n);
	
	if (n == 0)
	{
		printf("Invalid input");
		return 0;
	}

	float sum ;
	sum = gethp(  n  );
	printf("Sum of HP = %.4f" , sum);

}
