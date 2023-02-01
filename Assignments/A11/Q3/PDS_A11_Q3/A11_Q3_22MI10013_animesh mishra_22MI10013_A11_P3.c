/*
section 14
roll no:22MI10013
name:animesh mishra
assignment no:11
desccription:input number in sorted linked list
*/
#include<stdio.h>
#include<stdlib.h>
struct Node {
      int data;
      struct Node* next;
};
void display(struct Node* node)
{
      while(node != NULL)
	 {
          printf("%d\n" , node->data);
          node = node->next;
   	}
}

struct Node* newNode(int data)
{ 
      struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
      newNode->data = data;
      newNode->next  = NULL;
     return newNode;
}
  void insertion_sort(struct Node** head, struct Node* newNode)
{
        if(*head == NULL || (*head)-> data >= newNode->data)
{
          newNode->next = *head;
          *head = newNode;
          return;
}

struct Node* current = *head;
while(current->next != NULL && current->next->data<newNode->data)
      current=current->next;
   newNode->next = current->next;
   current->next = newNode;
}

int main()
{
int k;
struct Node*head = NULL;
struct Node*node2 = NULL;
struct Node*node3 = NULL;

head = (struct Node*)malloc(sizeof(struct Node));
node2 = (struct Node*)malloc(sizeof(struct Node));
node3= (struct Node*)malloc(sizeof(struct Node));

head->data = 10;
head->next = node2;

node2->data = 15;
node2->next = node3;

node3->data = 20;
node3->next = NULL;

  printf("linked list before insertion:");
  display(head);
  
printf("\n enter data to insert:");
 scanf("%d" , &k);

insertion_sort(&head, newNode(k));
   printf("Linked list after insertion :");
   display(head);
  
    return 0;
}
































