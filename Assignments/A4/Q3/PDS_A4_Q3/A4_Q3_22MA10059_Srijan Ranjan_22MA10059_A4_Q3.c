/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:4
Description: This program takes an integer and returns it name in words in the reverse order.
*/
#include<stdio.h>
int main(){
	long int num;
	printf("Enter the number\n");  //The number to be computed.
	scanf("%ld",&num);
	//Consition if number input is zero.
	if(num==0){
		printf("Zero\n");
	}
	//Loop for computation of the last digits so that reverse order can be printed.
	while(num>0){
			int var=(num%10);
			//Switch for printing the number in words.
			switch(var){
				case 1:
					printf("One ");
					break;
				case 2:
					printf("Two ");
					break;
				case 3:
					printf("Three ");
					break;
				case 4:
					printf("Four ");
					break;
				case 5:
					printf("Five ");
					break;
				case 6:
					printf("Six ");
					break;
				case 7:
					printf("Seven ");
					break;
				case 8:
					printf("Eight ");
					break;
				case 9:
					printf("Nine ");
					break;
				case 0:
					printf("Zero ");
					break;
			}
			num=num/10;
	}
	return 0;
}