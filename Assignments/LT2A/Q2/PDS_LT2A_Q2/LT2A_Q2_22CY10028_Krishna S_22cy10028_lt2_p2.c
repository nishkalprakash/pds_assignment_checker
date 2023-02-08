#include <stdio.h>
#include <stdlib.h>
#define max 100
typedef struct SET{			// Defining a structure SET and creating a linked list

int data;

struct SET *next;

}SET;

SET *create_new_node()
{
	SET *new_node = (SET *)malloc(sizeof(SET));	// creating a new linked list
	scanf("%d", &(new_node->data));
	new_node->next = NULL;
	return new_node;
}

SET *createlist(int n)
{
	if (n <= 0)
		return NULL;
	SET *head = NULL, *ptr;
	head = ptr = create_new_node();
	for (int i = 1; i < n; i++)
		ptr = ptr->next = create_new_node();
	return head;
}

SET *addElements(SET *a, SET *m, SET *n,int x)					// defining a function to add =elements of two list and input that into another list
{
	for (int i = 1; i < x; i++){
		a->data = n->data + m->data;
		a = a->next;
		n = n->next;
		m = m->next;
}

return a;
}

void printlist(SET *I)										// defining a function to print the list
{
	
	while (I != NULL)
	{
		printf("%d ", I->data);
		I = I->next;
	}
	printf("\n");
}
int main()
{
	int a[max],b[max],c[max];
	int n,m;									// creating three new linked list and getting input from the user for that list
	SET *list1;
	SET *list2;
	SET *list;
	printf("#### List 1 ####\n");
	printf("Enter N: ");
	scanf("%d", &n);
	list1 = createlist(n);
	printf("#### List 2 ####\n");
	printf("Enter N: ");
	scanf("%d", &m);
	list2 = createlist(m);				
	list = createlist(n);
	if (m>n)
	{
		int x= m;
	} else x= n;
	addElements(list,list1,list2,x);
	printlist(list);


	return 0;
}