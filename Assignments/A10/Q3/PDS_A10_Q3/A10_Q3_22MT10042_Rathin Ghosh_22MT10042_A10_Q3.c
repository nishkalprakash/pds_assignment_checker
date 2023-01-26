#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}
struct node *createlist(int n,int A[])
{
struct node *head,*tail,*temp;
head=(struct node *)malloc(sizeof(struct node));
head->data=A[0];
tail=head;
int i;
for(i=1;i<n;i++)
{
temp=(struct node*)malloc(sizeof(struct node));
temp->data=A[i];
tail->next=temp;
tail=temp;
}
tail->next=NULL;
return head;
}
void printlist(struct node* I)
{
struct node *list= I;
while(list !=NULL)
{
printf("%d",list->data);
if (list->next==NULL)
{
printf("End");
}
list=list->next;
}
}
