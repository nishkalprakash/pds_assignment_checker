/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 3
Description : Program to compute electricity bill
*/

#include <stdio.h>
int main()

{
   float units,x, bill;
   printf("Enter the number of electric units.\n");
   scanf("%f", &units);
   if (units<=100)
   {
	x= 50;
        bill= 1.2*x;
   }
   else if (units>=100 && units<=200)
   {
	x= 50 + (units-100)*0.75;
	bill= 1.2*x;
   }
   else if (units>= 200 && units<=300)
   {
	x= 50+ 75 + (units-200)*1.2;
	bill= 1.2*x;
   }
   else if (units>= 300)
   {
	x= 50 + 75 + 120 + (units-300)*1.5;
        bill= 1.2*x;
   }
   printf("Your electricity bill is Rs %f.",bill);
   return 0;
}


