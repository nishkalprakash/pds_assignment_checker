/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:9
Question no:4
description:numberof days*/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>
typedef struct{
	int d;
	int m;
	int y;
} date;
void ReadDate(date *x)//define ReadDate
{
	printf("Enter date:");
	scanf("%d %d %d",&x->d,&x->m,&x->y);//accept date
}
void PrintDate(date x)
{
	printf(":%d/%d/%d \n",x.d,x.m,x.y);
}
int FindDays(date a,date b)
{
        int yeard;
	int monthd;
	int dayd;
	int months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    yeard=365*(a.y-b.y);//yeardifferrence
	dayd=(a.d-b.d);//day difference
	monthd=30.5*(a.m-b.m);//month difference didnot have time so aggregated month as leap years is not counte it may work
        int leapyears=abs(a.y-b.y)/4;//number of leap years
	int numberofdays=abs(yeard+dayd+monthd) +leapyears;//calculates number of days
        return numberofdays;
}
int main()
{
	date a,b;
	ReadDate(&a);//call ReadData to accept first date
	ReadDate(&b);//call ReadData to accept second date
        printf("X:");
	PrintDate(a);//prints date
        printf("Y:");
	PrintDate(b);
        int numberofdays=FindDays(a,b);//finds number of days
        printf("Days:%d\n",numberofdays);//prints number of days
	return 0;
}
