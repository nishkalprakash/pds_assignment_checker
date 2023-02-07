// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to check the order of a linked list

#include <stdio.h>
#include <stdlib.h>
#define MAX_NAME 50

typedef struct Customer
{
	long acc_no;     // Account Number of the customer
    char name[MAX_NAME];    // Name of the Customer
    long bal;    //Balance of the customer

	Customer *next;
} Customer;


Customer *create_new_node()
{
	Customer *new_node = (Customer *)malloc(sizeof(Customer));

	new_node->next = NULL;
    printf("Enter Account Number: ");
    scanf("%ld",&new_node->acc_no);
    printf("Enter Customer Name: ");
    scanf("%s",new_node->name);
    printf("Enter Balance: ");
    scanf("%ld",&new_node->bal);

	return new_node;
}

Customer *insert_ascending(Customer *head,Customer *new_node)
{
    if(head==NULL)
        return NULL;

    while
    return head;
}

Customer *createlist()
{
	if (n<=0) return NULL;
	Customer *head=NULL, *ptr;
	head = ptr = create_new_node();
	for (int i = 1; i < n ;i++)
		head=insert_ascending(head,create_new_node());
	return head;
}


int check_order(Customer *ptr, int asc = 1)
{
	// len(list) = 0 or 1
	if (ptr == NULL || ptr->next == NULL)
		return 1;
	if (asc && ptr->data >= ptr->next->data)
		return 0;
	if (!asc && ptr->data <= ptr->next->data)
		return 0;

	return check_order(ptr->next, asc);
}

int main()
{
	int N;
	Customer *head;
	printf("Enter N: ");
	scanf("%d", &N);
	head = createlist(N);
	printf("The input list L is ");
	if (check_order(head))
		printf("in ascending order.");
	else if (check_order(head, 0))
		printf("in descending order.");
	else
		printf("not in sorted order.");

	return 0;
}
