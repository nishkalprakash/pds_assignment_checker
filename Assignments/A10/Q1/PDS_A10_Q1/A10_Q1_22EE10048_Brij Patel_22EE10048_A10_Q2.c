/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 9

Description-
*/
#include<stdio.h>//INCLUDING PACKAGE
#include <stdlib.h>
struct node //DEFINING STRUCTURE VARIABLE
{
	int d;
	struct node* next;
};
typedef struct node ELEMENT;
typedef ELEMENT* LINK;
struct node* createlist(int n,int A[])
{
LINK head,tail;
head=(LINK)malloc(sizeof(ELEMENT));
head->d=A[0];
tail=head;
for(int i=1;i<n;i++)
{
tail->next=(LINK)malloc(sizeof(ELEMENT));
tail=tail->next;
tail->d=A[i];
}
tail=NULL;
return head;
}
void printlist(struct node* l)
{
do
{
printf("%d ",l->d);
l=l->next;
}while(l!=NULL);
}
// delete the item from ascending list
LINK delete_item(int val, LINK ptr)
  {
 LINK prev, first;
first = ptr;
if (ptr== NULL)  return  NULL;
else  if (val== ptr-> d)
{
ptr= ptr-> next;
first->next = NULL;
free(first);
return ptr; 
}
else
{     prev= ptr;ptr= ptr-> next;
while (ptr!= NULL && val> ptr->d)
 {
prev= ptr;
ptr= ptr-> next;
}
if (ptr== NULL || val!= ptr->d) 
 {
return first;
}
else
 {
prev-> next = ptr-> next;
ptr->next = NULL;
free(ptr);
return first;
}}}
void even(struct node* l)
{
LINK prev=NULL,travel=l;
int n1=1;
while(travel!=NULL)
{
if(n1%2==1)
prev->next=travel->next;
prev=travel;
travel=travel->next;
}
printlist(prev);
}
int main()
{
int n;
printf("Enter number of elements: ");
scanf("%d",&n);
printf("Enter Array Elements: "); 
int a[n];
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
LINK head=createlist(n,a);
even(head);
return 0;
}

