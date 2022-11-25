/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Assignment .no  : 3
Description : checking if time is valid or not and printing the time in HHMMSS form 
*/ 




# include <stdio.h>
# include <stdlib.h>


int main()
{
	// asking user to enter time
	int H, M, S ;
	printf("\n Enter the time in HH MM SS: ");
	scanf("%d %d %d", &H,&M,&S);

	// checking the entred time is valid or not and printint if its valid

	if( (H < 24) && (H >= 0) && (M <60) && (M>=0) &&  (S <60) && (S>=0) ) 
		printf(" \n The time entred is valid, \n the Time entred is %d:%d:%d" , H ,M, S);
	else
		printf(" The time entred is invalid " );


	return 0;
}
