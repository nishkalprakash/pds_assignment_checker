/*
Name           : Admya Maheshwari
Roll no.       : 22CH10004
Section        : 14
Lab test no.   : 1
Discription    : A c program to print the pattern given on the question 

*/

#include<stdio.h>

int main(){
	//count is declared here
	int count=1;
	int N;
	printf("enter a number in the range of [2,10] :");
	scanf("%d",&N);
	//main function 
	for(int i=1;i<=N;i++){
		
		for(int j=1;j<=i;j++){
			printf("%d",count); count++;
						    }
								
			printf("\n"); 
				     }


	return 0;
}

