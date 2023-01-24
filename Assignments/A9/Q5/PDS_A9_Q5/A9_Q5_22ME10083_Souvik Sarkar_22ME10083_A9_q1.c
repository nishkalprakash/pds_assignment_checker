/*
*	section 14
*	Name: Souvik Sarkar
*	Roll no.: 22ME10083
*	Assignment: 9
*	Topic:Structures
*	Question no.:1
*	Programme to read dates and find the days b/w two given dates i/p by the user
*/
#include<stdio.h>
// Decalaring global varriable with structure
struct date{
	int x;//for date
	int y;// for month
	int z;// for year
}p,q;
// creating a function to read the dates from from user
struct date ReadDate(struct date a){
	scanf("%d %d %d",&a.x,&a.y,&a.z);
	return a;
}
// creating a function to print the dates
void printDate(struct date a, struct date b)
{
	printf("DATE1 : %d/%d/%d",a.x,a.y,a.z);
	printf("\nDATE2 : %d/%d/%d",b.x,b.y,b.z);
}
// a function to find days b/w the two dates
void Finddays(struct date a, struct date b)
{
	if((a.y==b.y)&&(a.z==b.z)){
		if(a.x>b.x)
		printf("No. of days b/w the dates is %d",(a.x-b.x));
		else
		printf("No. of days b/w the dates is %d",(b.x-a.x));
	}
}
void main(){
	// assigning the varriables in the main funtion
	struct date d1,d2;
	// taking i/p
	printf("Enter  the first date : ");
	d1=ReadDate(p);
	printf("\nEnter  the second date : ");
	d2=ReadDate(q);
	// printing o/p
	printDate(d1,d2);
	Finddays(d1,d2)
	
}