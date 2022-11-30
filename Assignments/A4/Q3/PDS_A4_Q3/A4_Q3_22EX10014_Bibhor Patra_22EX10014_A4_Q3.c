/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment no:3
Description:
*/

#include<stdio.h>
#include<math.h>
int main(){
	long int number,digit; // declaration of variables
	printf("please enter number");
	scanf("%ld",&number); // input acquired
	if(number==0){printf("zero");} // output printed if number is zero
	else{
		while(number>0){
			digit=number%10;
			switch(digit){
			case 1: printf("one");
			break;
			case 2: printf("two");
			break;
			case 3: printf("three");
			break;
			case 4: printf("four");
			break;
			case 5:printf("five");
			break;
			case 6: printf("six");
			break;
			case 7: printf("seven");
			break;
			case 8: printf("eight");
			break;
			case 9: printf("nine");
			break;
			case 0: printf("zero");
			break;}
			number= number/10;

		}//output printing finished
	}
	return 0;
}