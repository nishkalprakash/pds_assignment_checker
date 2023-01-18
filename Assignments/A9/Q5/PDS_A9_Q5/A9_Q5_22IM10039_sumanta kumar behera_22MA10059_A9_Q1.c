/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:9
Description: This program takes two input of dates in the form of structures and returns the number of days between them.
*/
#include<stdio.h>
#include<math.h>
struct date{																	//Structure to write date.
		int day;
		int month;
		int year;
};
struct date read_date(struct date x){											//Function to  input date.
	scanf("%d",&x.day);
	scanf("%d",&x.month);
	scanf("%d",&x.year);
	return x;
}
void struct date print_date(struct date x){										//Function to print date.
	printf("%d/",x.day);
	printf("%d/",x.month);
	printf("%d/\n",x.year);
}
int find_days(struct date x,struct date y){										//Function to find no of days.
	return fabs(x.days-y.days) + fabs(30.5*(x.month-y.month))+ fabs(365*(x.year-y.year));
}
int main(){
	struct date x,y;
	x=read_date(x);
	y=read_date(y);
	print_date(x);
	print_date(y);
	printf("%d\n",find_days(x,y));
	return 0;
}