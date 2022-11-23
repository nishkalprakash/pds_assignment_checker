/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 3
	Description : Program to print a valid time
*/

#include <stdio.h>

int main()
{
	int SS,MM,HH;
	printf("Enter seconds:");
	scanf("%d",&SS);
	printf("Enter minutes:");
	scanf("%d",&MM);
	printf("Enter hours:");
	scanf("%d",&HH);

	if (( HH>=0 && HH<24) && ( MM>=0 && MM<60 ) && ( SS>=0 && SS<60 ))
		printf("Valid time - %d:%d:%d",HH,MM,SS);
	else
		printf("Invalid time");
	
	return 0;
}

