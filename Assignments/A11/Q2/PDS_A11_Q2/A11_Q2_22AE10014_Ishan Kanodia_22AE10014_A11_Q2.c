/*
Section : 14
Roll Number : 22AE10014
Name : Ishan Kanodia
Assignment number : 11
Question number : 2
Description : Check if number belongs to the fibonacci series
*/

#include<stdio.h>
#include<stdlib.h>

int fib(int n){								//Function for fibonacci numbers
	if(n==0)return 0;
	if(n==1)return 1;
	return fib(n-1)+fib(n-2);	
}	

int main(){
	int n;
	int flag=0;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	for(int i=0;i<=10;i++){					//Loop for checking if our number is equal to a fibonacci number
		if(n==fib(i)){
			printf("Yes\n");				//Yes case
			flag=1;
			break;
		}
		else{
			flag = 0;
		}
	}

	if(flag==0)printf("No\n");				//No case
return 0;
}