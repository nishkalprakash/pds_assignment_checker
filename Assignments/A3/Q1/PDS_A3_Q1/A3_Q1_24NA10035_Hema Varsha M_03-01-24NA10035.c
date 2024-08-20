#include <stdio.h>
int main()
{
int day,month,year;
printf("enter day:");
scanf("%d",&day); 
printf("\nenter month:");
scanf("%d",&month); 
printf("\nenter year:");
scanf("%d",&year);
if( (day<1 || day>31) || (month<1 || month>12)) 
{
printf("%d %d %d \t invalid date\n",day,month,year);
}
else{
if (month==2) //feb
{
if (year%4==0) // leap year
{
if  (day>=1 && day<=29)
printf("%d %d %d \t valid date\n",day,month,year);
else
printf("%d %d %d \t invalid date\n",day,month,year);
}
else
{
if(day>=1 && day<=28)
printf("%d %d %d \t valid date\n",day,month,year);
else
printf("%d %d %d \t invalid date\n",day,month,year);
}
}
else if (month%2==0 && month>=8) // aug oct dec 31 days
{
if (day>=1 && day<=31)
printf("%d %d %d \t valid date\n",day,month,year);
else
printf("%d %d %d \t invalid date\n",day,month,year);
}

else if (month%2!=0 && month<=7)// jan  mar may jul 31 days
{
if (day>=1 && day<=31)
printf("%d %d %d \t valid date\n",day,month,year);
else
printf("%d %d %d \t invalid date\n",day,month,year);
}

else // apr jun sept nov 30 days
{
if (day>=1 && day<=30)
printf("%d %d %d \t valid date\n",day,month,year);
else
printf("%d %d %d \t invalid date\n",day,month,year);
}
}
return 0;
}
