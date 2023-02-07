// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to check the order of a linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	node *next;
} node;

node *create_new_node()
{
	node *new_node = (node *)malloc(sizeof(node));
	scanf("%d", &(new_node->data));
	new_node->next = NULL;
	return new_node;
}

node *createlist(int n)
{
	if (n<=0) return NULL;
	node *head=NULL, *ptr;
	head = ptr = create_new_node();
	for (int i = 1; i < n ;i++)
		ptr = ptr->next = create_new_node();
	return head;
}


int check_order(node *ptr, int asc = 1)
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
	node *head;
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
