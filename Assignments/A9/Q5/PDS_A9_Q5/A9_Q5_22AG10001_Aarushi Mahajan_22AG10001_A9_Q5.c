/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 9
Description : Program to compute net salary of employee.
*/

#include <stdio.h>


struct date {
  	int dd;
	int mm;
	int yyyy;
}x,y;

void ReadDate()
{
   printf("X= ");
   scanf("%d %d %d",&x.dd, &x.mm, &x.yyyy);
   printf("\nY= ");
   scanf("%d %d %d",&y.dd, &y.mm, &y.yyyy);
}

void PrintDate()
{
   printf("\nX= %d/%d/%d",x.dd,x.mm,x.yyyy);
   printf("\nY= %d/%d/%d",y.dd,y.mm,y.yyyy);
}

int FindDays()
{
   int days;
   days= (y.yyyy-x.yyyy)*365 + (y.mm-x.mm)*30 + (y.dd-x.dd);
   if (days<0)
   days= days*-1;
   return days;
}
   
int main()
{
   
   ReadDate();

   PrintDate();
 
   printf("\nDays = %d",FindDays());

   return 0;
}


	
