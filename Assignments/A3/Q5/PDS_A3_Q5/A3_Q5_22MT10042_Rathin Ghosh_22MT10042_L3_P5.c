/*
Section-14
Roll no.-22MT10042
Name- Rathin Ghosh
Assignment number-3
Program description : shows the day of the week for an input date
*/
#include<stdio.h>
int main()
{
int d,m,td,r;
printf("Enter day and month : ");
scanf("%d %d",&d,&m);
switch (m)
{
case 1:
if (d>31)
{
printf("Invalid date");
break;
}
else
r=d%7;
break;
case 2:
if (d>28)
{
printf("Invalid date");
break;
}
else
{
td=31+d;
r=td%7;
}
break;
case 3:
if (d>31)
{
printf("Invalid date");
break;
}
else 
{
td=31+28+d;
r=td%7;
}
break;
case 4:
if (d>30)
{
printf("Invalid date");
break;
}
else
{
td=31+28+31+d;
r=td%7;
} 
break;
case 5:
if (d>31)
{
printf("Invalid date");
break;
}
else
{
td=31+28+31+30+d;
r=td%7;
} 
break;
case 6:
if (d>30)
{
printf("Invalid date");
break;
}
else
{
td=31+28+31+30+31+d;
r=td%7;
} 
break;
case 7:
if (d>31)
{
printf("Invalid date");
break;
}
else
{
td=31+28+31+30+31+30+d;
r=td%7;
} 
break;
case 8:
if (d>31)
{
printf("Invalid date");
break;
}
else
{
td=31+28+31+30+31+30+31+d;
r=td%7;
} 
break;
case 9:
if (d>30)
{
printf("Invalid date");
break;
}
else
{
td=31+28+31+30+31+30+31+31+d;
r=td%7;
} 
break;
case 10:
if (d>31)
{
printf("Invalid date");
break;
}
else
{
td=31+28+31+30+31+30+31+31+30+d;
r=td%7;
} 
break;
case 11:
if (d>30)
{
printf("Invalid date");
break;
}
else
{
td=31+28+31+30+31+30+31+31+30+31+d;
r=td%7;
} 
break;
case 12:
if (d>31)
{
printf("Invalid date");
break;
}
else
{
td=31+28+31+30+31+30+31+31+30+31+30+d;
r=td%7;
} 
break;
default:
printf("Invalid date");
}
switch (r)
{
case 1:
printf("Saturday");
break;
case 2:
printf("Sunday");
break;
case 3:
printf("Monday");
break;
case 4:
printf("Tuesday");
break;
case 5:
printf("Wednesday");
break;
case 6:
printf("Thursday");
break;
case 0:
printf("Friday");
}
return 0;
}


