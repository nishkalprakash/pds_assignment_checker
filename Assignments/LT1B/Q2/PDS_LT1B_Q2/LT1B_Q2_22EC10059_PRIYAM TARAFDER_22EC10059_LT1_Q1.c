/*
 NAME: Priyam Tarafder
 Roll No.: 22EC10059
 Section: 14
 Question no.: 1
 to display the given pattern according to user input
*/

#include <stdio.h>
int main(){
	int n;
	do{
		scanf("%d",&n); //takes input from user
	}while(n<2 || n>10);
	for(int t=1;t<=n;t++){
		for(int i=1;i<=t;i++)
			printf("%d",t); //end of nested for loop
		printf("\n");
	}//end of for loop
} //end of main function
