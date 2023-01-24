/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:9
Description: Program to calculate number of days between 2 dates.
*/

#include<stdio.h>

struct Date
{
	int dd;
	int mm;
	int yyyy;
};
struct Date *ptr;

struct Date ReadDate(struct Date x)
{
scanf("%d %d %d",&x.dd,&x.mm,&x.yyyy);
}

void PrintDate(struct Date x)
{
	printf("\n%d/%d/%d\n",x.dd,x.mm,x.yyyy);
}

void FindDays(struct Date x,struct Date y)
{
	int d[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int dl[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int days=0;
	if(x.yyyy=y.yyyy&&(x.yyyy%4!=0||x.yyyy==2000)) //ordinary
	{
		if(x.mm=y.mm)
			days=y.dd-x.dd;
		else
		{
			days=y.dd+(d[x.mm]-x.dd);
			for(int i=x.mm+1;i<y.mm;i++)
				days=days+d[i];
		}
	}
	else if(x.yyyy=y.yyyy&&(x.yyyy%4==0&&x.yyyy!=2000)) //leap
	{
		if(x.mm=y.mm)
			days=y.dd-x.dd;
		else
		{
			days=y.dd+(dl[x.mm]-x.dd);
			for(int i=x.mm+1;i<y.mm;i++)
				days=days+dl[i];
		}
	}
printf("%d",days);
}

int main()
{
	struct Date d1,d2;
	ReadDate(d1);
	ReadDate(d2);
	PrintDate(d1);
	PrintDate(d2);
	FindDays(d1,d2);
	return 0;
}