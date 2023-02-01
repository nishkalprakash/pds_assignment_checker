/*
section 14
ANUSHREE GHOSH
22CH30005
ASSIGNMENT 11
description:deleting value from a linked list
*/

#include<stdio.h>
#include<string.h>
typedef struct{
               int data;
               node *next;
}node;

 void *createlist(int n,int a[])
{
 node *head,*ptr;
 node *head=(node*)malloc(sizeof(node));
 ptr=head;

 for(int i=0;i<n;i++)
 {
   ptr->data=a[i];
   ptr->next=(node*)malloc(sizeof(node));
   ptr=ptr->next;
 }
   ptr=NULL;
   return head;
}
void *printlist(node *I)
{
  if(I==NULL)
  {
    printf("list is empty\n");
  }
  while(I->next!=NULL)
  {
    printf("%d",I->data);
    I=I->next;
  }
    printf("\n");
}

 node *create_node(int val)
{
  node *newp;
  newp=(node*)malloc(sizeof(node));
  newp->data=val;
  return (newp);
}

 LINK delete_item(int val, LINK ptr) {
 LINK prev, first;
 first = ptr; // remember start
   if (ptr == NULL) return NULL;
   else if (val == ptr -> data)
{ 
// first node is to be deleted
 ptr = ptr -> next; // second node
 first->next = NULL;
 free(first); // free up node
 return ptr; // 2 nd node is new head
}
 else // check rest of list
{
 prev = ptr;
 ptr = ptr -> next;
// find node to delete
  while (ptr != NULL && val > ptr->data) {
 prev = ptr;
 ptr = ptr -> next;
}


 void *printlist(node *I)
{
  if(I==NULL)
  {
    printf("list is empty\n");
  }
  while(I->next
  if (ptr == NULL || val != ptr->data) 
{
// NOT found in ascending list
  return first; // original
}
 else 
 { // found, delete ptr node
 prev -> next = ptr -> next;
  ptr->next = NULL;
  free(ptr); // free node
 return first; // original
 }
}

 int main()
{
 int n;
 int a[MAX];
 
 printf("enter the number of elements");
 scanf("%d",&n);
  
 printf("enter the elements of the array");
 for(int i=0;i<n;i++)
   scanf("%d",&a[i]);


 return 0;
}
