/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 11
Description : insert element between linked list
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node *next;
}node;
node *createlist( int n, int A[]) //convert array to linked list
{
node *head,*tail;
head=(node*)malloc(sizeof(node));
head->data=A[0];
tail=head;
for(int i=1;i<n;i++)
{
tail->next=(node*)malloc(sizeof(node));
tail=tail->next;
tail->data=A[i];
}
tail=NULL;
return head;
}
void printlist(node* l) //to print linked list
{
do
{
printf("%d ",l->data);
l=l->next;
}while(l!=NULL);
}
node *insert(node *head,int d)
{
node *new=(node*)malloc(sizeof(node));
node *prev;
new->data=d;
node* p=head;
if(p==NULL||d<=p->data)
{
new->next=p;
return new;
}
else
{
prev=p;
p=p->next;
while(p!=NULL &&d> p->data)
{
prev=p;
p=p->next;
}
prev->next=new;
new->next=p;
}
return head;
}
int main()
{
int n,new;
printf("Enter number of element in a list");
scanf("%d",&n);
int a[n];
printf("Enter elements in ascending order \n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
node *head=createlist(n,a);
printf("Enter value to be inserted ");
scanf("%d",&new);
head=insert(head,new);
printf("Output after inserting %d :\n", new);
printlist(head);
return 0;
}
