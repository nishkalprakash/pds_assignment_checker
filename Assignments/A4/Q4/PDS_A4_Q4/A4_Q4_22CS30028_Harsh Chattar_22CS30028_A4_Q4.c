/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 4
Description :  Pattern printing
*/




#include <stdio.h>  //including the header file

int main(){
	int n;
	printf("Enter no. of rows :" );  //input of no. of rows
	scanf("%d",&n);
	for(int i = 1;i<=n;i++)       //using nested loops
	{
		for(int j=1;j<=i;j++)
		{
			if(j%2==0) printf("0 ");   //printing alternate 1's and 0's 
			else printf("1 ");
		} 
		printf("\n");   //moving to the next line for printing the next row
	}


	return 0;
}
