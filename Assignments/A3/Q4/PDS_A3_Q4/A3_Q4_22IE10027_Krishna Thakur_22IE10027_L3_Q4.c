/*
Section 14
Roll No:22CS30010
Name :Krishna Thakur
Assignment No:3
Description: program to calculate electric bill
*/
#include <stdio.h>
int main()
{
	printf("Enter the total number of electric units consumed");
	int e;
	float p;
	scanf("%d", &e);
	if ((e>=1)&&(e<=100)) p=50;
	else if ((e>100)&&(e<=200)) p=(50+((e-100)*0.75));
	else if ((e>200)&&(e<=300)) p=(125+((e-200)*1.20));
	else if (e>300) p= (245+((e-300)*1.50));

	printf("The electric bill is %f", p);
	return 0;

}

