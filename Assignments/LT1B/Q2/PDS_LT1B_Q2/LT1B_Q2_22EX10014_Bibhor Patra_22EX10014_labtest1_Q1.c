/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Test 1
Description: Program to print the given pattern
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int row,ROW,col; //declaration of variables
	printf("Please enter the number of rows to be printed"); // instruction for user
	scanf("%d",&ROW); // input acquired
	for (row=1;row <= ROW;row++){
		for(col=1;col<=row;col++){
			printf("%d",row);
		}// loop to print the columns
		printf("\n"); // output printed to switch lines in appropriate time
	} //loop to print the complete pattern
	return 0;
}