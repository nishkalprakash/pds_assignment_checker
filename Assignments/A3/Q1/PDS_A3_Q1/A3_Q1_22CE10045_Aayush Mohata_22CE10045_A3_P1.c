
/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:3
Discription :To check the valid time.

*/


#include<stdio.h>

int main()
{
	int MM,HH,SS; 
	printf("Enter seconds , minute and hour\n");
	scanf("%d %d %d",&SS,&MM,&HH);
	if((60>SS)&&(SS>0)&&(60>MM)&&(MM>0)&&(24>HH)&&(HH>0))
	{
		printf("Valid time- %d:%d:%d",HH,MM,SS);
	}
	else
	{
		printf("Invalid time");
	}
	return 0;
}
