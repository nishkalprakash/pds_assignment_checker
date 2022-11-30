/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 4
Description : Program to print pattern based on user input.
*/

#include <stdio.h>
int main()

{
   int input,x=1,y,z=1;
   printf("Enter a number between [2,10].\n");
   scanf("%d",&input);
   while(z<=input)
   {
   while(x<=z)
   {
	y=x%2;
	if(y==0)
	{
	printf("0");
	}
        else
	{
	printf("1");
	}
	x++;
   }
   z++;
   x=1;
   printf("\n");
   }
   return 0;
}

