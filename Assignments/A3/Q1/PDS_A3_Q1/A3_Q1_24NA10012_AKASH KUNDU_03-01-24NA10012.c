//program to check if a date is valid in gregorian calender
//Akash Kundu
//24NA10012
#include<stdio.h>
int main()
{
	printf("Enter a date : ");
	int dd,mm,yyyy;
	int y,m,d;
	scanf("%d %d %d",&dd,&mm,&yyyy);
	
	if (yyyy%4==0) {y=1;}  //1 is leap year and 0 is non-leap
		if (yyyy%100==0) {y=0;}
			if (yyyy%400==0) {y=1;}
	else {y=0;}
	
	if (mm>=1 & mm<=12) {m=1;} //1 is for valid month and 0 for invalid
	else {m=0;}
	                    //1 is for valid dd
	if (mm==1) {if (dd>=1 & dd<=31) d=1;}	
	else if (mm==3) {if (dd>=1 & dd<=31) d=1;}
	else if (mm==4) {if (dd>=1 & dd<=30) d=1;}
	else if (mm==5) {if (dd>=1 & dd<=31) d=1;}
	else if (mm==6) {if (dd>=1 & dd<=30) d=1;}
	else if (mm==7) {if (dd>=1 & dd<=31) d=1;}
	else if (mm==8) {if (dd>=1 & dd<=31) d=1;}
	else if (mm==9) {if (dd>=1 & dd<=30) d=1;}
	else if (mm==10) {if (dd>=1 & dd<=31) d=1;}
	else if (mm==11) {if (dd>=1 & dd<=30) d=1;}
	else if (mm==12) {if (dd>=1 & dd<=31) d=1;}
	else if (mm=2) {if (y==1) {if (dd>=1 & dd<=29) d=1;}
			else {if (dd>=1 & dd<=28) d=1;}}
	else d=0;
	
	if (d==1 & m==1) printf("The date is valid");
	else printf("The date is invalid");
	
	return 0;
}
