// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to print customer banking data

#include <stdio.h>
#include <stdlib.h>
#define MAX_NAME 50

typedef struct Customer
{
	long acc_no;		 // Account Number of the customer
	char name[MAX_NAME]; // Name of the Customer
	long bal;			 // Balance of the customer

	struct Customer *next;		// Next node based on Account Number
	struct Customer *next_bal; // Next node based on Balance
} Customer;

Customer *create_new_node()
{
	Customer *new_node = (Customer *)malloc(sizeof(Customer));

	new_node->next = NULL;
	new_node->next_bal = NULL;

	printf("Enter Account Number: ");
	scanf("%ld", &new_node->acc_no);
	printf("Enter Customer Name: ");
	scanf("%s", new_node->name);
	printf("Enter Balance: ");
	scanf("%ld", &new_node->bal);

	return new_node;
}

void insert_asc_bal(Customer **head_by_bal, Customer *new_node)
{
	if (*head_by_bal == NULL)
	{

		*head_by_bal = new_node;
		return;
	}
	// CASE 1: number to be inserted in place of head_by_bal
	if (new_node->bal > (*head_by_bal)->bal)
	{
		new_node->next_bal = *head_by_bal;
		*head_by_bal = new_node; // as head_by_bal
		return;
	}

	Customer *ptr = *head_by_bal;
	// CASE 2: number to be inserted in the middle or end
	while (ptr != NULL && ptr->next_bal != NULL)
	{
		if (ptr->next_bal->bal < new_node->bal)
			break;
		ptr = ptr->next_bal;
	}

	new_node->next_bal = ptr->next_bal;
	ptr->next_bal = new_node;
}

void insert_asc_ac(Customer **head_by_ac, Customer *new_node)
{
	if (*head_by_ac == NULL)
	{
		*head_by_ac = new_node;
		return;
	}

	// CASE 1: number to be inserted in place of head_by_ac
	if (new_node->acc_no < (*head_by_ac)->acc_no)
	{
		new_node->next = *head_by_ac;
		*head_by_ac = new_node; // as head_by_ac
		return;
	}

	Customer *ptr = *head_by_ac;
	// CASE 2: number to be inserted in the middle or end
	while (ptr != NULL && ptr->next != NULL)
	{
		if (ptr->next->acc_no > new_node->acc_no)
			break;
		ptr = ptr->next;
	}

	new_node->next = ptr->next;
	ptr->next = new_node;
}

void createlist(Customer **head_by_ac, Customer **head_by_bal)
{
	int cont = 0, i = 0;
	Customer *new_node;
	do
	{
		new_node = create_new_node();
		insert_asc_ac(head_by_ac, new_node);
		insert_asc_bal(head_by_bal, new_node);
		printf("%d elements Inserted.\nPress any key to continue (0 to exit): ", ++i);
		scanf("%d", &cont);
	} while (cont);
}

void print(Customer *ptr)
{
	printf("\n#####################\n");
	printf("Account Number: %ld\n", ptr->acc_no);
	printf("Customer Name: %s\n", ptr->name);
	printf("Balance: %ld\n", ptr->bal);
	printf("#####################\n");
}

int main()
{
	Customer *head_by_ac = NULL, *head_by_bal = NULL, *ptr;
	createlist(&head_by_ac, &head_by_bal);
	printf("\n************Printing in order of Account Number******************");
	for (ptr = head_by_ac; ptr != NULL; ptr = ptr->next)
		print(ptr);
	printf("\n************Printing in order of Balance******************");
	for (ptr = head_by_bal; ptr != NULL; ptr = ptr->next_bal)
		print(ptr);
	return 0;
}
