/*
sec : 14
roll no : 22EE10028
name : garvit
assignment no : 3
description : program to check whether it is valid time or not
*/
#include<stdio.h>

int main()
{
int m,d,r,t;
printf("enter the day and month");
scanf("%d %d",&d,&m);
if(m<=12)
{
if(m%2==1)
{
if(d<=31)
{
t = ((m-1)/2)*(31)+28+(((m-1)/2)-1)*30+d;
r = t%7;
switch(r)
{
case 0 : {printf("satday");
	  break;}
case 1 : {printf("sunday");
	  break;}
case 2 : {printf("monday");
	  break;}
case 3 : {printf("tuesday");
	  break;}
case 4 : {printf("wednesday");
	  break;}
case 5 : {printf("thursday");
	  break;}
case 6 : {printf("friday");
	  break;}
}
}
}
else
{if(d<=30)
{t = (m/2)*31+28+(((m-1)/2)-1)*30+d;
r = t%7;
switch(r)
{
case 0 : {printf("satday");
	  break;}
case 1 : {printf("sunday");
	  break;}
case 2 : {printf("monday");
	  break;}
case 3 : {printf("tuesday");
	  break;}
case 4: {printf("wednesday");
	  break;}
case 5 : {printf("thursday");
	  break;}
case 6 : {printf("friday");
	  break;}
}
}
else
{printf("invalid");}
}
}
return 0;
}


