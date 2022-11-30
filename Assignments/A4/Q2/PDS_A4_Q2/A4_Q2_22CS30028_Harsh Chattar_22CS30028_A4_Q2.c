/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 4
Description :  printing sum of digits of a given number
*/




#include <stdio.h>  //including the header file

int main(){
	int n, temp,sum=0,digit,check;
	printf("Enter a number : ");
	scanf("%d",&n);     //taking input
	temp = n;
	if(n<0) {        //checking for negative inputs
	n*=-1;
	check = 1; 
	}
	else
	{
	check = 0;
	}
	while(temp != 0)
	{
		digit = temp%10;    //extracting digits one by one
		sum+=digit;  		//adding those extracted digits
		temp = temp/10; 	//truncating a digit off the given number after each iteration
	}
	printf("The Sum of its digits is : ");
	if(check==1)    //printing sum along with sign
	{
	printf("%d",sum*(-1));
	}
	else
	{
	printf("%d",sum);
	}





	return 0;
}
