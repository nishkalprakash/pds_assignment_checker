/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Lab test 1 (Set A)
Discription : To find the perfect numbers upto n. 
*/
#include<stdio.h>

int main()
{	
	int n, i=1, sum=0, j=2;
	printf("Input the value of n.\n"); //Prompts user to input the value upto which perfect numbers are to be calculated.
	scanf("%d", &n);
	if(n<=1)				//Checks if the input is greater than 1
		printf("Invalid Input\n");
	printf("Perfect numbers upto %d are :", n);
	while(j<=n){				//Loop to check which numbers are perfect
		while(i<j){			//Loop to find the factors of each number
			if(j%i==0){
				sum=sum+i;}	//condition for perfect number 
			i++;}
		   if(sum==j)			//checks if the number is perfect or not
		   	printf(" %d", j);
		   j++;
		   sum=0;
		   i=1;}		
return 0;}
