/*
 Section 14
 Roll No: 22CS10049
 Name: Nived Shah	
 Assignment No: 3
 Description: Printing the integer entered in words
*/

#include <stdio.h>

int main(){
	int number, rem, fdigit;
	
	printf("Enter a 2 digit number between 20 and 99 to see its name in words : ");
	scanf("%d", &number);

	rem=number%10; // So as to use the name of the last digit in the name of overall number
	fdigit=number/10; // So as to get the first digit which tells the first part of the name
	
	//following if statement is used just in case the user inputs a number that is not within range of 20 to 99
	
	if((number>19) && (number<100)){
		if(fdigit==2){
			if(rem==1)
				printf("Twenty One");
			else if(rem==2)
				printf("Twenty Two");
			else if(rem==3)
				printf("Twenty Three");
			else if(rem==4)
				printf("Twenty Four");
			else if(rem==5)
				printf("Twenty Five");
			else if(rem==6)
				printf("Twenty Six");
			else if(rem==7)
				printf("Twenty Seven");
			else if(rem==8)
				printf("Twenty Eight");
			else if(rem==9)
				printf("Twenty Nine");
			else if(rem==0)
				printf("Twenty");
		}
		if(fdigit==3){
			if(rem==1)
				printf("Thirty One");
			else if(rem==2)
				printf("Thirty Two");
			else if(rem==3)
				printf("Thirty Three");
			else if(rem==4)
				printf("Thirty Four");
			else if(rem==5)
				printf("Thirty Five");
			else if(rem==6)
				printf("Thirty Six");
			else if(rem==7)
				printf("Thirty Seven");
			else if(rem==8)
				printf("Thirty Eight");
			else if(rem==9)
				printf("Thirty Nine");
			else if(rem==0)
				printf("Thirty");
		}
		if(fdigit==4){
			if(rem==1)
				printf("Forty One");
			else if(rem==2)
				printf("Forty Two");
			else if(rem==3)
				printf("Forty Three");
			else if(rem==4)
				printf("Forty Four");
			else if(rem==5)
				printf("Forty Five");
			else if(rem==6)
				printf("Forty Six");
			else if(rem==7)
				printf("Forty Seven");
			else if(rem==8)
				printf("Forty Eight");
			else if(rem==9)
				printf("Forty Nine");
			else if(rem==0)
				printf("Forty");
		}
		if(fdigit==5){
			if(rem==1)
				printf("Fifty One");
			else if(rem==2)
				printf("Fifty Two");
			else if(rem==3)
				printf("Fifty Three");
			else if(rem==4)
				printf("Fifty Four");
			else if(rem==5)
				printf("Fifty Five");
			else if(rem==6)
				printf("Fifty Six");
			else if(rem==7)
				printf("Fifty Seven");
			else if(rem==8)
				printf("Fifty Eight");
			else if(rem==9)
				printf("Fifty Nine");
			else if(rem==0)
				printf("Fifty");
		}
		if(fdigit==6){
			if(rem==1)
				printf("Sixty One");
			else if(rem==2)
				printf("Sixty Two");
			else if(rem==3)
				printf("Sixty Three");
			else if(rem==4)
				printf("Sixty Four");
			else if(rem==5)
				printf("Sixty Five");
			else if(rem==6)
				printf("Sixty Six");
			else if(rem==7)
				printf("Sixty Seven");
			else if(rem==8)
				printf("Sixty Eight");
			else if(rem==9)
				printf("Sixty Nine");
			else if(rem==0)
				printf("Sixty");
		}

		if(fdigit==7){
			if(rem==1)
				printf("Seventy One");
			else if(rem==2)
				printf("Seventy Two");
			else if(rem==3)
				printf("Seventy Three");
			else if(rem==4)
				printf("Seventy Four");
			else if(rem==5)
				printf("Seventy Five");
			else if(rem==6)
				printf("Seventy Six");
			else if(rem==7)
				printf("Seventy Seven");
			else if(rem==8)
				printf("Seventy Eight");
			else if(rem==9)
				printf("Seventy Nine");
			else if(rem==0)
				printf("Seventy");
		}
		if(fdigit==8){
			if(rem==1)
				printf("Eighty One");
			else if(rem==2)
				printf("Eighty Two");
			else if(rem==3)
				printf("Eighty Three");
			else if(rem==4)
				printf("Eighty Four");
			else if(rem==5)
				printf("Eighty Five");
			else if(rem==6)
				printf("Eighty Six");
			else if(rem==7)
				printf("Eighty Seven");
			else if(rem==8)
				printf("Eighty Eight");
			else if(rem==9)
				printf("Eighty Nine");
			else if(rem==0)
				printf("Eighty");
		}
		if(fdigit==9){
			if(rem==1)
				printf("Ninety One");
			else if(rem==2)
				printf("Ninety Two");
			else if(rem==3)
				printf("Ninety Three");
			else if(rem==4)
				printf("Ninety Four");
			else if(rem==5)
				printf("Ninety Five");
			else if(rem==6)
				printf("Ninety Six");
			else if(rem==7)
				printf("Ninety Seven");
			else if(rem==8)
				printf("Ninety Eight");
			else if(rem==9)
				printf("Ninety Nine");
			else if(rem==0)
				printf("Ninety");
		}
	}
	else
		printf("Number is not within range\n");

	return 0;
}

