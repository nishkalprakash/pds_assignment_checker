/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:4
Description: This program takes an integer and returns it name in words in the reverse order.
*/
#include<stdio.h>
int main(){
	int rows;
	printf("Enter the number of rows\n");  //The number of rows to be computed.
	scanf("%d",&rows);
	//Loop for the rows.
	for(int count=1;count<=rows;count++){
		//Loop for columns.
		for(int col=1;col<=count;col++){
			//Condition for printing 0 and 1 at the specified places.
			if((col%2)==0){
				printf("0");
			}
			else{
				printf("1");
			}
		}
		//Changing the line.
		printf("\n");
	}
	return 0;
}
