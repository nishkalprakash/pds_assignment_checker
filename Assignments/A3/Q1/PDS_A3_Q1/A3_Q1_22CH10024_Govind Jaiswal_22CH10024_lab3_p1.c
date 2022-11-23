/*
Section 14
Roll no. :22CH10024
Name : Govind Jaiswal
Description : Program to print correct time
*/

#include <stdio.h>

int main()
{
	int h,m,s;
	printf("Enter hours,minutes and seconds to print");
	scanf("%d%d%d",&s,&m,&h);
	if(h > 23 || m >59 || s >59)
	printf("Invalid time");
	else 
	printf("Valid time - %d:%d:%d",h,m,s);
	return 0;
}
