#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node * next;
};
typedef struct node ELEMENT;
typedef ELEMENT *LINK;
struct node *createlist(int n,int A[])
{
LINK head,tail;
head=(LINK*)malloc(sizeof(ELEMENT));
head->data=A[0];
tail=head;
for(int i=0;i<n;i++)
{
tail->next=(LINK*)malloc(sizeof(ELEMENT));
tail=tail->next;
tail->data=A[i];
tail=NULL;
return head;
}}
void printlist(struct node *l)
{
do
{
printf("%d",l->data);
l=l->next;
}
while(l!=NULL);
{
printf("\n");
}}

LINK insert (int value, LINK ptr)
{ LINK newp, prev, first;
newp = (LINK)malloc(sizeof(ELEMENT));
newp -> next = ptr;
if (ptr == NULL || value <= ptr -> data)
{ // insert as new first node
newp -> next = ptr;
return newp; // return pointer to first node
}
else { // insert in the middle (not first element)
first = ptr; // remember start
prev = ptr;
ptr = ptr-> next;
while (ptr != NULL && value > ptr -> data)
{ prev = ptr; ptr = ptr -> next; }
prev -> next = newp; // link in
newp -> next = ptr; //new node
return first;
}
}
int main()
{
int n,m;
printf("enter the numbers of elements in the list\n");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("enter the value to be inserted");
scanf("%d",&m);
LINK head=createlist(n,arr);
LINK final=insert(m,head);
printf("output after the insertion%d",m);
printlist(final);
return 0;
}



