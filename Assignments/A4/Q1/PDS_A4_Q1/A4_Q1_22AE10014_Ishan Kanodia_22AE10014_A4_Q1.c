/*
Section : 14
Roll Number : 22AE10014
Name : Ishan Kanodia
Assignment number : 4
Description : Taking an integer input and giving its factors as output */

#include <stdio.h>
int main()
{

	int a,i;
	printf("Enter an integer ");
	scanf("%d",&a);//Taking an input from the user

	if(a==0)
		printf("0 ");

	i=1;
	while(a>=i){
		if(a%i==0)
			printf("%d ",i);
		i=i+1;
	}//creating a loop for positive numbers
	
	while(-a>=i){
		if(-a%i==0)
			printf("%d ",i);
		i=i+1;
	}//creating a loop for negative numbers
return 0;
}
