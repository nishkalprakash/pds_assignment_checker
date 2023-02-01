#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node * next;
};
typedef struct node ELEMENT;
typedef ELEMENT * LINK;
struct node *createlist(int n, int A[])
{
LINK head,tail;
head = (LINK) malloc (sizeof (ELEMENT));
head -> data = A[0];
tail = head;
for(int i=0;i<n;i++)
{
tail -> next=(LINK)malloc(sizeof(ELEMENT));
tail=tail->next;
tail->data=A[i];
tail=NULL;
return head;
}
void printlist(struct node *l)
{
do{
printf("%d", l->data);
l=l ->next;
}
while(l!=NULL){
printf("\n");
LINK insert(int value, LINK ptr)
{
LINK newp, prev, first;
newp = createlist(value);
if (ptr == NULL || value <= ptr -> data)
{
new -> next = ptr;
return newp;
}
else {
first = ptr;
prev = ptr;
ptr = ptr-> next;
while (ptr != NULL && value > ptr -> data)
{
prev = ptr; ptr = ptr

