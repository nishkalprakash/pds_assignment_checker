/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 3
Description : Program to display day name from date
*/







#include <stdio.h> //including header file


int main(){  
	int d,month,count;
	printf("Enter day and month : " ); 
	scanf("%d %d",&d,&month);  //taking day and month
	
	int valid = 1;  //checking for valid date 
	if(month == 2 && d>=29) valid = 0;
	if(month%2 == 0 && month!=2 && d>=31) valid = 0; 

	if(valid == 1 && d<32){   //if valid we proceed with our calculation
	count = d;
	if(month>1) count+=31;   //adding days upto the given date
	if(month>2) count+=28;
	if(month>3) count+=31;
	if(month>4) count+=30;
	if(month>5) count+=31;
	if(month>6) count+=30;
	if(month>7) count+=31;
	if(month>8) count+=30;
	if(month>9) count+=31;
	if(month>10) count += 30;
	if(month>11) count += 31; 
	
	count%=7;  		//finding remainder after divison with 7
	
	switch(count)			//checking for day
	{			
		case 2 : 
			printf("Sunday");
			break;
		case 3 :
			printf("Monday");
			break;
		case 4 :
			printf("Tuesday");
			break;
		case 5 :
			printf("Wednesday");
			break;
		case 6 :
			printf("Thursday");
			break;
		case 0 :
			printf("Friday");
			break;
		case 1 : 
			printf("Saturday");
			break;
	}	
	}
	else printf("Invalid Date");  //printing invalid date if wrong input is given


	
	return 0;
}
