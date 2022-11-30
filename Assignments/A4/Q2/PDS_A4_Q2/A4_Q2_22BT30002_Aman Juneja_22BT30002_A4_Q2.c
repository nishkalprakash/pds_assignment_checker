/*
Section 14
Roll No: 22BT30002
Name:Aman Juneja
Assignment No : 4
Description: to read an integer from the keyboard and print the sum of digits and for a negative number print negative sum. 
*/

#include<stdio.h>

int main(){
	int a,sum=0,y; //decleartion of integer and initialization of sum = 0
	printf("Enter the number: ");
	scanf("%d",&a);	//scanning number from the user
	int x=a;
	//case-1 a=0
	if(a=0){ 
		printf("The sum of digits is :0");
		return 0;
	}
	//case-2 when a is not equal to 0
	while(x!=0){
		y=x%10; //taking remainder by 10 to access last digit
		sum=sum+y; //adding last digit to variable sum
		x=x/10; //dividing by 10 to truncate last digit
	}
        //when a is negative 
	if(a<0){
		sum=sum*(-1);
	}
	printf("the sum of digits of number is : %d\n",sum);



	return 0;
}
