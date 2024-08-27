#include <stdio.h>
#include <math.h>
int main()
{	int i, x1, x2, xi, n;
	printf("Enter positive integer: "); scanf("%d", &n);
	
	if (!(n>0))
	{
		printf("N is Invalid\n");
		return 0;
	}
	
	x1=1;
	x2=1;
	
	printf("1, -1, "); 		// removing unecessary flowcontrol and logic
	
	for(i=3;i<=n;i++)
	{
		xi=x1+x2; 	//new term
		printf("%d, ", (int)(xi*pow(-1, i-1)));		//printing new term with proper sign
		
		x1=x2;		// prep for next iteration
		x2=xi;
	} 

	return 0;
	
}
