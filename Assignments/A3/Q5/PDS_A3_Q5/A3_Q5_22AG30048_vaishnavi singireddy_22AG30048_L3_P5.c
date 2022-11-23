#include<stdio.h>
int main()
{
  int day,month;
  printf("enter day and month of year 2022");
  scanf("%d%d", &day,&month);
  if(&&day>31 &&month>12 &&day==0 &&month==0)
  {
   printf("invalid ");
  }
   switch(day,month)
  {
  case 1:
  printf("monday");
break;
 case 2:
printf("tuesday");
break;
case 3:
printf("wednessday");
break;
case 4:
printf("thursday");
break;
case 5:
printf("friday");
break;
case 6:
printf("saturday");
break;
case 7:
printf("sunday");
break;
case 8:
printf("invalid date");
break;
}
return 0;
}
