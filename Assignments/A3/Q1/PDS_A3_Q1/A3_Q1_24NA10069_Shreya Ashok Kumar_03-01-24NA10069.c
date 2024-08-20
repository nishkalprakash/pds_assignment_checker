#include <stdio.h>
int main()
{
int day,month,year;
printf("Enter day month and year in DD MM YYYY format");
scanf("%d %d %d",&day,&month,&year);
switch(month){
case 01:
case 03:
case 05:
case 07:
case 8:
case 10:
case 12: if (day<=31)printf("valid date");
else printf("invalid date");
break;
case 02:if((year/4 ==0 && year%100!=0)||year/400==0)
{
if (day<=29)printf("valid date");
else printf("invalid date");}
else if(day<=28)printf("valid date"); else printf("invalid date");
break;
case 04:
case 06:
case 9:
case 11:if(day<=30)printf("valid date");
else printf("invalid date");
break;
return 0;
}
}
