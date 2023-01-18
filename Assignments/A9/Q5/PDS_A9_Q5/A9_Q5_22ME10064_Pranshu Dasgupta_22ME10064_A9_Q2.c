/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 9
Description : Program to find the number of days in between 2 dates*/

#include <stdio.h>

typedef struct{  //defining a new structure date
	int dd;
	int mm;
	int yy;	
} date;

date ReadDate(){  //function to read a date and return the date
	date inp;
	scanf("%d %d %d", &inp.dd, &inp.mm, &inp.yy);
	return inp;
}

void PrintDate(date x){  //function to print formatted date
	printf(" %d/%d/%d\n", x.dd, x.mm, x.yy );
	return;
}

long int DayAbs(date x){  //function to calculate the number of days passed from the year 2000 till the current date
	int i, j; 
	long int dayabs=x.dd;  //initialising dayabs to day of the month
	for (j=2000; j<x.yy; j++){  //for loop to add number of days correponding to the year
		if (j%4==0) dayabs+=366;  //leap year
		else dayabs+=365;  //non leap year
	}
	for (i=1; i<x.mm; i++){  //for loop to add days corresponding to the month number
		if (i==1 || i==3 || i==5 || i==7 || i==8 || i==10) dayabs+=31;  //months that contain 31 days
		else if (i==2){  //February
			if (x.yy%4==0) dayabs+=29;  //feb contains 29 days in a leap year
			else dayabs+=28;  //feb contains 28 days otherwise
		}
		else if (i==4 || i==6 || i==9 || i==11) dayabs+=30;  //months that contain 30 days
	}
	return dayabs;
}

void FindDays(date x, date y){  //function to print the number of days between two dates
	long int absday1, absday2, diff;
	absday1=DayAbs(x);
	absday2=DayAbs(y);
	diff=absday1-absday2;
	printf("Days = ");
	if (diff<0) printf("%ld", -diff);  //if first date is greater than second date the difference wil be negative
	else printf("%ld", diff);
	return;
}

int main(){
	date d1, d2;
	printf("X = "); d1=ReadDate(); 
	printf("Y = "); d2=ReadDate();
	printf("X = "); PrintDate(d1); 
	printf("Y = "); PrintDate(d2);
	FindDays(d1, d2);
	return 0;
}


