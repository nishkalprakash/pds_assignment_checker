/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 4
Description :  printing all the factors of a given number
*/




#include <stdio.h>  //including the header file

int main(){
	int n;
	printf("Enter an integer : \n "); 
	scanf("%d",&n);		//taking input 
	if(n<0) n = (-1)*n;	//checking for negative inputs

	for(int i=1;i<=n;i++)
	{
	if(n%i == 0) printf("%d ",i); //checking all numbers less than the given no. for factors
	}
	
	return 0;
}
