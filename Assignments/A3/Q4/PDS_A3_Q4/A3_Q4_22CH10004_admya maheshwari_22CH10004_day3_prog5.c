/* 	   SECTION        : 14
	   ROLL NO.       : 22CH10004
	   NAME           : ADMYA MAHESHWARI
	   ASSIGNMENT NO. : 3
	   DESCRIPTION    : A c program to find ot the electricity bill according 				    to the unit used
*/

#include<stdio.h>

int main()
{	int unit_used;
	float bill;
	printf("number of unit used");
	scanf("%d",&unit_used);
	if(unit_used<=100)
		{bill = 50;}

	else if(unit_used>100 && unit_used <=200)
		{bill = 50+(unit_used-100)*0.75;}

	else if(unit_used>200 && unit_used <=300)
		{bill = 50+(unit_used-200)*1.20+100*0.75;}

	else if(unit_used>300)
		{bill = 50+(unit_used-300)*1.5+100*1.95;}
	
	printf("bill = %f",bill+bill*0.2);
return 0;}
