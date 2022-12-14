/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Lab Test No. : 1
Description : Writing a program that prints out a pattern based on the user input
*/

#include<stdio.h>

int main(){

	int n,row,column,i=1;					//Here we are defining all our variables
	printf("Enter an integer in the range [2,10] : ");
	scanf("%d",&n);						//Here we are taking an integer input from the user
	
	if(n>10||n<2)
		printf("Invalid input\n");			//Display of the message Invalid input if the input is outside the range specified

	if(n>=2&&n<=10){
		for(row=1;row<=n;row++){			//Initiating a for loop for rows
			for(column=1;row>=column;column++,i++){ //Initiating another for loop for column nested inside the previous loop
				printf("%d ",i);		//Printing the resulting figure
			}
			printf("\n");				
		}
	}
return 0;
}
