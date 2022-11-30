/*
Section 14
Roll No: 22BT30002
Name:Aman Juneja
Assignment No : 3
Description: Program to print the required pattern on the screen given the number of rows as input by the user.
*/

#include<stdio.h>

int main(){
	int rows; //declearation of variable rows
	printf("enter the number of rows : ");
	scanf("%d",&rows); //scanning the variable from user
	//Nested for loop
	//code for printing pattern
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=i;j++){
			//if-else block for printing 0 in even column and 1 in odd column
			if(j%2==0){
				printf("0 ");
			}
			else{
				printf("1 ");
			}		
		}
		//printf statement for going to next line after printing a row.
		printf("\n");
	}
	printf("\n");
	return 0;
}
