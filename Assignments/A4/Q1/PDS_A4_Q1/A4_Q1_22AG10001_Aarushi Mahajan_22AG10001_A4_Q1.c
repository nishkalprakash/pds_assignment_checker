/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 4
Description : Program to display factors of given number
*/

#include <stdio.h>
#include <math.h>
int main()

{
   int input, i=1,x,y;
   printf("Enter a number between [-999999,999999].\n");
   scanf("%d",&input);
   if(input==0)
   printf("0");
   if(input<0)
   {
   y= input*-1;
   while(i<=y)
   {
	x=y%i;
	if(x==0)
	{printf("%d \t",i);
	i++;}
	else
	i++;
   }
   }
   else
   {
   y= input*-1;
   while(i<=y)
   {
	x=y%i;
	if(x==0)
	{printf("%d \t",i);
	i++;}
	else
	i++;
   }
   }
   return 0;
}
	
	  

