#include <stdio.h>
int main()
{
	int day, month, year;
	printf("\nPlease input the date in the DD MM YYYY form:");
	scanf("%d %d %d", &day, &month, &year);
	if (year % 4 == 0)
	{
		if (month == 2)
		{
			if (day>=1 && day<=29)
			{
				printf("\nThe date is valid.");
				printf("\nThe date is %d February %d.\n", day, year);
			}
			else
			{
				printf("\nThe date is invalid.\n");
			}
		}
	}
	else
	{
	if (month == 2)
		{
			if (day>=1 && day<=28)
			{
				printf("\nThe date is valid.");
				printf("\nThe date is %d February %d.\n", day, year);
			}
			else
			{
				printf("\nThe date is invalid.\n");
			}
		}
	}
	
		if (month == 1)
		{
			if (day>=1 && day<=31)
			{
				printf("\nThe date is valid");
				printf("\nThe date is %d January %d.\n", day, year);
			}
			else
			{
				printf("\nThe date is invalid.\n");
			}
		}
	if (month == 3)
		{
			if (day>=1 && day<=31)
			{
				printf("\nThe date is valid.");
				printf("\nThe date is %d March %d.\n", day, year);
			}
			else
			{
				printf("\nThe date is invalid.\n");
			}
		}
	
	if (month == 4)
		{
			if (day>=1 && day<=30)
			{
				printf("\nThe date is valid.");
				printf("\nThe date is %d April %d.\n", day, year);
			}
			else
			{
				printf("\nThe date is invalid.\n");
			}
		}
	
	if (month == 5)
		{
			if (day>=1 && day<=31)
			{
				printf("\nThe date is valid.");
				printf("\nThe date is %d May %d.\n", day, year);
			}
			else
			{
				printf("\nThe date is invalid.\n");
			}
		}
	
	if (month == 6)
		{
			if (day>=1 && day<=30)
			{
				printf("\nThe date is valid.");
				printf("\nThe date is %d June %d.\n", day, year);
			}
			else
			{
				printf("\nThe date is invalid.\n");
			}
		}
	
	if (month == 7)
		{
			if (day>=1 && day<=31)
			{
				printf("\nThe date is valid.");
				printf("\nThe date is %d July %d.\n", day, year);
			}
			else
			{
				printf("\nThe date is invalid.\n");
			}
		}

	if (month == 8)
		{
			if (day>=1 && day<=31)
			{
				printf("\nThe date is valid.");
				printf("\nThe date is %d August %d.\n", day, year);
			}
			else
			{
				printf("\nThe date is invalid.\n");
			}
		}
	
	if (month == 9)
		{
			if (day>=1 && day<=30)
			{
				printf("\nThe date is valid.");
				printf("\nThe date is %d September %d.\n", day, year);
			}
			else
			{
				printf("\nThe date is invalid.\n");
			}
		}
	
	if (month == 10)
		{
			if (day>=1 && day<=31)
			{
				printf("\nThe date is valid.");
				printf("\nThe date is %d October %d.\n", day, year);
			}
			else
			{
				printf("\nThe date is invalid.\n");
			}
		}
	
	if (month == 11)
		{
			if (day>=1 && day<=30)
			{
				printf("\nThe date is valid.");
				printf("\nThe date is %d November %d.\n", day, year);
			}
			else
			{
				printf("\nThe date is invalid.\n");
			}
		}
	
	if (month == 12)
		{
			if (day>=1 && day<=31)
			{
				printf("\nThe date is valid.");
				printf("\nThe date is %d December %d.\n", day, year);
			}
			else
			{
				printf("\nThe date is invalid.\n");
			}
		}
	
	return 0;	
}
