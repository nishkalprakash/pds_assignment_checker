
/* 	   SECTION        : 14
	   ROLL NO.       : 22CH10004
	   NAME           : ADMYA MAHESHWARI
	   ASSIGNMENT NO. : 3
	   DESCRIPTION    : PROGRAM TO CHECK IF THE TIME FORMATE IS CORRECT OT NOT
*/


#include<stdio.h>

int main()
{
	

	int HH,MM,SS;
	scanf("%d%d%d",&SS,&MM,&HH);
	if (SS<=59,MM<=59,HH<=23)
	{printf("valid time\n%d%d%d",HH,MM,SS);}
	else printf("invalid time");
	return 0;
}
		
