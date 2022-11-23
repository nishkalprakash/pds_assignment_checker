/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 3
Discription : To represent time ot the day
*/
#include<stdio.h>
int main()
{
	int SS, MM, HH;
	printf("Input time of the day in SS MM HH format \n");
	scanf("%d", &SS);
	scanf("%d", &MM);
	scanf("%d", &HH);
	if((60>SS)&&(60>MM)&&(24>HH)&&(SS>=0)&&(MM>=0)&&(HH>=0))
		printf("Valid time - %d:%d:%d", HH, MM, SS);
	else
		printf("Invalid time \n");
	return 0;
}

