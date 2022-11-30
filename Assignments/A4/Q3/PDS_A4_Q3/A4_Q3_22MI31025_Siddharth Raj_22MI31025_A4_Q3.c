/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Assignment no:4
description:reverse digits name*/

#include <stdio.h>
int main()
{
	long int n;
	printf("Enter a number:");
	scanf("%ld",&n);//accept a number from user 
	int d;//extract digit
        if(n==0)
        {printf("Zero");}//print zero if number is zero as while loop will not be executed
        else
        {
	while (n!=0)
	{
	   d=n%10;//extracts last digit
	   switch (d)//switch statement to match the digits with its corresponding name
	   {
	       case 0:printf("Zero ");break;
           case 1:printf("One ");break;
           case 2:printf("Two ");break;
           case 3:printf("Three ");break;
           case 4:printf("Four ");break;
           case 5:printf("Five ");break;
           case 6:printf("Six ");break;
           case 7:printf("Seven ");break;
           case 8:printf("Eight ");break;
           case 9:printf("Nine ");break;
	   }//switch close
	   n=n/10;//removes last digit
        }//while loop close
        } 
    printf("\n");//change line
    return 0;
}

