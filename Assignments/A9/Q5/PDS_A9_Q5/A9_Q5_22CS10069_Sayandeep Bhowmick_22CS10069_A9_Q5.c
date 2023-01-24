/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 9
	Description : Calculates the number of days between two dates
*/
#include <stdio.h>
#include <stdlib.h>

struct date
{
	int day,mon,year;
};

struct date ReadDate()
{
	struct date D;

	int  day, month, year;
	printf("Enter the date in DD MM YYYY format(with spaces in between) : ");
	scanf("%d%d%d", &day, &month, &year);



	if(day<0 || month<0 || month >12)
	{
		printf("Invalid Date!!!!\n");
		exit(0);							//directly stops any further execution
	}

	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)			/*Checks whether the entered date and month is valid*/
		if(day>31)
		{
			printf("Invalid Date!!!!\n");
			exit(0);
		}

	if(month==4 || month==6 || month==9 || month==11)
		if(day>30)
		{
			printf("Invalid Date!!!!\n");
			exit(0);
		}

	if(month==2)
	{
		if(day>29)
		{
			printf("Invalid Date!!!!\n");
			exit(0);
		}
		else if (day==29 && year%4!=0)				//special case for leap year
		{
			printf("Invalid Date!!!!\n");
			exit(0);
		}
	}


	D.day=day, D.mon=month, D.year=year;

	return D;
}

void PrintDate(struct date a)
{
	if(a.day<10)	printf("0%d/", a.day);			//for proper printing format
	else			printf("%d/", a.day);

	if(a.mon<10)	printf("0%d/", a.mon);
	else			printf("%d/", a.mon);

	printf("%d\n", a.year);
}

int daysifsameyear (int day, int month)
{
	int count;

	switch(month)				//count variable counts the number of days from the beginning of the year 
	{
		case 12:
		count=334+day;
		break;
		case 11:
		count=304+day;
		break;
		case 10:
		count=273+day;
		break;
		case 9:
		count=243+day;
		break;
		case 8:
		count=212+day;
		break;
		case 7:
		count=181+day;
		break;
		case 6:
		count=151+day;
		break;
		case 5:
		count=120+day;
		break;
		case 4:
		count=90+day;
		break;
		case 3:
		count=59+day;
		break;
		case 2:
		count=31+day;
		break;
		case 1:
		count=day;
		break;
	}

	return count;
}

void Finddays(struct date x, struct date y)
{
	int d1=daysifsameyear(x.day, x.mon);
	int d2=daysifsameyear(y.day, y.mon);

	int days;

	if(x.year!=y.year)
	{
		days=d2+365-d1;

		if(x.year%4==0)								//special case for leap year
			if(x.mon<=2)
				days++;

		if(y.year%4==0)								//special case for leap year
			if(y.mon>2)
				days++;

		for (int i = x.year+1; i < y.year; ++i)
		{
			if(i%4==0)
				days+=366;
			else
				days+=365;
		}

	}
	else
	{
		days=d2-d1;
		if(x.year%4==0 && (x.mon<=2 &&y.mon>2))		//special case for leap year
			days++;
	}

	printf("Days = %d\n\n", days);

}

int main()
{
	printf("\n");

	struct date X, Y;
	X=ReadDate();
	Y=ReadDate();

	printf("\nX = ");
	PrintDate(X);
	printf("Y = ");
	PrintDate(Y);

	if(X.year>Y.year)						//if X is after Y, swaps the two dates
	{
		struct date temp=X;
		X=Y;
		Y=temp;
	}

	else if(X.year==Y.year)
	{
		if (X.mon>Y.mon)
		{
			struct date temp=X;
			X=Y;
			Y=temp;
		}

		else if (X.mon==Y.mon)
		{
			if (X.day>Y.day)
			{
				struct date temp=X;
				X=Y;
				Y=temp;
			}
		}
	}

	Finddays(X,Y);

	return 0;
}