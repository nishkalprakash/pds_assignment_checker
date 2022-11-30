/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 4
Description : Program to print sum of digits of number
*/

#include <stdio.h>
int main()

{
   int input,x,sum=0; 
   printf("Enter a number from [-999999,999999]\n");
   scanf("%d",&input);
   if(input==0)
   printf("0\n");
   else{
   while(input!=0)
   {	
	sum= sum + (input%10);
	input=input/10;
   }
   }
   printf("%d",sum);
   return 0;
}

