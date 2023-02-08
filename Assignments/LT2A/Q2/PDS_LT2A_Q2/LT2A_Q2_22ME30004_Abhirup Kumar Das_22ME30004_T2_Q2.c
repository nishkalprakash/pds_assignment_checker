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
	scanf("%d", &(new_node->data));
	new_node->next = NULL;
	return new_node;
}
node *createlist(int n)
{
	if (n <= 0)
		return NULL;
	node *head = NULL, *ptr;
	head = ptr = create_new_node();
	for (int i = 1; i < n; i++)
		ptr = ptr->next = create_new_node();
	return head;
}

void printlist(node *HEAD, char *s)//For Printing the values
{
    printf("%s = {", s);
    if (HEAD == NULL)
    {
		printf("}\n");
		return;
	}
    node *ptr = HEAD;
    for (; ptr->next != NULL; ptr = ptr->next)
        printf("%d, ", ptr->data);
    printf("%d}\n", ptr->data);
}

/*node *add(node *HEAD, char *s){

printf("%s = {", s);
    if (HEAD == NULL)
    {
		printf("}\n");
		return;
	}
    node *ptr = HEAD;
    for (; ptr->next != NULL; ptr = ptr->next)
        printf("%d, ", ptr->data+=ptr->data);
    printf("%d}\n", ptr->data+=ptr->data);
return ptr;
}*/


int main()
{
	int N1,L1,L2,N2;
	node *head;
node *tail;
node *add;
printf("#######L1########\n");
	printf("Enter N: ");
	scanf("%d", &N1);
printf("Enter %d elements: ",N1);
head = createlist(N1);
//for(int i=0;i<N1;i++)
//scanf("%d",&L1);


printf("#######L2########\n");
printf("Enter N: ");
	scanf("%d", &N2);
printf("Enter %d elements: ",N2);
tail = createlist(N2);
//for(int i=0;i<N2;i++)
//scanf("%d",&L2);

printlist(head, "L1");
printf("+\n");
    printlist(tail, "L2");
  //printlist(add, "L");

return 0;
}

