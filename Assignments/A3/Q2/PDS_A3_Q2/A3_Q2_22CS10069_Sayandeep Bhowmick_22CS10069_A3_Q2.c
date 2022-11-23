/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 3
	Description : Inputs a number between 20 and 99 from the user and prints it in words
*/
#include <stdio.h>

int main()
{
	int num;
	printf("Enter a number between 20 and 99 \n");
	scanf("%d", &num);
	if (num<20 || num>99)
		printf("Wrong Input!!!! \n");
	else
	{
		int unit ,ten;
		unit=num%10;		/*Stores the unit's place and ten's place separately*/
		ten=num/10;
		switch(ten)
		{
			case 2:
			printf("Twenty ");
			break;
			case 3:
			printf("Thirty ");
			break;
			case 4:
			printf("Forty ");				/*Prints the ten's place in words*/
			break;
			case 5:
			printf("Fifty ");
			break;
			case 6:
			printf("Sixty ");
			break;
			case 7:
			printf("Seventy ");
			break;
			case 8:
			printf("Eighty ");
			break;
			case 9:
			printf("Ninety ");
		}
		switch(unit)
		{
			case 0:
			printf("\n");
			break;
			case 1:
			printf("One \n");
			break;
			case 2:
			printf("Two \n");
			break;
			case 3:
			printf("Three \n");
			break;
			case 4:
			printf("Four \n");
			break;
			case 5:
			printf("Five \n");				/*Prints the unit's place in words*/
			break;
			case 6:
			printf("Six \n");
			break;
			case 7:
			printf("Seven \n");
			break;
			case 8:
			printf("Eight \n");
			break;
			case 9:
			printf("Nine \n");
		}

	}
	return 0;
}
