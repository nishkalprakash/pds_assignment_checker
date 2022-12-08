/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 5
Description : to write c program to make guessing  game
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));			
	int n,r=(rand()%100)+1;
	for(int i=1;i<=5;i++)
	{
		scanf("%d",&n);
		printf("\n");
		if(n==r)
		{
		printf("winner\n");
		break;
		}
		else
		{
		if(n>r)
		{
		printf("your guess is too big\n");
		}
		else
		{
		printf("your guess is too small\n");
		}
		}
	}
	if(n!=r)
	printf("Loser. The number was %d", r);
	return 0;
}

