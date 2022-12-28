/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 6
 Description : Program to write k(to be taken as input) terms of a series
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
long long int print_term(int n){          //defining the print_term function
	if(n==0||n==1||n==2){    //base case
		return n;
	}
        else{	                 //recursive case
		return (3*(print_term(n-1))*(print_term(n-2))-2*(print_term(n-2))*(print_term(n-3))+1);
	}
}

int main(){
	int k;
	scanf("%d",&k);
	if(k<0){                   //when user gives invalid input
		printf("Invalid Input");
	}
	else{
		for(int i=0;i<k;i++){     
			printf("%lld ",print_term(i));     //calling the print_term
		}
	}
}
	
