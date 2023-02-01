/*
NAME:AJMEERA UDAY KIARN
ROLL NO:22CY10008
SECTION:14
ASSIGNMENT:11
Description:
*/
#include <stdio.h>
#include <stdlib.h>
 
struct node {
   int data;
   struct node* next;
};
   void deletenode(struct node** head,int data) {
  if (*head == NULL) return;
  
  struct node* current = *head;
  struct node previous = NULL;
  while (current !=NULL && current->current data !=data) {
       previous = current;
       current = current->next;
}
  if (current == NULL) return;
  if (previous == NULL){
      *head = current->next;
       free(current);
  }else {
      previous->next = current->next;
      free(current);
   }
}
void printlist(struct node* head){
   while (head !=NULL) {
     printf("%d",head->data);
     head = head->next;
  }
   printf("\n");
}
 int main() {
 struct node* head = NULL;
 
  int n,m;
  scanf("%d", &n);
  for (int i = 0; i < n; i++){
   int data;
    scanf("%d", &data);
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data - data;
    newnode->next = data;
    head = newnode;
}
  scanf("%d", &m);
  deletenode(&head, m);
 printlist(head);

 return 0;
}
