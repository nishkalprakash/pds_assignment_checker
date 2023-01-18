/*
Dhavale Surabhi
22ME10026
LAB10
Section 14
Question 4
*/

#include<stdio.h>
typedef struct Date
{
int day;
int month;
int year;
}Date;


Date ReadDate()
{
        Date d1;
        printf("Enter Date:");
        scanf("%d %d %d",&d1.day,&d1.month,&d1.year);
        return d1;
}


void printDate(Date x)
{
printf("%d %d %d\n",x.day,x.month,x.year);
}

void FindDays(Date x, Date y)
{
int monthDays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int y1=x.year;
int y2=y.year;
long int n1=x.year*365+x.day;
if (x.month<=2)
y1--;
int lyears1=(v1/4+v1/400-v1/100);
for (int i=0;i<x.month-1;i++);
n1+=monthDays[i];
n1+=lyear1;

long int n2=y.year*365+y.day;
if (y.month<=2)
y2--;
int lyear2=(v2/4+v2/400-v2/100);
for (int i=0;i<y.month-1;i++);
n2+=monthDays[i];
n2+=lyear2;

printf("Days=%ld\n",(n2-n1));
}
int main()
{
int i;
Date d1=ReadDate();
Date d2=ReadDate();
printf("X= ");
printDate(d1);
printf("Y= ");
printDate(d2);
FindDays(d1,d2);
return 0;
}
