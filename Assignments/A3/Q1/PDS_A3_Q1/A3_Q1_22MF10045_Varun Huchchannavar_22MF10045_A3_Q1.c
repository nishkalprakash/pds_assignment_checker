/* 
Section 14
Roll No : 22MF10045
Name: Varun Huchchannavar
Assignment No: 3
Description : Program to check points
*/

#include<stdio.h>
int main()
{
	int HH;
	int MM;
	int SS;
	
	printf("Enter the hour");
	scanf("%d",&HH);
	printf("Enter the minute");
	scanf("%d",&MM);
	printf("Enter the seconds");
	scanf("%d",&SS);
        if(HH<24 && MM<60 && SS<60)
	printf("Valid time: %d:%d:%d",HH,MM,SS);
        else 
	printf("Invalid time");
	return 0;
}
