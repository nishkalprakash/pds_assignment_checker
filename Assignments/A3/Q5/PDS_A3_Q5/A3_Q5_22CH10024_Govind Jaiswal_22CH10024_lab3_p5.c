/*
Section 14
Roll no. :22CH10024
Name : Govind Jaiswal
Assignment no. :3
Description : Program to print a day in words
*/

int main()
{
	int date,month;
	printf("Enter day and month : ");
	scanf("%d%d",&date,&month);
	if(month > 12 && date > 31)
	printf("Invalid date");
	else if (month == 1 &&  
