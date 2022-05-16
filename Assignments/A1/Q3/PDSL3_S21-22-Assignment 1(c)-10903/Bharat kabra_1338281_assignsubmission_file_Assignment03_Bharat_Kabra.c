/*
Name- Bharat Kabra
Roll: 21CH10015
Dept: Chemical
Package: Codeblocks
Assignment class: 1
*/
#include <stdio.h>
#include <math.h>
int main()
{
	int n,d,k;
	float f,m;
	printf("Enter the no. of machines in the company: ");
	scanf("%f",&m);
	printf("Enter the week day number(1-7): ");
	scanf("%d",&d);
	switch(d)
	{
		case 1:
			n=m;
			printf("Number of manufactured cars = %d",n);
			break;
		case 2:
			n=round(m+m/2+m/4);
			printf("Number of manufactured cars = %d",n);
			break;
		case 3:
		case 6:
			printf("Enter no. of machines kept under inspection: ");
			scanf("%d",&k);
			n=round((m-k)+(m-k)/2.0+(m-k)/4.0);
			printf("Number of manufactured cars = %d",n);
			break;
		case 4:
		case 5:
		case 7:
			printf("Enter Boosting Factor: ");
			scanf("%f",&f);
			n=round(m+f*m);
			printf("Number of manufactured cars = %d",n);
			break;
		default:
			printf("Invalid Input!");
	}
	return 0;
}
