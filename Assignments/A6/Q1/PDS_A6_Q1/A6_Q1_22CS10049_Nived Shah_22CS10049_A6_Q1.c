/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. :5
Description: To print n terms of a series based on user input
*/

#include <stdio.h>

int print_term(int n){
	int t;
	if(n==0 || n==1 || n==2)
		return(n);		//for first 3 terms
	else
		return(3*print_term(n-1)*print_term(n-2) -2*print_term(n-2)*print_term(n-3)+1); //for next terms
	
}
int main(){
	int num, i;
	printf("Enter the number of terms for the series:\ntn= 3t(n-1)t(n-2) - 2t(n-2)t(n-3) + 1\nValues of t(0) t(1) and t(2) are 0 1 2 respectively. ");
	scanf("%d", &num);
	if(num<0)
		printf("Invalid input");
	else
		for(i=1; i<=num; i++){
			if(i!=num)	//if condition to print comma between terms
				printf("%d, ", print_term(i-1));	
			else
				printf("%d", print_term(i-1));
		}
}
		



