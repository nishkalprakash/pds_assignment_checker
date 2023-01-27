#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int isSorted(struct Node* head)
{
    if (!head) return 0;
    if (!head->next) return 1;

    int isAscending = (head->data <= head->next->data) ? 1 : -1;

    while (head->next) {
        if (isAscending == 1 && head->data > head->next->data)
            return 0;
        if (isAscending == -1 && head->data < head->next->data)
            return 0;
        head = head->next;
    }
    return isAscending;
}

int main()
{
    struct Node* head = NULL;

    int n, data;
    printf("Enter the number of elements in the linked list: ");
    scanf("%d", &n);
    printf("Enter the elements of the linked list: ");
    int i;
    for(i = 0; i < n; i++) {
        scanf("%d", &data);
        push(&head, data);
    }

    int isSortedVal = isSorted(head);
    if (isSortedVal == -1)
        printf("Linked list is sorted in ascending order\n");
    else if (isSortedVal == 1)
        printf("Linked list is sorted in descending order\n");
    else
        printf("Linked list is not sorted\n");
    return 0;
}