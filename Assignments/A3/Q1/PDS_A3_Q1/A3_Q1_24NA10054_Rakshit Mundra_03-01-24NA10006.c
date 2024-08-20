#include <stdio.h>

int main()
{
	int day, month, year;
	int monthCheck, dayCheck;
	printf("Enter date(DD MM YYYY): "); scanf("%d%d%d", &day, &month, &year);
	
	if (!((month>0)&&(month<13)))
		{
		printf("\nINVALID DATE\n");			//month check
		return 0;
		}
	else monthCheck=1;
	
	
	if (month!=2)
	switch (month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:									// non feb check
		case 10:
		case 12: if (!((day>0)&&(day<32))) {printf("\nINVALID DATE\n"); return 0;}
			else dayCheck=1;
	
		
		case 4:
		case 6:
		case 9:
		case 11: if  (!((day>0)&&(day<31))) {printf("\nINVALID DATE\n"); return 0;}
		} else dayCheck=1;
	
	if (year%4 == 0)
		{
		if (month==2) 
			{
			if (!((day>0)&&(day<30))) 				//Leap year check
				{
				printf("\nINVALID DATE\n"); return 0;
				}
			}
		else dayCheck=1;
		}
	else
		{
		if (month==2) 
			{
			if (!((day>0)&&(day<29))) 				//Non leapyear feb check
				{
				printf("\nINVALID DATE\n"); return 0;
				}
			}
		else dayCheck=1;
		}
	if (dayCheck && monthCheck) printf("\nVALID DATE\n");		
	return 0;		
}
