/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 3
Description : Program to read and display time
*/

#include <stdio.h>
#include <math.h>
int main()

{
	int SS;
	int MM;
	int HH;
   printf("Enter the second, minute and hour.\n");
   scanf("%d %d %d", &SS, &MM, &HH);
   if (SS<=59 && MM<=59 && HH<=23)
   {
	printf("Valid time-%d:%d:%d",HH, MM, SS);
    }
   else 
{
   printf("Invalid time");
}
   return 0;
}

