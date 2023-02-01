/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 11
Description : Program to check if the given number belongs 
              to the Fibonacci series using recursion
*/

#include<stdio.h>

int Fibo(int n)
{
	if(n == 0)
		return 0;
	else if(n == 1)
		return 1;
	else 
		return Fibo(n-1) + Fibo(n-2);
}

int main()
{
	int n,i,arr[20];
	char check = 'F';

	printf("Enter number(0 - 100):\n");
	scanf("%d",&n);

	for(i = 0;i < 20;i++){
		arr[i] = Fibo(i);
	}

	for(i = 0;i < 20;i++){
		if(n == arr[i]){
			printf("Yes\n");
			check = 'T';			
			break;
		}
	}
	if(check == 'F')
		printf("No\n");


	return 0;
}