#include <stdio.h>
 #include <stdlib.h>

struct Node
{
int data;
 struct Node*
 next;
};

void push(struct Node** head_ref, int new_data) {
struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
 new_node->data = new_data;
new_node->next = (*head_ref);
(*head_ref) = new_node;
 }


void printList(struct Node* node)
 { while (node != NULL)
      {
printf("%d ", node->data);
node = node->next; }
}

int findMax(struct Node* head)
{ int max = -999999;
 struct Node* current = head;
while (current != NULL)
{ if (current->data > max)
{ max = current->data; }
 current = current->next; }
return max; }

int findMin(struct Node* head)
 { int min = 999999;
struct Node* current = head;
while (current != NULL)
{
if (current->data < min)
{ min = current->data; }
current = current->next; }
return min; }

int checkDuplicate(struct Node* head)
 { struct Node* current = head;
 while (current != NULL)
{ struct Node* runner = current->next;
while (runner != NULL)
{ if (current->data == runner->data) { return 1; }
runner = runner->next; } current = current->next; }
return 0; }

int main()
{ struct Node* head = NULL;
int n, i, x;
printf("Enter the number of elements in the list: ");
scanf("%d", &n); for (i = 0; i < n; i++) { printf("Enter element: ");
scanf("%d", &x); push(&head, x); } printf("The list is: ");
printList(head);
 int max = findMax(head);
int min = findMin(head);
printf("\nThe maximum element in the list is: %d", max);
 printf("\nThe minimum element in the list is: %d", min);
 int duplicate = checkDuplicate(head); if (duplicate == 1) { printf("\nThe list contains duplicate elements.\n"); }
else
{ printf("\nThe list does not contain any duplicate elements.\n"); }
return 0;
 }