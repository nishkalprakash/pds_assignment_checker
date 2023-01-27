/*
Name : Govind Jaiswal
Roll no. : 22CH10024
Section : 14
Assignment no. : 10
Description : Program to print records of a customer
*/

#include <stdio.h>
#include <stdlib.h>

struct Customer
{
	int accno;
	char name[50];
	int balance;
	struct Customer *next;
};
typedef struct Customer custom;

custom *create(custom *head)
{
	int accno,balance;
	char name[50];
	custom *ptr = head;
	
	printf("Enter details of the customer\n");
	scanf("%d",&ptr->accno);
	scanf("%s",ptr->name);
	scanf("%d",&ptr->balance);

	if(ptr->balance == -99)
		ptr->next = NULL;
	else
	{
		ptr->next = (custom *)malloc(sizeof(custom));
		ptr->next = create(ptr->next,no-1);
	}
}



int main()
{
	custom *head;
	int n;
	printf("Enter no. of customers\n");
	scanf("%d",&n);
	head = create(head);
	
}

	
