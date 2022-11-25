#include<stdio.h>

int main()
{
int day,month,span=0,rem;
printf("Enter day and month: \n");
scanf("%d %d",&day,&month);
switch(month)
{
case 1: span=day;
break;
case 2: span=day+31;
 break;
case 3: span=day + 31 + 28;
 break;
case 4: span=day+ 31 + 28 + 31;
 break;
case 5: span=day+ 31 + 28 + 31 +30;
 break;
case 6: span=day+ 31 + 28 + 31 +30+31;
 break;
case 7: span=day+ 31 + 28 + 31 +30+31+30;
 break;
case 8: span=day+ 31 + 28 + 31 +30+31+31;
case 9: span=day+ 31 + 28 + 31 +30+31+31+31;
 break;
case 10: span=day+ 31 + 28 + 31 +30+31+31+30;
 break;
case 11: span=day+ 31 + 28 + 31 +30+31+31+30+31;
 break;
case 12: span=day+ 31 + 28 + 31 +30+31+31+30+31+31;
        break;
}
rem=span%7;

if(day<=31 && month<=12)
{
if((month==4 || month==6 || month==9 || month==11 && day<=30)||(month==2 && day<=28)||(month==1 || month==3||month==5||month==7||month==8||month==10||month==12))
{
switch(rem)
{
case 2: printf("Sunday");
       break;
case 3: printf("Monday");
       break;
case 4: printf("Tuesday");
       break;
case 5: printf("Wednesday");
       break;
case 6: printf("Thursday");
       break;
case 0: printf("Friday");
       break;
case 1: printf("Saturday");
       break;
}
}
else
{
printf("Invalid Date");
}
}
else
{
printf("Invalid Date");
}
return 0;
}

