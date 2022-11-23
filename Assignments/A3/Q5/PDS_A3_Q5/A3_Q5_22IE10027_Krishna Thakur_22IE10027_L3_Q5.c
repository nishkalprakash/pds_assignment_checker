/*
Section 14
Roll No:22CS30010
Name :Krishna Thakur
Assignment No:3
Description: program to write day of a given date
*/
#include <stdio.h>
int main(){
	printf("enter the day and month");
	int d=0, m=0;
	int s;
	scanf("%d%d", &d, &m);
	if (((m=4||6||9||11)&&(d>30))||(d>31)||((m=2)&&(d>28))||(m>12))
		printf("Date is invalid");
	else if (m==1)
		s=(d%7);
	else if (m==2)
		s=((d+31)%7);
	else if (m==3)
		s=((d+59)%7);
	else if (m==4)
		s=((d+90)%7);
	else if (m==5)
		s=((d+120)%7);
	else if (m==6)
		s=((d+151)%7);
	else if (m==7)
		s=((d+181)%7);
	else if (m==8)
		s=((d+212)%7);
	else if (m==9)
		s=((d+243)%7);
	else if (m==10)
		s=((d+273)%7);
	else if (m==11)
		s=((d+304)%7);
	else if (m==12)
		s=((d+334)%7);


	if (s==1)
		printf("saturday");
	else if (s==2)
		printf("Sunday");
	else if (s==3)
		printf("Monday");
	else if (s==4)
		printf("Tuesday");
	else if (s==5)
		printf("Wednesday");
	else if (s==6)
		printf("Thursday");
	else if (s==0)
		printf("Friday");

	return 0;
}