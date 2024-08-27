#include <stdio.h>

int main()
{
	int n, nbig, nbigger;

	printf("Enter number: >"); scanf("%d", &n);
	
	if (n<0) return 0;		//direct end if first input=-1
	
	nbigger=n;		// first initialization
	nbig=-1;
	
	printf("Largest number: %d\n", nbigger ); 		//printing
	printf("Second largest number: Value not yet entered.\n\n");
		
	
	for (;n>0;)
	{ 	
		printf("Enter number: >"); scanf("%d", &n);
		if (n>nbigger) {nbig=nbigger; nbigger=n;} 	//value checks
		if ((n<nbigger)&&(n>nbig)) nbig=n;
		
		printf("Largest number: %d\n", nbigger );
		if (nbig<0)	// for seconfd value input
		{	
			printf("Second largest number: Value not yet entered.\n\n");
		}
		else printf("Second largest number: %d\n\n", nbig );
		
		
	
	}
	return 0;
}
