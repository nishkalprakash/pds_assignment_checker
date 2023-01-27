/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 10
Description : 
*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
int d;
struct node* next;
};
typedef struct node ELEMENT;
typedef ELEMENT* LINK;
struct node *createlist( int n, int A[])
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
LINK delete_item(int val, LINK ptr)
{ 
LINK prev, first;
first = ptr;
if (ptr== NULL)  
return  NULL;
else  if (val== ptr-> d)
{
ptr= ptr-> next;
first->next = NULL;
free(first);
return ptr;  
}
else
{     
prev= ptr;
ptr= ptr-> next;
while (ptr!= NULL && val> ptr->d)
 {
prev= ptr;ptr= ptr-> next;
}
if (ptr== NULL|| val!= ptr->d)  
{
return first;
}
else 
{
prev-> next = ptr-> next;
ptr->next = NULL;
free(ptr);
return first;
}
}
}
void even(struct node* l) //delete odd element and print 
{
LINK head=l;
while(head!=NULL)
{
int temp;
if(head->d%2==1)
{
temp=head->d;
delete_item(temp,l);
}
head=head->next;
}
printlist(l);
}
int main()
{
int n;
printf("Enter number of element in a list");
scanf("%d",&n);
int a[n];
printf("Enter elements \n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
LINK head=createlist(5,a);
printlist(head);
even(head);
return 0;
}
