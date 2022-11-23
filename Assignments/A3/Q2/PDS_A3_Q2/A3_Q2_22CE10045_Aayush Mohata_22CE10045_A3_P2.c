/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:3
Discription :To convert numbers into words 

*/

#include<stdio.h>
int main()
{
	int num,a,b;
	printf("Enter the number ");
	scanf("%d",&num);
	a=num/10;
	b=num%10;
	if((num>19)&&(100>num))
	{
	switch(a)
	{
	
	case 2:
		printf("twenty ");
		break;
	case 3:
		printf("thirty ");
		break;
	case 4:
		printf("forty ");
		break;
	case 5:
		printf("fifty ");
		break;
	case 6:
		printf("sixty ");
		break;
	case 7:
		printf("seventy ");
		break;
	case 8:
		printf("eighty ");
		break;
	case 9:
		printf("ninety ");
		break;
	}
	switch(b)
	{
	case 1:
		printf("one");
		break;
	case 2:
		printf("two");
		break;
	case 3:
		printf("three");
		break;
	case 4:
		printf("four");
		break;
	case 5:
		printf("five");
		break;
	case 6:
		printf("six");
		break;
	case 7:
		printf("seven");
		break;
	case 8:
		printf("eight");
		break;
	case 9:
		printf("nine");
		break;

	}
	}
	return 0;
}















