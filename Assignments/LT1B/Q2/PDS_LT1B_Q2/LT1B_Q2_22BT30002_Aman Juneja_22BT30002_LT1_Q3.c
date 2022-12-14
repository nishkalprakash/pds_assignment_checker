/*
Section 14
Roll No: 22BT30002
Name:Aman Juneja
Lab Test No : 1
Description: PATTERN PRINTING
*/

#include<stdio.h>					//including standard input output header file

//main function 
int main(){
		
	int n;						//decleration of integer variable n
	printf("Enter the number of rows: ");
	scanf("%d",&n);					//getting input from user
	for(int i=1;i<=n;i++){                          //running a for loop from i=1 to i=n here i denotes row number
		for(int j=1;j<=i;j++){			//since the pattern is of the form left inclined lower triangular so condition is j<=i
			printf("%d ",i);		//since the number printed is the row number so i is printed.
		}
		printf("\n"); 				//printf("\n") to move to next row.
	}
		
	return 0;					//return 0 to exit the main function
}
