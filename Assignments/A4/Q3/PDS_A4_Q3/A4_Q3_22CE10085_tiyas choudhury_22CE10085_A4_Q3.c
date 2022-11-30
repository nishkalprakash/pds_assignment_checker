/*
   Section 14 
   Roll No : 22CE10085
   Name : Tiyas Roy Choudhury
   Assignment No : 4
   Description : Program  to enter the digts of the number in words in reverse order
*/
#include<stdio.h>
int main()
{
	long num;int n;
	printf("Enter a number between 0 and 999999999:");//Takes input from user
	scanf("%ld",&num);
	while(num!=0){
		n=num%10;//Extracts last digit
		if(n==0){
			printf("Zero ");
		}
		else if(n==1){
			printf("One ");

		}
		else if(n==2){
			printf("Two ");
		}
		else if(n==3){
			printf("Three " );
		}
		else if(n==4){
			printf("Four " );
		}
		else if(n==5){
			printf("Five " );
		}
		else if(n==6){
			printf("Six " );
		}
		else if(n==7){
			printf("Seven " );
		}else if(n==3){
			printf("Three " );
		}
		else if(n==8){
			printf("Eight " );
		}
		else if(n==9){
			printf("Nine " );
		}
		else{
			continue;
		}
		num=num/10;
	}
	return 0;

	}
