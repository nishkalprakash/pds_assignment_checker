#include <stdio.h>
int main()
{
int day,month,year;
printf("day =");
scanf("%d",&day);
printf("month =");
scanf("%d",&month);
printf("year =");
scanf("%d",&year);

if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day > 0 && day <32 ))
printf("valid date");
else if
    ((month == 4 || month == 6 || month == 9 || month == 11) && (day > 0 && day <31 ))
printf("valid date");
else if  
   (((year % 4 == 0) || (year % 400== 0 && year % 100 != 0)) && (day == 29 && month == 2))
    
printf("valid date");
else if
    (( month == 2) && (day > 0 && day < 29))
printf("valid date");    

else
printf("invalid date");
return 0;}



	

