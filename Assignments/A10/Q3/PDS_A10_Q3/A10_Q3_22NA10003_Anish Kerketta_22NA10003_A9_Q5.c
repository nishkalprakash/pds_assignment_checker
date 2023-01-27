#include <stdio.h>
/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 9-5
Description:To calculate the days between two given dates*/
typedef struct date{
int dd;
int mm;
int yyyy;
}date;


struct date ReadDate(date x)							//Function to read date
{
scanf("%d %d %d",&x.dd,&x.mm,&x.yyyy);
return(x);
}

void PrintDate(date x,date y)							//Function to print date
{
	printf("X=%d/%d/%d\n",x.dd,x.mm,x.yyyy);
	printf("Y=%d/%d/%d\n",y.dd,y.mm,y.yyyy);
}

void finddays(date x,date y)							//Function to find number of days in between
{
	date z;
	int i;
	z.yyyy=y.yyyy-x.yyyy;
	z.mm=y.mm-x.mm;
	z.dd=y.dd-x.dd;
	if(z.yyyy<0)
	z.yyyy=z.yyyy*(-1);
	if(z.mm<0)
	z.mm=z.mm*(-1);
	if(z.dd<0)
	z.dd=z.dd*(-1);
	int leap=0;
	if(z.yyyy>3)
	{leap=z.yyyy/4;}
	int max=0,min=0,tday;
	if(y.mm!=x.mm)
	{
	if(y.mm>x.mm)
	{max=y.mm;
	min=x.mm;}
	else
	{max=x.mm;
	min=y.mm;}}
	for(i=min;i<=max;i++)
	{
	if(i==1)						//calculation of total number of days
	tday+=0;
	else if(i==2)
	tday+=28;
	else if(i==3)
	tday+=31;
	else if(i==4)
	tday+=30;
	else if(i==5)
	tday+=31;
	else if(i==6)
	tday+=30;
	else if(i==7)
	tday+=31;
	else if(i==8)
	tday+=31;
	else if(i==9)
	tday+=30;
	else if(i==10)
	tday+=31;
	else if(i==11)
	tday+=30;
	else if(i==12)
	tday+=31;
	else 
	tday+=0;
	}
	int days=z.dd+tday+(365*z.yyyy)+leap;
	printf("Days = %d\n",days);
}

int main()							//main function to call functions
{
	date x,y;
	printf("X=");
	x=ReadDate(x);
	printf("Y=");
	y=ReadDate(y);
	PrintDate(x,y);
	finddays(x,y);
	
}

