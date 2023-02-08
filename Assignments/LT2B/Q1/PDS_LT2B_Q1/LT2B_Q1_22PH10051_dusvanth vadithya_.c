#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
  char *data;
  struct Node *next;
} Node;

Node *head1 = NULL;
Node *head2 = NULL;
Node *head3 = NULL;

// Function to insert a node into the linked list
void insert(Node **head, char *data) {
  Node *newNode = (Node*)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = *head;
  *head = newNode;
}

// Function to check if a given data is present in the linked list
int isPresent(Node *head, char *data) {
  Node *temp = head;
  while (temp != NULL) {
    if (strcmp(temp->data, data) == 0)
      return 1;
    temp = temp->next;
  }
  return 0;
}

// Function to obtain the difference of two linked lists
void setDifference(Node *head1, Node *head2) {
  Node *temp1 = head1;
  while (temp1 != NULL) {
    if (!isPresent(head2, temp1->data))
      insert(&head3, temp1->data);
    temp1 = temp1->next;
  }
}

// Function to display the linked list
void display(Node *head) {
  Node *temp = head;
  while (temp != NULL) {
    printf("%s ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

int main() {
  char data[20];

  printf("Enter elements for List 1:\n");
  while (scanf("%s", data) == 1) {
    if (isPresent(head1, data))
      continue;
    insert(&head1, strdup(data));
  }

  printf("Enter elements for List 2:\n");
  while (scanf("%s", data) == 1) {
    if (isPresent(head2, data))
      continue;
    insert(&head2, strdup(data));
  }

  setDifference(head1, head2);

  printf("List 1: ");
  display(head1);
  printf("List 2: ");
  display(head2);
  printf("List 1 - List 2: ");
  display(head3);

  return 0;
}