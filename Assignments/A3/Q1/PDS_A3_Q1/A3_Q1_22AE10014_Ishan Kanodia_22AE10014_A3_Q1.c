/*
Section : 14
Roll Number : 22AE10014
Name : Ishan Kanodia
Assignment number : 3
Description : Taking an input of three integers and displaying the time if it is valid
*/

#include<stdio.h>
int main()
{
	int SS , MM , HH ;
	scanf("%d %d %d",&SS,&MM,&HH);//Here we are taking an input of the integers
	if (HH > 23)
		printf("Invalid time");//condition that says hours should not be >23
	else if (MM >= 60)
		printf("Invalid time");//condition that says minutes should not be >=60
	else if (SS >= 60)
		printf("Invalid time ");//condition that says hours should not be >=60
	else printf("Valid time - %d:%d:%d ",HH,MM,SS);//We are printing the time

return 0 ;
}

