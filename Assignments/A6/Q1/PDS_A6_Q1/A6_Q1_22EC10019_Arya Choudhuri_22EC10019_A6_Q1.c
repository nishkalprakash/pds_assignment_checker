/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 6
	Description : Program to find n terms of series using recursion
*/

# include <stdio.h>

int print_term ( int n )
{
	if ( (n==0) || (n==1) || (n==2) )
		return n ; 
	else
		return (3*print_term(n-1)*print_term(n-2) - 2*print_term(n-2)*print_term(n-3) + 1);
}

int main()
{
	int k ;
	printf("Enter number of terms of series to be displayed: ");
	scanf("%d",&k);

	int i ; 
	
	if (k<0)
	{
		printf("Invalid input");
		return 0;
	}

	for (i=0 ; i<k ; i++)
	{
		int res  = print_term(i);
		printf("%d , " , res);
	}
	return 0;
}

