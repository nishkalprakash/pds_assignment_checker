/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 4
Description : Program to read an integer number and display all the factors of the number
*/

#include<stdio.h>

int main()
{
	int num,i;
	printf("Enter a number:\n");
	scanf("%d",&num);
	if(num > 0){
	for(i = 1;i <= num ;i++){
		if(num%i == 0)
			printf("%d ",i);}
	}	
	else if(num == 0)
		printf("0");
	else {
		for(i = -1;i >= num;i--){
		if(num%i == 0)
			printf("%d ",i*(-1));}
	}	
	
	return 0;
}

