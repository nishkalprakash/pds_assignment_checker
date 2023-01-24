/*
Name:AMAN JUNEJA
ROLL NO : 22BT30002
SECTION :14
ASSIGNMENT : 9
QUESTION : to read two dates ,print them in a format ,finddays btw them

*/


//including required header files
#include<stdio.h>
#include<math.h>
#include<stdlib.h>


//decleration of struct Date type datatype
typedef struct Date{
	int date;
	int month;
	int year;
}dt;

//count number of days in a month of a non leap year
const int monthDays[12]={31,28,31,30,31,30,31,31,30,31,30,31};

//function to count number of leap years
int countLeapyears(dt x){
	int years=x.year;

	if(x.month<=2){
		years--;
	}
	return years/4-years/100+years/400;
}


//function readdate to input date from user
dt readDate(dt phi){
	scanf("%d %d %d",&phi.date,&phi.month,&phi.year);
	return phi;
}

//function printDate to print date in given format on screen
void printDate(dt theta){
	printf("%d/%d/%d\n",theta.date,theta.month,theta.year);

}


//function to find no of days
void FindDays(dt x,dt y){


	int nod=0;
	long int n1=x.year*365+x.date;

	for(int i=0;i<x.month-1;i++){
		n1+=monthDays[i];
	}

	n1+=countLeapyears(x);

	long int n2=y.year*365+y.date;

	for(int j=0;j<y.month-1;j++){
		n2+=monthDays[j];
	}
	n2+=countLeapyears(y);
	nod=n2-n1;
	printf("%d",nod>0?nod:-1*nod);
}

int main(){
	dt d1;
	dt d2;
	printf("X = ");
	d1=readDate(d1);
	printf("Y = ");
	d2=readDate(d2);
	printf("X = ");	
	printDate(d1);
	printf("Y = ");
	printDate(d2);
	printf("Days = ");
	FindDays(d1,d2);
	return 0;
}
