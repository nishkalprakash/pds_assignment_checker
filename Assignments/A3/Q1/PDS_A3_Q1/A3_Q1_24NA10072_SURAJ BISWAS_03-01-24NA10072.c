/* C Program to check if the date is valid or not*/
#include<stdio.h>

int main()
{	//take date is input
	int day,month,year;
	printf("Enter a date:");
	scanf("%d %d %d",&day,&month,&year);
	
	//if the year is leap year
	if((year%4==0&&year%100!=0)||(year%400==0&&year%100==0))
	{
		 if(month<=12&&month>0)
		 {
			if( month==02)
			{
				if(day>0&&day<=29)
				{
					printf("Valid date");
				}
				else
					printf("Invalid date");
			}
			else if(month==1&&month==3&&month==5&&month==7&&month==8&&month==10&&month==12)
				{
				if(day>0&&day<=31)
				{
					printf("Valid date");
				}
				else
					printf("Invalid date");
				}
			else if(month==2&&month==4&&month==6&&month==9&&month==11)
				{
				if(day>0&&day<=30)
				{
					printf("Valid date");
				}
				else
					printf("Invalid date");
				}
			else
				printf("Invalid date");
				
		 }
		 else
		 	printf("Invalid date");
	}
	
	//if the year is not a leap year
	else
	{
		if(month<=12&&month>0)
		{
			if(month==1&&month==3&&month==5&&month==7&&month==8&&month==10&&month==12)
				{
				if(day>0&&day<=31)
				{
					printf("Valid date");
				}
				else
					printf("Invalid date");
				}
			else if(month==2&&month==4&&month==6&&month==9&&month==11)
				{
				if(day>0&&day<=30)
				{
					printf("Valid date");
				}
				else
					printf("Invalid date");
				}
			else
				printf("Invalid date");
		}
	}
	return 0;
}
