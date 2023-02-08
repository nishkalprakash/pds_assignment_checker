// Code creator: Simranjeet (009.simran@gmail.com) & Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to UNION and INTERSECTION of 2 sets


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

node *set_union(node *HEAD_L1, node *HEAD_L2)
{
    node *L1 = HEAD_L1, *L2 = HEAD_L2;
    node *HEAD_L = NULL, *TAIL_L = NULL;
    for (; L1 != NULL; L1 = L1->next)
        add_node(&HEAD_L, &TAIL_L, L1->data);
    for (; L2 != NULL; L2 = L2->next)
        if (!checkDup(HEAD_L, L2->data))
            add_node(&HEAD_L, &TAIL_L, L2->data);
    return HEAD_L;
}
node *set_inter(node *HEAD_L1, node *HEAD_L2)
{
    node *L1 = HEAD_L1, *L2 = HEAD_L2;
    node *HEAD_L = NULL, *TAIL_L = NULL;
    for (; L1 != NULL; L1 = L1->next)
        if (checkDup(HEAD_L2, L1->data))
            add_node(&HEAD_L, &TAIL_L, L1->data);
    for (; L2 != NULL; L2 = L2->next)
        if (checkDup(HEAD_L1, L2->data) && !checkDup(HEAD_L, L2->data))
            add_node(&HEAD_L, &TAIL_L, L2->data);
    return HEAD_L;
}
int main()
{
    node *head_L1, *head_L2, *head_L_union = NULL, *head_L_inter = NULL;
    head_L1 = createlist("L1");
    head_L2 = createlist("L2");

    head_L_union = set_union(head_L1, head_L2);
    head_L_inter = set_inter(head_L1, head_L2);
    printlist(head_L1, "L1");
    printlist(head_L2, "L2");
    printlist(head_L_union, "L (Union)");
    printlist(head_L_inter, "L (Interection)");
    return 0;
}
