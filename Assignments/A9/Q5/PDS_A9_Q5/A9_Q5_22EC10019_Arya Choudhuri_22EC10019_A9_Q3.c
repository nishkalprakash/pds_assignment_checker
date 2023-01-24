/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 9
	Description : Program to perform functions on date
*/

#include <stdio.h>
#include <math.h>

struct Date
{
	int day;
	int month;
	int year;
};

struct Date Readdate( )
{
	struct Date d;
	printf("Enter any date: ");
	scanf("%d%d%d", &d.day, &d.month , &d.year );
	return d;
}

void PrintfDate ( struct Date x)
{
	printf("%d/%d/%d\n", x.day , x.month , x.year ); 
}

void FindDays ( struct Date x, struct Date y)
{
	int res;
	if (x.month==y.month)
		res = fabs(x.day - y.day) + 365*fabs(x.year - y.year);
	else
	{
		res = 365*fabs(x.year - y.year);
		int A,B;
		if ((x.month==1) && (x.day>=1 && x.day<=31))
			A = x.day;
		else if ((x.month==2) && (x.day>=1 && x.day<=28))
			A = (x.day+31);
		else if ((x.month==3) && (x.day>=1 && x.day<=31))
			A = (x.day+31+28);
		else if ((x.month==4) && (x.day>=1 && x.day<=30))
			A = (x.day+31+28+31);
		else if ((x.month==5) && (x.day>=1 && x.day<=31))
			A = (x.day+31+28+31+30);
		else if ((x.month==6) && (x.day>=1 && x.day<=30))
			A = (x.day+31+28+31+30+31);
		else if ((x.month==7) && (x.day>=1 && x.day<=31))
			A = (x.day+31+28+31+30+31+30);
		else if ((x.month==8) && (x.day>=1 && x.day<=31))
			A = (x.day+31+28+31+30+31+30+31);
		else if ((x.month==9) && (x.day>=1 && x.day<=30))
			A = (x.day+31+28+31+30+31+30+31+31);
		else if ((x.month==10) && (x.day>=1 && x.day<=31))
			A = (x.day+31+28+31+30+31+30+31+31+30);
		else if ((x.month==11) && (x.day>=1 && x.day<=30))
			A = (x.day+31+28+31+30+31+30+31+31+30+31);
		else if ((x.month==12) && (x.day>=1 && x.day<=31))
			A = (x.day+31+28+31+30+31+30+31+31+30+31+30);

		if ((y.month==1) && (y.day>=1 && y.day<=31))
			B = y.day;
		else if ((y.month==2) && (y.day>=1 && y.day<=28))
			B = (y.day+31);
		else if ((y.month==3) && (y.day>=1 && y.day<=31))
			B = (y.day+31+28);
		else if ((y.month==4) && (y.day>=1 && y.day<=30))
			B = (y.day+31+28+31);
		else if ((y.month==5) && (y.day>=1 && y.day<=31))
			B = (y.day+31+28+31+30);
		else if ((y.month==6) && (y.day>=1 && y.day<=30))
			B = (y.day+31+28+31+30+31);
		else if ((y.month==7) && (y.day>=1 && y.day<=31))
			B = (y.day+31+28+31+30+31+30);
		else if ((y.month==8) && (y.day>=1 && y.day<=31))
			B = (y.day+31+28+31+30+31+30+31);
		else if ((y.month==9) && (y.day>=1 && y.day<=30))
			B = (y.day+31+28+31+30+31+30+31+31);
		else if ((y.month==10) && (y.day>=1 && y.day<=31))
			B = (y.day+31+28+31+30+31+30+31+31+30);
		else if ((y.month==11) && (y.day>=1 && y.day<=30))
			B = (y.day+31+28+31+30+31+30+31+31+30+31);
		else if ((y.month==12) && (y.day>=1 && y.day<=31))
			B = (y.day+31+28+31+30+31+30+31+31+30+31+30);
		res+= fabs(B-A);
		
		for (int i = x.year ; i < y.year ; i++)
		{
			if (i%4==0)
				res++;
		}
	}
	printf("Days = %d", res);
}

int main()
{
	struct Date X,Y;
	X = Readdate();
	Y = Readdate();

	printf("X = ");
	PrintfDate(X);

	printf("Y = ");
	PrintfDate(Y);

	FindDays(X,Y);

	return 0;
}
