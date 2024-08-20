#include <stdio.h>
int main()
{
	int date,month,year;
	float ly;
	
	printf("Enter date - ");
	scanf("%d%d%d", &date,&month,&year);
	
	if (month >= 1 && month <= 12)
	{
		if (month == 1 || month == 3 ||month == 5 ||month == 7 ||month == 8 || month == 10 ||month == 12)
		{
			if (date >= 1 && date <= 31)
			{
				printf("Valid Date");
			}	
			else
			{
				printf("InValid Date");
			}
		}	
		else if (month == 4 || month == 6 ||month == 9 ||month == 11)
		{
			if (date >= 1 && date <= 30)
			{
				printf("Valid Date");
			}
			else
			{
				printf("InValid Date");
			}
		}
		else if (month == 2)
		{
			ly = year%4;
			
			if (ly == 0)
			{
				if (date >= 1 && date <= 29)
				{
					printf("Valid Date");
				}
				else
				{
					printf("InValid Date");
				}
			}
			else
			{
				if (date >= 1 && date <= 28)
				{
					printf("Valid Date");
				}
				else
				{
					printf("InValid Date");
				}
			}
		}
	}
	else
	{
		printf("InValid Date");
	}
	return 0;
}
