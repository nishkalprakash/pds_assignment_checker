#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node *next;
};
struct Node *createList(int n) {
struct Node *head = NULL;
struct Node *temp = NULL;
int i;
for (i = 0; i < n; i++) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    int data;
    printf("Enter data for node %d: ", i+1);
    scanf("%d", &data);
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        temp = newNode;
    } else {
        temp->next = newNode;
        temp = temp->next;
    }
}

return head;