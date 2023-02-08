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
    new_node->next = NULL;
    return new_node;
}

void add_node(node **HEAD_L, node **TAIL_L, int data)
{
    if (*HEAD_L == NULL)
    {
        *HEAD_L = create_new_node();
        *TAIL_L = *HEAD_L;
    }
    else
    {
        (*TAIL_L)->next = create_new_node();
        *TAIL_L = (*TAIL_L)->next;
    }
    (*TAIL_L)->data = data;
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
    printf("\n#### %s ####\n", s);
    int N, temp;
    printf("Enter N: ");
    scanf("%d", &N);
    if (N <= 0)
        return NULL;
    printf("Enter %d Numbers: ", N);
    node *head = NULL, *ptr;
    ptr = head = create_new_node();
    scanf("%d", &(ptr->data));
    for (int i = 1; i < N; i++)
    {
        scanf("%d", &temp);
        if (checkDup(head, temp))
            continue;
        ptr = ptr->next = create_new_node();
        ptr->data = temp;
    }
    return head;
}

void printlist(node *HEAD, char *s)
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
int main()
{
    int N;
    node *head_L1, *head_L2;
    int max, min;
    head_L1 = createlist("L1");
    head_L2 = createlist("L2");
    printlist(head_L1, "L1");
    printlist(head_L2, "L2");
    return 0;
}
