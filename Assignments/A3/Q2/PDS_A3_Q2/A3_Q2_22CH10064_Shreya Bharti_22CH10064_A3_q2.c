/* SECTION: 14
   ROLL NO.: 22CH10064
   NAME : SHREYA BHARTI
   ASSIGNMENT NO. : 3
   DESCRIPTION: Program to print number into words. */


#include <stdio.h>
int main(){	
	int num,x,y;					//declaration of variables
	char tens, ones;
	printf("Enter any two digit integer between 20 to 99: ");	//Asks user to input number in the given range
	scanf("%d",&num);						//Reads the input from user

	if (num>=20 && num<=99){
		
	
		y=num/10;
	
		switch(y){						//switch statement for tens place
		
		case 2:
			printf("Twenty ");
			break;
		case 3:
			printf("Thirty ");
			break;
		case 4:
			printf("Forty ");
			break;
		case 5:
			printf("Fifty ");
			break;
		case 6:
			printf("Sixty ");
			break;
		case 7:
			printf("Seventy ");
			break;
		case 8:
			printf("Eighty ");
			break;
		case 9:
			printf("Ninety ");
			break;
		default:
			printf("Enter number in valid range.");
			break;
	}

	
		x=num%10;
		switch(x){						//switch statement for ones place
		case 1:
			printf("One");
			break;
		case 2:
			printf("Two");
			break;
		case 3:
			printf("Three");
			break;
		case 4:
			printf("Four");
			break;
		case 5:
			printf("Five");
			break;
		case 6:
			printf("Six");
			break;
		case 7:
			printf("Seven");
			break;
		case 8:
			printf("Eight");
			break;
		case 9:
			printf("Nine");
			break;
	}
	}
	else{
		printf("Enter number in valid range.");		//warns user to enter number in given range
	}

	
return 0;
}
	

	
