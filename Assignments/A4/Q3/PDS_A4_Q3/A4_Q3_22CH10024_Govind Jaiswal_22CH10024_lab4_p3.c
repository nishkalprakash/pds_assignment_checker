/*
Name : Govind Jaiswal
Roll no : 22CH10024
Assignment no 4
Description : Program to print digits in reverse order in words
*/

#include <stdio.h>

int main()
{
	int n;
	int d,i=10;
	printf("Enter a number between 0 and 9999999999 :");     //asking for appropriate input from the user 
	scanf("%d",&n);
	while(i>0)
	{
		d = n%10;
		n = n/10;
		i--;
		switch(d)
		{
			case 0 : printf("Zero ");    //Giving instructions for final printing
				 break;
			case 1 : printf("One ");
				 break;
			case 2 : printf("Two ");
				 break;
			case 3 : printf("Three ");
				 break;
			case 4 : printf("Four ");
				 break;
			case 5 : printf("Five ");
				 break;
			case 6 : printf("Six ");
				 break;
			case 7 : printf("Seven ");
				 break;
			case 8 : printf("Eight ");
				 break;
			case 9 : printf("Nine ");
				 break;
			default : printf("INVALID INPUT");
				 break;
		}
	}
	return 0;
}
	
