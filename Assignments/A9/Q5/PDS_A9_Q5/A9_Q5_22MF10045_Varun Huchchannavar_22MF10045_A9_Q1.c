#include <stdio.h>
#include <stdlib.h>

typedef struct date
{
	int day;
	int month;
	int year;
} Date;

Date ReadDate()
{
	Date dt;
   printf("Enter the day");
   scanf("%d",&dt.day);
   printf("Enter the month");
   scanf("%d",&dt.month);
   printf("Enter the year");
   scanf("%d",&dt.year);
   return dt;
}

void PrintDate (Date x, Date y)
{
	
	printf("X= %d/%d/%d \n",x.day,x.month,x.year);
	printf("Y= %d/%d/%d \n",y.day,y.month,y.year);
}


void FindDays (Date x, Date y)
{
	
     
}
int main()
{
	Date X;
	Date Y;
	 X = ReadDate();
	 Y = ReadDate();
	PrintDate(X,Y);
	return 0;
}