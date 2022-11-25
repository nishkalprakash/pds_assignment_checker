/* 
Section 14
Roll No. 22CY10028
Name : Krishna
Assignment No : 3
Description : Program to check points 
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
int d, m, n, x, y;
printf("Enter the day and month respectively:");
scanf("%d %d", &d, &m);
if (d > 31 || m >= 13){
	printf("INVALID DATE");
return 0;
	
}


if (m==1){
	x=0;
}
else if (m==2){
	x=31;
}
else if (m==3){
	x= 59;
}
else if (m==4){
	x= 90;
}
else if (m==5){
	x= 120;
}
else if (m==6){
	x= 151;
}
else if (m==7){
	x= 181;
}
else if (m==8){
	x= 212;
}
else if (m==9){
	x= 243;
}
else if (m==10){
	x= 273;
}
else if (m==11){
	x= 304;
}
else if (m==12){
	x= 334;
}
else x=0;


y = x + d;
n = y%7;
switch (n){
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

	case 7:
		printf("Friday");
	break;
}
return 0;
}

