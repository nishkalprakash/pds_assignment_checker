#include <stdio.h>

int main(){
long int num,r;			//declaration of variables
printf("Enter a number: ");	//Asks user to enter a number
scanf("%ld",&num);		

if (num==0){			
	printf("Zero ");  	//prints zero if the number entered is 0.
}

while(num!=0){			//Loop will get executed till num is positive
	r=num%10;		//r is the remainder when num is divided by 10
	num=num/10;
	
	
	switch(r){				//switch statement
		case 0:
			printf("Zero ");
			break;			
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
	}		
	
}

return 0;
}
