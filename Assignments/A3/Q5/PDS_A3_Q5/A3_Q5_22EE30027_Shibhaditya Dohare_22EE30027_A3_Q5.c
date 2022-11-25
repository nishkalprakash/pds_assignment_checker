/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 3
Discription : To calcute day of a given date and month
*/
#include<stdio.h>
int main()
{
	int d, m, r;
	printf("Input the day and the month. \n");
	scanf("%d %d", &d, &m);
	r=d%7;
	if(m>12){
		printf("Invalid date");
		}
	else	
	switch(m)
	{
		case 1:
		if(d>31){
				printf("Invalid date");
				break;
			}
			else
				switch(r){

					case 1:
						printf("Saturday");
						break;
					case 2:
						printf("Sunday");
						break;
					case 3:
						printf("Monday");
						break;
					case 4:
						printf("Tuesday");
						break;
					case 5:
						printf("Wednesday");
						break;
					case 6:
						printf("Thursday");
						break;
					case 0:
						printf("Friday");
						break;
					} 
		break;
		case 2:
		if(d>28){
				printf("Invalid date");
				break;
			}
			else
				switch(r){

					case 5:
						printf("Saturday");
						break;
					case 6:
						printf("Sunday");
						break;
					case 0:
						printf("Monday");
						break;
					case 1:
						printf("Tuesday");
						break;
					case 2:
						printf("Wednesday");
						break;
					case 3:
						printf("Thursday");
						break;
					case 4:
						printf("Friday");
						break;
					}
		break;
		case 3:
		if(d>31){
				printf("Invalid date");
				break;
			} 	
			else
				switch(r){

					case 5:
						printf("Saturday");
						break;
					case 6:
						printf("Sunday");
						break;
					case 0:
						printf("Monday");
						break;
					case 1:
						printf("Tuesday");
						break;
					case 2:
						printf("Wednesday");
						break;
					case 3:
						printf("Thursday");
						break;
					case 4:
						printf("Friday");
						break;
					}
		break;
		case 4:
		if(d>30){
				printf("Invalid date");
				break;
			} 	
			else
				switch(r){

					case 2:
						printf("Saturday");
						break;
					case 3:
						printf("Sunday");
						break;
					case 4:
						printf("Monday");
						break;
					case 5:
						printf("Tuesday");
						break;
					case 6:
						printf("Wednesday");
						break;
					case 0:
						printf("Thursday");
						break;
					case 1:
						printf("Friday");
						break;
					}
		break;
		case 5:
		if(d>31){
				printf("Invalid date");
				break;
			} 	
			else
				switch(r){

					case 7:
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
		break;
		case 6:
		if(d>30){
				printf("Invalid date");
				break;
			} 	
			else	
				switch(r){

					case 4:
						printf("Saturday");
						break;
					case 5:
						printf("Sunday");
						break;
					case 6:
						printf("Monday");
						break;
					case 0:
						printf("Tuesday");
						break;
					case 1:
						printf("Wednesday");
						break;
					case 2:
						printf("Thursday");
						break;
					case 3:
						printf("Friday");
						break;
					}
		break;
		case 7:
			if(d>31){
				printf("Invalid date");
				break;
			} 	
			else
				switch(r){

					case 2:
						printf("Saturday");
						break;
					case 3:
						printf("Sunday");
						break;
					case 4:
						printf("Monday");
						break;
					case 5:
						printf("Tuesday");
						break;
					case 6:
						printf("Wednesday");
						break;
					case 0:
						printf("Thursday");
						break;
					case 1:
						printf("Friday");
						break;
					}
		break;
		case 8:
			if(d>31){
				printf("Invalid date");
				break;
			} 	
			else
				switch(r){

					case 6:
						printf("Saturday");
						break;
					case 0:
						printf("Sunday");
						break;
					case 1:
						printf("Monday");
						break;
					case 2:
						printf("Tuesday");
						break;
					case 3:
						printf("Wednesday");
						break;
					case 4:
						printf("Thursday");
						break;
					case 5:
						printf("Friday");
						break;
					}
		break;
		case 9:
			if(d>30){
				printf("Invalid date");
				break;
			} 	
			else
				switch(r){

					case 3:
						printf("Saturday");
						break;
					case 4:
						printf("Sunday");
						break;
					case 5:
						printf("Monday");
						break;
					case 6:
						printf("Tuesday");
						break;
					case 0:
						printf("Wednesday");
						break;
					case 1:
						printf("Thursday");
						break;
					case 2:
						printf("Friday");
						break;
					}
		break;
		case 10:
			if(d>31){
				printf("Invalid date");
				break;
			} 	
			else
				switch(r){

					case 1:
						printf("Saturday");
						break;
					case 2:
						printf("Sunday");
						break;
					case 3:
						printf("Monday");
						break;
					case 4:
						printf("Tuesday");
						break;
					case 5:
						printf("Wednesday");
						break;
					case 6:
						printf("Thursday");
						break;
					case 0:
						printf("Friday");
						break;
					}
		break;
		case 11:
			if(d>30){
				printf("Invalid date");
				break;
			} 	
			else
				switch(r){

					case 5:
						printf("Saturday");
						break;
					case 6:
						printf("Sunday");
						break;
					case 0:
						printf("Monday");
						break;
					case 1:
						printf("Tuesday");
						break;
					case 2:
						printf("Wednesday");
						break;
					case 3:
						printf("Thursday");
						break;
					case 4:
						printf("Friday");
						break;
					}
		break;
		case 12:
			if(d>31){
				printf("Invalid date");
				break;
			} 	
			else
				switch(r){

					case 3:
						printf("Saturday");
						break;
					case 4:
						printf("Sunday");
						break;
					case 5:
						printf("Monday");
						break;
					case 6:
						printf("Tuesday");
						break;
					case 0:
						printf("Wednesday");
						break;
					case 1:
						printf("Thursday");
						break;
					case 2:
						printf("Friday");
						break;
					}
		break;
	}			
	return 0;
}
