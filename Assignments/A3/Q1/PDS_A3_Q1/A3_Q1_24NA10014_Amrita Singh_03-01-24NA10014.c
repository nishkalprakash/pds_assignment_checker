//NAME - AMRITA SINGH
//ROLL NO -24NA10014
//TO PRINT THE CORRECT DATES ACCORDING TO THE CALENDER
#include<stdio.h>
int main()
{
	int d,m,y;
	printf("enter the day ,month,year:");
	scanf("%d%d%d",&d,&m,&y);
	
	if((y%4)==0 && (y%100)!=0){
	printf("\nthe year is a leap year");
	
		if(m>=1 && m<=12 && d>=1 && d<=31){
		printf("\nproceeding");
			if(m==2 && (d<=29 && d>=1)){
			printf("\nvalid date of leap year");
			printf("\nthe final date is %d %d %d",d,m,y);}
			else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
			
			printf ("valid date for 31 days of month");
			printf("\nthe final date is %d %d %d",d,m,y);}
			else{
			printf("\nmonth of 30 day");
				if(d<=1 || d>=30)
				printf ("\ninvalid date");
				else
				printf("\nthe final date is %d %d %d",d,m,y);
				}}
			
		else
		printf("\ninvalid date");
		
	
		
	
	
		}
	else {
	printf("the year is not leap");
	
		if(m>=1 && m<=12 && d>=1 && d<=31){
		printf("\nproceeding");
			if(m==2){
				if (d>=1 && d<=28){
				printf("valid");
				printf("\nthe final date is %d %d %d",d,m,y);}
				else
				printf("\ninvalid");}
			
			
			
			else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
			
			printf ("valid date for 31 days of month");
			printf("\nthe final date is %d %d %d",d,m,y);}
			else{
			printf("\nmonth of 30 day");
				if(d<=1 || d>=30)
				printf ("\ninvalid date");
				else
				printf("\nthe final date is %d %d %d",d,m,y);
				}}
		else
		printf("\ninvalid date");}
	
	
	
	return 0;
	}
		
	
	
