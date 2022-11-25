/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 3
Description : Program to display valid time 
*/




#include <stdio.h>  //including the header file

int main(){
	int s,m,h;   //declaring variables
	printf("Enter seconds, minutes and hours : \n");
	scanf("%d%d%d",&s,&m,&h);  //taking input
	if(s<60 && m<60 && h<24 && s>=0 && m>=0 && h>=0)
	{
	printf("Valid time - %d:%d:%d ",h,m,s); //printing valid time
	}
	else printf("Invalid Time");
	
	return 0;
}
