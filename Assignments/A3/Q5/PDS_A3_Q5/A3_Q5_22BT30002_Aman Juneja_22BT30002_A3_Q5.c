/*
Section 14
Roll No: 22BT30002
Name:Aman Juneja
Assignment No : 3
Description: Program to print the day given the date and month on which day is to be calculated. also given that january 1,2022 is saturday.
*/

#include<stdio.h>

int main(){
	int d,m,rem; //two variables are decleared for date and month
	printf("Enter day and month : ");
	scanf("%d %d",&d,&m); //date and month scanned by user
	if(m>12 || d>31){ //checking for invalid date 
		printf("Invalid date");	
	}
	else if(m==2 && d>28){	
		printf("Invalid date");	
	}
	else if(((m==4) || (m==6) || (m==9) || (m==11)) && d>30){
		printf("Invalid date");	
	}

	//calculating the day for particular date and month by checking remainder
	else{	
		if(m==1){
			rem = (d-1)%7;
		}
		else if(m==2){ 
			rem = (d-1+31)%7;
		}
		else if(m==3){
			rem = (d-1+28+31)%7;
		}
		else if(m==4){ 
			rem = (d-1+31+28+31)%7;
		}
		else if(m==5){ 
			rem = (d-1+30+31+28+31)%7;
		}
		else if(m==6){ 
			rem = (d-1+31+30+31+28+31)%7;
		}
		else if(m==7){ 
			rem = (d-1+30+31+30+31+28+31)%7;
		}
		else if(m==8){ 
			rem = (d-1+31+30+31+30+31+28+31)%7;
		}
		else if(m==9){ 
			rem = (d-1+31*5+30*2+28)%7;
		}
		else if(m==10){ 
			rem = (d-1+30*3+28+31*5)%7;
		}
		else if(m==11){
			rem = (d-1+31*6+30*3+28)%7;
		}	
		else{
			rem = (d-1+30*4+31*6+28)%7;
		}
	}
	//switch block for printing the day for date and month.
	switch(rem){
		case 0:
			printf("Saturday");
			break;
		case 1:
			printf("Sunday");
			break;
		case 2:
			printf("Monday");
			break;
		case 3:
			printf("Tuesday");
			break;
		case 4:
			printf("Wednesday");
			break;
		case 5:
			printf("Thursday");
			break;
		case 6:
			printf("Friday");
			break;	
	}
	return 0;
}
