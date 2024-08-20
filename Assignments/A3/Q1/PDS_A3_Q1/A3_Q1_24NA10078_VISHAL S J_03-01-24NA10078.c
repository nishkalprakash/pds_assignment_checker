#include<stdio.h>
int main()
{
	int day, month, year;
	printf("Enter a valid date of form DD MM YYYY");
	scanf("%d %d %d", &day, &month, &year);
	
	if (month<=12)
	{
         	if (month == 2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
	        {
	        	if( day == 29)
	        	printf("Valid date");
	        	else 
	        	printf("Indvalid date");
	        }
	        else if ((month == 1 || month ==3 || month ==5 || month ==7 || month ==8 || month ==10 || month ==12) && day <= 31)
		{
			printf("Valid date");
		}
		else if ((month == 4 || month ==6 || month ==9 || month ==11) && day <= 30)
		{
			printf("Valid date");
		}
		else if ((month == 2) && day == 28)
		{
			printf("Valid date");
		}
		else {
			printf("Invalid date");
		     }
	}
	
	else 
	    printf("Invalid date");
	return 0;
}
