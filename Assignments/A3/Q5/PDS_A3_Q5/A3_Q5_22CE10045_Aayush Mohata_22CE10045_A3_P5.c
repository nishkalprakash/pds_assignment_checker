/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:3
Discription :To find date is invalid or not and day

*/
#include<stdio.h>
int main()
{
	int day,month;
	int rem;
	printf("Enter day and month:");
	scanf("%d %d",&day,&month);
	rem=day%7;
	switch(month)
	{
		case 1:
			if(31<day){
				printf("Invalid Date");
				
				}
			else
				switch(rem){

					case 1:
						printf("saturday");
						break;
					case 2:
						printf("sunday");
						break;
					case 3:
						printf("monday");
						break;
					case 4:
						printf("tuesday");
						break;
					case 5:
						printf("wednesday");
						break;
					case 6:
						printf("thursday");
						break;
					case 0:
						printf("friday");
						break;
					}
			break;
		case 2:
			if(28<day){
                                printf("Invalid Date");
				
				}
			else 
				switch(rem){
					case 5:
						printf("saturday");
						break;
					case 6:
						printf("sunday");
						break;
					case 0:
						printf("monday");
						break;
					case 1:
						printf("tuesday");
						break;
					case 2:
						printf("wednesday");
						break;
					case 3:
						printf("thursday");
						break;
					case 4:
						printf("friday");
						break;
					}
			break;
		case 3:
			if(31<day){
				printf("Invalid Date");
				
				}
			else			
				switch(rem){
					case 5:
						printf("saturday");						
						break;
					case 6:
						printf("sunday");
						break;
					case 0:
						printf("monday");
						break;
					case 1:
						printf("tuesday");
						break;
					case 2:
						printf("wednesday");
						break;
					case 3:
						printf("thursday");
						break;
					case 4:
						printf("friday");
						break;
					}
			break;
		case 4:
			if(30<day){
				printf("Invalid Date");
				
				}
			else			
				switch(rem){
					case 2:
						printf("saturday");
						break;
					case 3:
						printf("sunday");
						break;
					case 4:
						printf("monday");
						break;

					case 5:
						printf("tuesday");
						break;
					case 6:
						printf("wednesday");
						break;
					case 0:
						printf("thursday");
						break;
					case 1:
						printf("friday");
						break;
					}
			break;

		case 5:
			if(31<day){
				printf("Invalid Date");
				
				}
			else			
				switch(rem){
					case 0:
						printf("saturday");
						break;
					case 1:
						printf("sunday");
						break;
					case 2:
						printf("monday");
						break;
					case 3:
						printf("tuesday");
						break;
					case 4:
						printf("wednesday");
						break;
					case 5:
						printf("thursday");
						break;
					case 6:
						printf("friday");
						break;
					}
			break;
		case 6:
			if(30<day){
				printf("Invalid Date");
				
				}
			else			
				switch(rem){
					case 4:
						printf("saturday");
						break;
					case 5:
						printf("sunday");
						break;
					case 6:
						printf("monday");break;
					case 0:
						printf("tuesday");break;
					case 1:
						printf("wednesday");break;
					case 2:						
						printf("thursday");break;
					case 3:
						printf("friday");break;
					}
			break;
		case 7:
			if(31<day){
				printf("Invalid Date");
				
				}
			else			
				switch(rem){
					case 2:
						printf("saturday");break;
					case 3:
						printf("sunday");break;
					case 4:
						printf("monday");break;
					case 5:
						printf("tuesday");break;
					case 6:
						printf("wednesday");break;
					case 0:
						printf("thursday");break;
					case 1:
						printf("friday");break;
					}
			break;
		case 8:
			if(31<day){
				printf("Invalid Date");
				
				}
			else			
				switch(rem){
					case 6:
						printf("saturday");break;
					case 0:
						printf("sunday");break;
					case 1:
						printf("monday");break;
					case 2:
						printf("tuesday");break;
					case 3:
						printf("wednesday");break;
					case 4:
						printf("thursday");break;
					case 5:
						printf("friday");break;
					}
			break;
		case 9:
			if(30<day){
				printf("Invalid Date");
				
				}
			else			
				switch(rem){
					case 3:
						printf("saturday");break;
					case 4:
						printf("sunday");break;
					case 5:
						printf("monday");break;
					case 6:
						printf("tuesday");break;
					case 0:
						printf("wednesday");break;
					case 1:
						printf("thursday");break;
					case 2:
						printf("friday");break;
					}
			break;
		case 10:
			if(31<day){
				printf("Invalid Date");
				
				}
			else			
				switch(rem){
					case 1:
						printf("saturday");break;
					case 2:
						printf("sunday");break;
					case 3:
						printf("monday");break;
					case 4:
						printf("tuesday");break;
					case 5:
						printf("wednesday");break;
					case 6:
						printf("thursday");break;
					case 0:
						printf("friday");break;
					}
			break;		
		case 11:
			if(30<day){
				printf("Invalid Date");
				
				}
			else			
				switch(rem){
					case 5:
						printf("saturday");break;
					case 6:
						printf("sunday");break;
					case 0:
						printf("monday");break;
					case 1:
						printf("tuesday");break;
					case 2:
						printf("wednesday");break;
					case 3:
						printf("thursday");break;
					case 4:
						printf("friday");break;
					}
			break;	
		case 12:
			if(31<day){
				printf("Invalid Date");
				
				}
			else			
				switch(rem){
					case 3:
						printf("saturday");break;
					case 4:
						printf("sunday");break;
					case 5:
						printf("monday");break;
					case 6:
						printf("tuesday");break;
					case 0:
						printf("wednesday");break;
					case 1:
						printf("thursday");break;
					case 2:
						printf("friday");break;
					}
			break;
		default :
			printf("Invalid date");
		}
	return 0;
}













