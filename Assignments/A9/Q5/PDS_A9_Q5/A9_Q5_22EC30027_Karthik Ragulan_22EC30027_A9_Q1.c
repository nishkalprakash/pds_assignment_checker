#include<stdio.h>
struct Date
//structure that inputs the date
{
int date;
int month;
int year;
};
struct Date ReadDate()
{
struct Date D;
printf("enter date: ");
scanf("%d %d %d",&D.date,&D.month,&D.year);
return D;
};
void PrintDate(struct Date D);//function to print the given date
void FindDays(struct Date A,struct Date B);//function to find the number of days between two dates
int main()
{
struct Date A,B;
printf("enter the 1st date: \n");
A=ReadDate();
printf("enter the 2nd date: \n");
B=ReadDate();
PrintDate(A);
printf("\n");
PrintDate(B);
FindDays(A,B);
return 0;
}
void PrintDate(struct Date D)
{
printf("%d/%d/%d",D.date,D.month,D.year);//prints the date
}


void FindDays(struct Date A,struct Date B)
{
struct Date C;
int DAY;
if(B.year>A.year || B.year==A.year && B.month>A.month)
{
C.year=B.year-A.year;
C.month=B.month-A.month;
if(A.date>B.date)
C.date=A.date-B.date;
else
C.date=B.date-A.date;
}


else if(B.year>A.year || B.year==A.year && A.month>B.month)
{
C.year=B.year-A.year;
C.month=A.month-B.month;
if(A.date>B.date)
C.date=A.date-B.date;
else
C.date=B.date-A.date;
}


else if(A.year>B.year || B.year==A.year && A.month>B.month)
{
C.year=A.year-B.year;
C.month=A.month-B.month;
if(A.date>B.date)
C.date=A.date-B.date;
else
C.date=B.date-A.date;
}


else
{
C.year=B.year-A.year;
C.month=B.month-A.month;
if(A.date>B.date)
C.date=A.date-B.date;
else
C.date=B.date-A.date;
}
DAY=(C.year*365)+(C.month*30)+C.date;
printf("\n");
printf("Days = %d",DAY);
}
