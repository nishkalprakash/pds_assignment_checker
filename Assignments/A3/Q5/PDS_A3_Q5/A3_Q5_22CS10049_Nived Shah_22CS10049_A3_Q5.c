/*
 Section 14
 Roll No: 22CS10049
 Name: Nived Shah	
 Assignment No: 3
 Description: Finding out the day of the week when user enters date and month of 2022
*/

#include <stdio.h>

int main(){
	int date, month;
	
	printf("Enter day and month: ");
	scanf("%d %d", &date, &month);
	
	if((date==29) && (month==2)) //checks for the special input of 29th February
		printf("Valid date but does not appear in 2022\n");
	else{
		//swtich case for the various months, dates and their corresponding days.		
		switch(month){ 
			case 1:
				if((date==1) || (date==8) || (date==15) || (date==22) || (date==29))
					printf("Saturday");
				else if((date==2) || (date==9) || (date==16) || (date==23) || (date==30))
					printf("Sunday");
				else if((date==3) || (date==10) || (date==17) || (date==24) || (date==31))
					printf("Monday");
				else if((date==4) || (date==11) || (date==18) || (date==25))
					printf("Tuesday");
				else if((date==5) || (date==12) || (date==19) || (date==26))
					printf("Wednesday");
				else if((date==6) || (date==13) || (date==20) || (date==27))
					printf("Thursday");
				else if((date==7) || (date==14) || (date==21) || (date==28))
					printf("Friday");
				else
					printf("Invalid date\n");
				break;
			case 2:
				if((date==1) || (date==8) || (date==15) || (date==22))
					printf("Tuesday");
				else if((date==2) || (date==9) || (date==16) || (date==23))
					printf("Wednesday");
				else if((date==3) || (date==10) || (date==17) || (date==24))
					printf("Thursday");
				else if((date==4) || (date==11) || (date==18) || (date==25))
					printf("Friday");
				else if((date==5) || (date==12) || (date==19) || (date==26))
					printf("Saturday");
				else if((date==6) || (date==13) || (date==20) || (date==27))
					printf("Sunday");
				else if((date==7) || (date==14) || (date==21) || (date==28))
					printf("Monday");
				else
					printf("Invalid date\n");
				break;
			case 3:
				if((date==1) || (date==8) || (date==15) || (date==22) || (date==29))
					printf("Tuesday");
				else if((date==2) || (date==9) || (date==16) || (date==23) || (date==30))
					printf("Wednesday");
				else if((date==3) || (date==10) || (date==17) || (date==24) || (date==31))
					printf("Thursday");
				else if((date==4) || (date==11) || (date==18) || (date==25))
					printf("Friday");
				else if((date==5) || (date==12) || (date==19) || (date==26))
					printf("Saturday");
				else if((date==6) || (date==13) || (date==20) || (date==27))
					printf("Sunday");
				else if((date==7) || (date==14) || (date==21) || (date==28))
					printf("Monday");
				else
					printf("Invalid date\n");
				break;
			case 4:
				if((date==1) || (date==8) || (date==15) || (date==22) || (date==29))
					printf("Friday");
				else if((date==2) || (date==9) || (date==16) || (date==23) || (date==30))
					printf("Saturday");
				else if((date==3) || (date==10) || (date==17) || (date==24))
					printf("Sunday");
				else if((date==4) || (date==11) || (date==18) || (date==25))
					printf("Monday");
				else if((date==5) || (date==12) || (date==19) || (date==26))
					printf("Tuesday");
				else if((date==6) || (date==13) || (date==20) || (date==27))
					printf("Wednesday");
				else if((date==7) || (date==14) || (date==21) || (date==28))
					printf("Thursday");
				else
					printf("Invalid date\n");
				break;
			case 5:
				if((date==1) || (date==8) || (date==15) || (date==22) || (date==29))
					printf("Sunday");
				else if((date==2) || (date==9) || (date==16) || (date==23) || (date==30))
					printf("Monday");
				else if((date==3) || (date==10) || (date==17) || (date==24) || (date==31))
					printf("Tuesday");
				else if((date==4) || (date==11) || (date==18) || (date==25))
					printf("Wednesday");
				else if((date==5) || (date==12) || (date==19) || (date==26))
					printf("Thursday");
				else if((date==6) || (date==13) || (date==20) || (date==27))
					printf("Friday");
				else if((date==7) || (date==14) || (date==21) || (date==28))
					printf("Saturday");
				else
					printf("Invalid date\n");
				break;
			case 6:
				if((date==1) || (date==8) || (date==15) || (date==22) || (date==29))
					printf("Wednesday");
				else if((date==2) || (date==9) || (date==16) || (date==23) || (date==30))
					printf("Thursday");
				else if((date==3) || (date==10) || (date==17) || (date==24))
					printf("Friday");
				else if((date==4) || (date==11) || (date==18) || (date==25))
					printf("Saturday");
				else if((date==5) || (date==12) || (date==19) || (date==26))
					printf("Sunday");
				else if((date==6) || (date==13) || (date==20) || (date==27))
					printf("Monday");
				else if((date==7) || (date==14) || (date==21) || (date==28))
					printf("Tuesday");
				else
					printf("Invalid date\n");
				break;
			case 7:
				if((date==1) || (date==8) || (date==15) || (date==22) || (date==29))
					printf("Friday");
				else if((date==2) || (date==9) || (date==16) || (date==23) || (date==30))
					printf("Saturday");
				else if((date==3) || (date==10) || (date==17) || (date==24) || (date==31))
					printf("Sunday");
				else if((date==4) || (date==11) || (date==18) || (date==25))
					printf("Monday");
				else if((date==5) || (date==12) || (date==19) || (date==26))
					printf("Tuesday");
				else if((date==6) || (date==13) || (date==20) || (date==27))
					printf("Wednesday");
				else if((date==7) || (date==14) || (date==21) || (date==28))
					printf("Thursday");
				else
					printf("Invalid date\n");
				break;
			case 8:
				if((date==1) || (date==8) || (date==15) || (date==22) || (date==29))
					printf("Monday");
				else if((date==2) || (date==9) || (date==16) || (date==23) || (date==30))
					printf("Tuesday");
				else if((date==3) || (date==10) || (date==17) || (date==24) || (date==31))
					printf("Wednesday");
				else if((date==4) || (date==11) || (date==18) || (date==25))
					printf("Thursday");
				else if((date==5) || (date==12) || (date==19) || (date==26))
					printf("Friday");
				else if((date==6) || (date==13) || (date==20) || (date==27))
					printf("Saturday");
				else if((date==7) || (date==14) || (date==21) || (date==28))
					printf("Sunday");
				else
					printf("Invalid date\n");
				break;			
			case 9:
				if((date==1) || (date==8) || (date==15) || (date==22) || (date==29))
					printf("Thursday");
				else if((date==2) || (date==9) || (date==16) || (date==23) || (date==30))
					printf("Friday");
				else if((date==3) || (date==10) || (date==17) || (date==24))
					printf("Saturday");
				else if((date==4) || (date==11) || (date==18) || (date==25))
					printf("Sunday");
				else if((date==5) || (date==12) || (date==19) || (date==26))
					printf("Monday");
				else if((date==6) || (date==13) || (date==20) || (date==27))
					printf("Tuesday");
				else if((date==7) || (date==14) || (date==21) || (date==28))
					printf("Wednesday");
				else
					printf("Invalid date\n");
				break;
			case 10:
				if((date==1) || (date==8) || (date==15) || (date==22) || (date==29))
					printf("Saturday");
				else if((date==2) || (date==9) || (date==16) || (date==23) || (date==30))
					printf("Sunday");
				else if((date==3) || (date==10) || (date==17) || (date==24) || (date==31))
					printf("Monday");
				else if((date==4) || (date==11) || (date==18) || (date==25))
					printf("Tuesday");
				else if((date==5) || (date==12) || (date==19) || (date==26))
					printf("Wednesday");
				else if((date==6) || (date==13) || (date==20) || (date==27))
					printf("Thursday");
				else if((date==7) || (date==14) || (date==21) || (date==28))
					printf("Friday");
				else
					printf("Invalid date\n");
				break;
			case 11:
				if((date==1) || (date==8) || (date==15) || (date==22) || (date==29))
					printf("Tuesday");
				else if((date==2) || (date==9) || (date==16) || (date==23) || (date==30))
					printf("Wednesday");
				else if((date==3) || (date==10) || (date==17) || (date==24))
					printf("Thursday");
				else if((date==4) || (date==11) || (date==18) || (date==25))
					printf("Friday");
				else if((date==5) || (date==12) || (date==19) || (date==26))
					printf("Saturday");
				else if((date==6) || (date==13) || (date==20) || (date==27))
					printf("Sunday");
				else if((date==7) || (date==14) || (date==21) || (date==28))
					printf("Monday");
				else
					printf("Invalid date\n");
				break;
			case 12:
				if((date==1) || (date==8) || (date==15) || (date==22) || (date==29))
					printf("Thursday");
				else if((date==2) || (date==9) || (date==16) || (date==23) || (date==30))
					printf("Friday");
				else if((date==3) || (date==10) || (date==17) || (date==24) || (date==31))
					printf("Saturday");
				else if((date==4) || (date==11) || (date==18) || (date==25))
					printf("Sunday");
				else if((date==5) || (date==12) || (date==19) || (date==26))
					printf("Monday");
				else if((date==6) || (date==13) || (date==20) || (date==27))
					printf("Tuesday");
				else if((date==7) || (date==14) || (date==21) || (date==28))
					printf("Wednesday");
				else
					printf("Invalid date\n");
				break;
			default:
				printf("Invalid date\n");
		}
	}
	return 0;
}






















	

