#include <stdio.h>
int main()
{
int day , month , year;

printf ("enter date ");
scanf ("%d %d %d", &day , &month , &year);

if (month <= 12)
{

if (year%4!=0 && (year%100!=0 || year%400!=0)) 
{
	if ((month == 1||month ==3||month ==5||month ==7||month ==8||month ==9||month ==11) && day<=31);
	printf("Valid Date\n");
}
else if(month = 2 && day <=28)
{
	  printf("Valid Date\n");
}
  
  else (day >=29);
  {
         printf("Invalid Date\n");
  }
  
  
  
  
  if (year%4==0 && (year%100 || year%400))
  {
	  ( (month ==4||month ==6||month ==10||month ==12) && day<=30);
	  printf ("Valid Date\n");
  }
  
  else if (month = 2 && day <=29)
  {
	 
	 printf ("Valid Date\n");
  }
  
  else 
  {
          printf("Invalid Date\n");
  }
  }
  }
  
  

    


