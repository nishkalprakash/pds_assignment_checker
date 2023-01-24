/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 9
Description : Program to find the nuumber of days between two given dates
*/

#include<stdio.h>

typedef struct Date{
	int day;
	int month;
	int year;
}Date;

Date temp1;
Date temp2;

Date ReadDate()
{
	//Date temp1;
	//Date temp2;

	scanf("%d %d %d",&temp1.day,&temp1.month,&temp1.year);
	scanf("%d %d %d",&temp2.day,&temp2.month,&temp2.year);

	printf("X = %d/%d/%d\n",temp1.day,temp1.month,temp1.year);
	printf("Y = %d/%d/%d\n",temp2.day,temp2.month,temp2.year);
}

/*int PrintDate()
{
	printf("%d/%d/%d",temp.day,temp.month,temp.year);
	return 0;
}
*/

/*int FindDays()
{
	int sum = 0;
	if(temp1.year != temp2.year)
		sum = sum + (temp2.year - temp1.year) * 365;
		if(temp2.year - temp1.year > 4)
			sum = sum + (temp2.year - temp1.year)/4;
	if(temp1.day != temp2.day)
		sum = sum + (temp2.year - temp1.year);

	if(temp1.month != temp2.month)
		sum = sum + (temp2.year - temp1.year) * 30;
	return sum;
}
*/
int main()
{
	printf("Enter two dates (DD MM YYYY): \n");

	ReadDate();
	//printf("X = %d/%d/%d",temp1.day,temp1.month,temp1.year);
	//PrintDate();

	//ReadDate();
	//printf("\nY = %d/%d/%d",temp2.day,temp2.month,temp2.year);
	//PrintDate();
	printf("Days = %d",FindDays);
}