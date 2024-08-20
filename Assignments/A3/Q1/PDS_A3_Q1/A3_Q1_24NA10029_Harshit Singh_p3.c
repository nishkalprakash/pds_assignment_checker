#include<stdio.h>

int main()

{
  int day, month, year;
  printf("enter the date = ");
  scanf("%d %d %d",&day,&month,&year);
  if ((day<=30)&&(month<=12)&&(year>=0))
  
  {
     printf("valid date");
     
  }
   else
  {
     printf("invalid date");
  }
  return 0;
  }
