/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Assignment .no  : 4
Description: writing the factors of the number 
*/ 




# include <stdio.h>
# include <stdlib.h>



int main()
{
	int a;
	printf("enter a number: ");
	scanf("%d",&a);
	int i=1;

	printf(" the factors of the numbers are: ");

	if(a<0);                                //converting a to positive if a is negative
		a*=-1;

	while(i<=a)
	{
		
		if(a%i==0)
			printf("%d ",i);      // checking each int less than a is a factor of a or not 
		i+=1;
	}
	
	
	return 0;
}
