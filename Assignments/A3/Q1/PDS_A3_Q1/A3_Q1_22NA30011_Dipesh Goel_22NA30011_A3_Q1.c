#include <stdio.h>
/*
	SECTION 14
	ROLL NO. 22NA30011
	NAME : DIPESH GOEL
	Assignment No. 3
	Description : The program checks that the entered time of a day is Valid or not

*/


int main()

{

	int SS, MM, HH;									//declaration of variables
	printf("Enter time in 'SS MM HH' format :");
	scanf("%d %d %d",&SS, &MM, &HH);						//input time from user
	
	if (SS<60 && MM<60 && HH<24) printf("Valid time - %d:%d:%d\n",HH,MM,SS);	//Checking Valid or Invalid
	else printf("Invalid time\n");

	return 0;
}

