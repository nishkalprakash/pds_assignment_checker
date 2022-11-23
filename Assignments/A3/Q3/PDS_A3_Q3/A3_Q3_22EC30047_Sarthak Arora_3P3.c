/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Assignment .no  : 3
description : doing a given operation to given numbers 
*/ 




# include <stdio.h>
# include <stdlib.h>


int main()
{

	float a,b  ;
	char operation ;
	printf(" enter the operation to be done and the numbers on which the operation is to be done ( +,-,*,/) \n ");
	scanf("%c %f %f", &operation ,&a , &b );


	switch(operation)
	{
	case ('+'): 
			printf("%f\n" ,(a+b)) ;
	break ;

	case ('-'): 
			printf("%f\n" ,(a-b)) ;
	break ;
	case ('*'): 
			printf("%f\n" ,(a*b)) ;
	break ;
	case ('/'): 
			printf("%f\n" ,(a/b)) ;
	break ;
	}
		
	return 0;
}

