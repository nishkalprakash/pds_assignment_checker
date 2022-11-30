/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 4
Description : Program to display factors of a number
*/
#include<stdio.h>
int main(){
	int n;
	printf("Enter number : ");
	scanf("%d", &n);
	if(n==0) printf("0"); //specifying special case for 0
	if(n<0) n=(0-n); //converts negative number to positive
	for(int count=1;count<=n;count++){//for loop checks for every number until the number itself
		if(n%count==0) printf("%d ", count); //prints numbers which give remainder=0
		}
	return 0;
}
				
