
/* > Program to compute the sum of the series and sum of squares of the series
   > Code creator : Siddhant chavda
   > Roll no. 24NA10003
*/

#include <stdio.h>

int main()
{
	int n,sum,sos;		// sos= sum of squares
	
	
	printf("Enter the number:");
	scanf("%d",&n);
	sum=(n*(n+1))/2;
	sos=(n*(n+1)*(2*n + 1))/6;
	
	// PRINTING THE DESIRED OUTPUT 
	
	printf("\n The sum of the series upto entered number is: %d",sum);
	printf("\n \n The sum of squares of number upto the entered number is: %d \n",sos);
	return 0 ;
	
	













}
