/*

Section 14

Roll no : 22CE10065

Name : Saloni Shaw

Assignment 9

Description - Program to 
*/

#include <stdio.h>
struct Date
{
int date;
int month;
int year;
};
struct Date ReadDate()
{
struct Date D1;
printf("Enter date\n");
scanf("%d %d %d",&D1.date,&D1.month,&D1.year);
return D1;
}
void PrintDate(struct Date x)
{
printf("%d/%d/%d",&x.date,&x.month,&x.year);
}
void FindDays(struct Date x,struct Date y)
{
int days=0;
if(x.month=y.month)
{
days=x.date-y.date;
if(days<0)
days=0-days;
printf("Days=%d", days);
}
if((x.year=y.year)&&(x.month!=y.month))
{
for(i=x.month+1;i<y.month;i++)
{
if ((i==1)||(i==3)||(i==5)||(i==8||(i==10)||(i==12))
days=days + 31;
else if ((i==4)||(i==6)||(i==9)||(i==11))
days=days+30;
else
{
if((x.year==2000)||(x.year==2004)||(x.year==2008)||(x.year==2016)||(x.year==2020))
days=days+29;
else
days=days+28;
}
}
i=x.month;
if ((i==1)||(i==3)||(i==5)||(i==8||(i==10)||(i==12))
days=days+(31-x.date);
else if  ((i==4)||(i==6)||(i==9)||(i==11))
days=days+(30-x.date);
else
{
if((x.year==2000)||(x.year==2004)||(x.year==2008)||(x.year==2016)||(x.year==2020))
days=days+(29-x.date);
else
days=days+(28-x.date);
}
days=days+y.date;
printf("days=%d", days);
}
if(x.year!=y.year)
{
for(int i=x.month+1;i<y.month;i++)
{
if ((i==1)||(i==3)||(i==5)||(i==8||(i==10)||(i==12))
days=days + 31;
else if ((i==4)||(i==6)||(i==9)||(i==11))
days=days+30;
else
{
if((x.year==2000)||(x.year==2004)||(x.year==2008)||(x.year==2016)||(x.year==2020))
days=days+29;
else
days=days+28;
}
}
i=x.month;
if ((i==1)||(i==3)||(i==5)||(i==8||(i==10)||(i==12))
days=days+(31-x.date);
else if  ((i==4)||(i==6)||(i==9)||(i==11))
days=days+(30-x.date);
else
{
if((x.year==2000)||(x.year==2004)||(x.year==2008)||(x.year==2016)||(x.year==2020))
days=days+(29-x.date);
else
days=days+(28-x.date);
}
days=days+y.date;
printf("days=%d", days);
}
}
int main ()
{
struct Date d1,d2;
d1=ReadDate();
d2=ReadDate();
printf("X= ");
PrintDate(d1);
printf("Y= ");
PrintDate(d2);
FindDays(d1,d2);
return 0;
}
