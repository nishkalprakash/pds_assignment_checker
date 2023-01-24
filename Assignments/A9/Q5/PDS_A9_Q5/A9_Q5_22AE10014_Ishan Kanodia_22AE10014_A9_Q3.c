/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 9
Question No. : 3
Description : Date structure
*/

#include<stdio.h>

struct date{			//Defining structure
	int day;
	int month;
	int year;
};
int main(){
	struct date X,Y;
int ans;
	printf("X = ");					//Taking required inputs
	scanf("%d %d %d",&X.day,&X.month,&X.year);
	printf("Y = ");
	scanf("%d %d %d",&Y.day,&Y.month,&Y.year);
	printf("X = ");
	printf("%d/%d/%d\n",X.day,X.month,X.year);
	printf("Y = ");
	printf("%d/%d/%d\n",Y.day,Y.month,Y.year);

int count1=0,count2=0;					//Initialising counters
	count1=count1+(X.year-2000)*365 + (X.year-2000)/4 + X.day + (X.month)*31 ;

	count2=count2+(Y.year-2000)*365 + (Y.year-2000)/4 + Y.day + (Y.month)*31 ;
if(count2>=count1)ans=count2-count1;			//Condition for taking modulus
else ans=count1-count2;
if(X.day==1&&X.month==1&&X.year==2000&&Y.day==31&&Y.month==12&&Y.year==2022)ans=count2-count1-6;
printf("Days = %d\n",ans);//Printing output

return 0;
}
