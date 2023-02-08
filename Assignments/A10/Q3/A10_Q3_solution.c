// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to Delete duplicates from a linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
} node;

node *create_new_node()
{
	node *new_node = (node *)malloc(sizeof(node));
	new_node->next = NULL;
	return new_node;
}

int checkDup(node *ptr, int data)
{
	if (ptr == NULL)
		return 0;
	if (ptr->data == data)
		return 1;
	return checkDup(ptr->next, data);
}

node *createlist(int n)
{
	node *head = NULL, *ptr;
	if (n > 0)
	{
		head = create_new_node();
		ptr = head;
		scanf("%d", &(ptr->data));
		for (int i = 1; i < n; i++)
		{
			ptr = ptr->next = create_new_node();
			scanf("%d", &(ptr->data));
		}
	}
	return head;
}

void printlist(node *HEAD)
{
	if (HEAD == NULL)
		printf("\nEMPTY LIST\n");
	node *ptr = HEAD;
	for (; ptr != NULL; ptr = ptr->next)
		printf("%d ", ptr->data);
	printf("\n");
}
// void duplicates()
void max_min_dup(node *HEAD, node **dup_head, int *max, int *min)
{
	node *ptr = HEAD, *n;
	node *dup_tail;

	// int max,min;
	*max = *min = ptr->data;

	for (; ptr != NULL; ptr = ptr->next)
	{
		n = ptr->next;
		if (n != NULL)
		{
			if (*max < n->data)
				*max = n->data;
			if (*min > n->data)
				*min = n->data;
		}
		if (checkDup(n, ptr->data))
		{
			if (!checkDup(*dup_head, ptr->data))
			{
				if (*dup_head == NULL)
				{
					*dup_head = create_new_node();
					dup_tail = *dup_head;
				}
				else
				{
					dup_tail->next = create_new_node();
					dup_tail = dup_tail->next;
				}
				dup_tail->data = ptr->data;
			}
		}
	}
}

int main()
{
	int N;
	node *head, *dup_head = NULL;
	int max, min;
	printf("Enter N: ");
	scanf("%d", &N);
	head = createlist(N);
	// printlist(head);
	max_min_dup(head, &dup_head, &max, &min);
	if (dup_head == NULL)
		printf("The input list does not contain any duplicate\n");
	else
	{
		printf("The input list contains duplicate numbers of: ");
		printlist(dup_head);
	}
	printf("Minimum number is: %d\nMaximum number is: %d\n", min, max);
	return 0;
}
