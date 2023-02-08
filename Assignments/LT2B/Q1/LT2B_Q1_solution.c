// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to set subtraction

#include <stdio.h>
#include <stdlib.h>
#define MAX 100
typedef struct node
{
	char data;
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

node *createlist(char *s)
{
	printf("#### %s ####\n", s);
	char temp[MAX];
	printf("Enter string: ");
	node *head = NULL, *ptr;
	scanf("%s", temp);
	if(temp[0]=='\0')
		return head;
	ptr = head = create_new_node();
	ptr->data = temp[0];
	
	for (int i = 1; temp[i] != '\0'; i++)
		if (!checkDup(head, temp[i]))
		{
			ptr = ptr->next = create_new_node();
			ptr->data = temp[i];
		}
	return head;
}

void printlist(node *HEAD, char *s)
{
	printf("%s = {", s);
	if (HEAD == NULL)
	{
		printf("}");
		return;
	}

	node *ptr = HEAD;
	for (; ptr->next != NULL; ptr = ptr->next)
		printf("%c, ", ptr->data);
	printf("%c}\n", ptr->data);
}
node *set_diff(node *HEAD_L1, node *HEAD_L2)
{
	node *L1 = HEAD_L1, *L2 = HEAD_L2;
	node *HEAD_L = NULL, *L = NULL;
	for (; L1 != NULL; L1 = L1->next)
	{
		if (!checkDup(HEAD_L2, L1->data))
		{
			if (HEAD_L == NULL)
			{
				HEAD_L = create_new_node();
				L = HEAD_L;
			}
			else
			{
				L->next = create_new_node();
				L = L->next;
			}
			L->data = L1->data;
		}
	}
	return HEAD_L;
}

int main()
{
	int N;
	node *head_L1, *head_L2, *head_L = NULL;
	int max, min;
	head_L1 = createlist("L1");
	head_L2 = createlist("L2");

	head_L = set_diff(head_L1, head_L2);
	printlist(head_L1, "L1");
	printf(" -\n");
	printlist(head_L2, "L2");
	printf(" =\n");
	printlist(head_L, "L");
	return 0;
}
