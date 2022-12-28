/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 1
Description : Printing the sum of given series by using recursions
*/

#include<stdio.h>

int print_term(int n){		//Creating a funtion called print_term
	if(n==0||n==1||n==2)	//base case
		return(n);
		return(3*print_term(n-1)*print_term(n-2)-2*print_term(n-2)*print_term(n-3)+1);
}

int main(){
	int k;
	printf("Enter the number of terms you want : ");
	scanf("%d",&k);		//Taking the input for number of terms
	if(k<0)
		printf("Invalid input ");
	else{
		for(int i=0;i<k;i++){
			printf("%d",print_term(i));	//Printing the terms
		if(i!=k-1)
			printf(",");
		}
	}
return 0;
}
