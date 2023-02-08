// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to set addition

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

node *createlist(char *s)
{
    printf("#### %s ####\n",s);
    int N,temp;
    printf("Enter N: ");
	scanf("%d", &N);
    printf("Enter %d Numbers: ",N);
	node *head = NULL, *ptr;
	if (N <= 0)
		return NULL;
	ptr = head = create_new_node();
	scanf("%d", &(ptr->data));
	for (int i = 1; i < N; i++)
	{
		scanf("%d", &temp);
		if(checkDup(head,temp))
			continue;
		ptr = ptr->next = create_new_node();
		ptr->data=temp;
	}
	return head;
}

void printlist(node *HEAD,char *s)
{
    printf("%s = {",s);
	if (HEAD == NULL)
	{
		printf("}");
		return;
	}
	node *ptr = HEAD;
	for (; ptr->next != NULL; ptr = ptr->next)
		printf("%d, ", ptr->data);
	printf("%d}\n",ptr->data);
}
node *set_add(node *HEAD_L1,node *HEAD_L2)
{
	node *L1 = HEAD_L1,*L2 = HEAD_L2;
    node *HEAD_L=NULL,*L=NULL;
    int sum=0;
	for (; L1 != NULL; L1 = L1->next)
	{
        for (L2=HEAD_L2; L2 != NULL; L2 = L2->next)
        {
            sum=L1->data+L2->data;
            if (!checkDup(HEAD_L, sum))
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
				L->data = sum;
            }
        }
    }
    return HEAD_L;
}

int main()
{
	int N;
	node *head_L1,*head_L2, *head_L=NULL;
	int max, min;
	head_L1 = createlist("L1");
    head_L2 = createlist("L2");

	head_L=set_add(head_L1, head_L2);
    printlist(head_L1,"L1");
    printf(" +\n");
    printlist(head_L2,"L2");
    printf(" =\n");
    printlist(head_L,"L");
	return 0;
}
