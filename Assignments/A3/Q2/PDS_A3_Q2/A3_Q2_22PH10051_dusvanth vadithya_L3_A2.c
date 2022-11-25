/*Section 14
Roll /*no : 22CS30010
Name : VADITHYA DUSVANTH
Assignment : 3
description : program to check point
*/
#include<stdio.h>
int main()
{
	int a;
	 printf("enter 20-99");
	 scanf("%d" ,&a);
	 if(a<20||a>99)
	 {
	   printf("out of range");
	   return 0;
         }
	int i=a/10,j=a%10;

	if(i==2)
	{
	printf("twenty");
	}
	else if(i==3)
	{
	printf("thirty");
	}
	else if(i==4)
	{
	printf("fourty");
	}
	else if(i==5)
	{
	printf("fifty");
	}
	else if(i==6)
	{
	printf("sixty");
	}
	else if(i==7)
	{
	printf("seventy");
	}
	else if(i==8)
	{
	printf("eihty");
	}
	else if(i==9)
	{
	printf("ninty");
	}
        else
	{
		printf("not found");
	}
	if(j==0)
	{
	printf(" ");
	}
	else if(j==1)
	{
	printf("one");
	}
	else if(j==2)
	{
	printf("two");
	}
	else if(j==3)
	{
	printf("three");
	}
	else if(j==4)
	{
	printf("four");
	}
	else if(j==5)
	{
	printf("five");
	}
	else if(j==6)
	{
	printf("six");
	}
	else if(j==7)
	{
	printf("seven");
	}
	else if(j==8)
	{
	printf("eigth");
	}
	else if(j==9)
	{
	printf("nine");
	}
	return 0;
}
