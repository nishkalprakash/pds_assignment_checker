/*
Section 14
Roll No:22MI10013
Name:Animesh Mishra
Test No:2
description :
*/
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
struct Node {
     char data;
     struct Node* next;
};
/* a utility function to insert a node */
void push(struct Node** head_ref,char new_data);
/* to check if given data present*/

bool isPresent(struct Node* head,char data);
/* to get union*/
struct Node* getUnion(struct Node* head1,struct Node* head2)
{
  struct Node* result = NULL;
  struct Node* t1 = head1, *t2 = head2;
//insert all elements
// list1 to the result list
while (t1 != NULL) {
     push(&result,t1->data);
     t1 = t1->next;
 }

while (t2 != NULL) {
   if(!isPresent(result,t2->data))
          push(&result,t2->data);
     t2 = t2->next;
     
 }
  return result;
}
struct Node* getInteraction(struct Node* head1,struct Node* head2)
{
    struct Node* result = NULL;
    struct Node* t1 = head1;
   
  while(t1 != NULL) {
     if(isPresent(head2, t1->data))
        push(&result, t1->data);
     t1 = t1->next;
}
    return result ;
}


void push(struct Node** head_ref, char new_data)
{
   //allocate node
    struct Node* new_node
         = (struct Node*)malloc(sizeof(struct Node));
// put in the data
   new_node->data = new_data;
   new_node->next = (*head_ref);
//move the head to point new node
(*head_ref) = new_node;
}
void printList(struct Node* node)
{
  while(node != NULL) {
      printf("%d",node->data);
      node = node->next;
}
}


bool isPresent(struct Node* head,char data)
{
   struct Node* t = head;
   while( t != NULL) {
       if(t->data == data)
          return 1;
      t = t->next;
}
   return 0;
}

int main()
{
char a,b,c,d,e,f ;
// start with empty list
  struct Node* head1 = NULL;
  struct Node* head2 = NULL;
  struct Node* intersecn = NULL;
  struct Node* unin = NULL;

  push(&head1, a);
  push(&head1, b);
  push(&head1, c);
  push(&head1, d);

  push(&head2, c);
  push(&head2, d);
  push(&head2, e);
  push(&head2, f);

  intersecn = getInteraction(head1, head2);
  unin = getUnion(head1, head2);
   
  printf("\n first list is \n");
  printList(head1);

 printf("\n second list is \n");
  printList(head2);

 printf("\n third list is \n");
  printList(intersecn);

 printf("\n fourth list is \n");
  printList(unin);
  
  return 0;


}


























