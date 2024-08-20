#include<stdio.h>
int main()
{
	int date,month,year;
	printf("enter the date in DD MM YYYY format\n");
	scanf("%d%d%d",&date,&month,&year);
	if((month==1||3||5||7||8||10||12) && date<=31 && date>=1)
	{
		printf("valid date\n");
	}	
	
	else if((month==1||3||5||7||8||10||12) && (date>=31 || date<=1))
		printf("invalid date\n");
	else if((month==4||6||9||11) && date<=30 && date>=1)
	{
		printf("valid date\n");	
	}
	else if ((month==4||6||9||11) && (date>=30 || date<=1))
		printf("invalid date");
	else if(month==2 && year%100==0)
	{       
	        if(year%400==0 && (date>=1 && date<=29))
		printf("valid date\n");	
		else if ( year%400==0 && (date>29 || date<1))
	        printf("invalid date");
	}
	else if (month==2 && year%4==0 && date<=29 && date>=1)
		printf("valid date");
	else if (month==2 && year%4==0 && (date>29||date<1))
		printf("invalid date");
	else 
		printf("invalid date");
return(0);

	
		
}
	
