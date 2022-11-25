/* 
Section 14
Roll No. 22CY10028
Name : Krishna
Assignment No : 3
Description : Program to check points 
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int i,t,o;
	char a, b; 
	printf("Enter the two digit integer :");
	scanf("%d",&i);
	t = i/10;
	o = i%10;
	switch (t){
	case 2:		
		printf("TWENTY");
		break;
	case 3:
		printf("THIRTY");
		break;
	case 4:
		printf("FOURTY");
		break;
	case 5:
		printf("FIFTY");
		break;
	case 6:
		printf("SIXTY");
		break;
	case 7:
		printf("SEVENTY");
		break;
	case 8:
		printf("EIGHTY");
		break;
	case 9:
		printf("NINETY");
		break;
}

	switch (o){
	case 0:
		printf(" ");
		break;
	case 1:
		printf("ONE");
		break;
	case 2:
		printf("TWO");
		break;
	case 3:
		printf("THREE");
		break;
	case 4:
		printf("FOUR");
		break;
	case 5:
		printf("FIVE");
		break;
	case 6:
		printf("SIX");
		break;
	case 7:
		printf("SEVEN");
		break;
	case 8:
		printf("EIGHT");
		break;
	case 9:
		printf("NINE");
		break;
}
	

return 0;
}
