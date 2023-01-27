/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 10
	Description : Program to store customer data
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct customer 
{
	int acc_no;
	char name[20];
	int balance;
	struct customer* next;
};

typedef struct customer customer;
typedef struct customer* link;

void createlist( link ptr)
{
	
		printf("\nEnter customer info (type 0 in acc_no to quit):\n");

		printf("Enter account number:\n");
		scanf("%d" , &(ptr->acc_no));

		if (ptr -> acc_no == 0)
			return;

		printf("Enter name:\n");
		scanf("%s" , ptr -> name);

		printf("Enter balance:\n" );
		scanf("%d" , &(ptr -> balance));

		ptr -> next  = (customer *)malloc(sizeof(customer));
		
		createlist(ptr -> next);
	

}
int main()
{
	customer * head = (customer *)malloc(sizeof(customer));
	createlist (head);

}

