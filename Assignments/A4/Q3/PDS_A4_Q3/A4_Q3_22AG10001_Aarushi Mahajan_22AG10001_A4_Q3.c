/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 4
Description : Program to display digits in reverse in words.
*/

#include <stdio.h>
int main()

{
   long int input,x;
   printf("Enter a number between [0,9999999999].\n");
   scanf("%ld",&input);
   if(input==0)
   printf("Zero");
   else
   {
   while(input!=0)
   {
	x= input%10;
	switch(x)
	{
	  case 0:
	  printf("Zero ");
	  break;
	  case 1:
	  printf("One ");
	  break;
	  case 2:
	  printf("Two ");
	  break;
	  case 3:
	  printf("Three ");
	  break;
	  case 4:
	  printf("Four ");
	  break;
	  case 5:
	  printf("Five ");
	  break;
	  case 6:
	  printf("Six ");
	  break;
	  case 7:
	  printf("Seven ");
	  break;
	  case 8:
	  printf("Eight ");
	  break;
	  case 9:
	  printf("Nine ");
	  break;
	}
	input= input/10;
   }
   }
   return 0;
}

