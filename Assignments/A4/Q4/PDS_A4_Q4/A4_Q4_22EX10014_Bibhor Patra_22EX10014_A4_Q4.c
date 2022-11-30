/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment no:3
Description: program to print a specifit pattern
*/

#include<stdio.h>
#include<math.h>
int main(){
	int current_row,row,column; // declaration of variables
	printf("please enter number");
	scanf("%d",&row); // input acquired
	for(current_row=1;current_row<=row;current_row++){
		for(column=1;column<=current_row;column++){
			if(column%2==0){printf("0");}
			else{printf("1");}
		}// pattern printed in one line
		printf("\n"); //line changed
	} // output printing complete

return 0;}
	
