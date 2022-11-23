/*	SECTION        :14
	ROLL NO.       :22CH10004
	NAME           :ADMYA MAHESHWARI
	ASSIGNMENT NO. :3
	DESCRIPTION    :A c code for simple calculator for +,-,*,/ of 2 numbers
*/

#include<stdio.h>

int main()
{	char a;
	float x,y;
	printf("entre a character");
	scanf("%c",&a);
	printf("entre two floting values");
	scanf("%f%f",&x,&y);
	
	if (a=='+')
	{printf("x+y= %f",(x+y));}

	if (a=='-')
	{printf("x-y= %f",(x-y));}

	if (a=='*')
	{printf("x*y= %f",(x*y));}

	if (a=='/')
	{printf("x/y= %f",(x/y));}

		   return 0;
}
