#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};

void printlist(struct node *head)
{
struct node *ptr;
ptr=(struct node*)malloc(sizeof(struct node));
ptr=head;
while(ptr->link!=NULL)
{
printf("%d ",ptr->data);
ptr=ptr->link;
}
printf("%d",ptr->data);
}

struct node *createlist(int n, int A[])
 {
 
  struct node *head,*ptr; 
  head=(struct node *)malloc(sizeof(struct node));
  head->data =A[0];
  ptr=head;
  head->link=NULL;
  for(int i=1;i<n;i++)
  {
    ptr->link=(struct node*)malloc(sizeof(struct node));
    ptr=ptr->link;
    ptr->data=A[i];
  }
 ptr->link=NULL;
return head;
}


void even(struct node*head){
int node=1;
struct node *ptr;
ptr=(struct node*)malloc(sizeof(struct node));
ptr=head;
 while(ptr->link!=NULL)
{

}

}

int main()
{
int n,A[10];
printf("Enter number of integers(<10)");
scanf("%d",&n);
printf("Enter the integers");
for(int i=0;i<n;i++)
 {
   scanf("%d",&A[i]);
 }
struct node *head=createlist(n,A);
printlist(head);
even(head);
return 0;
}

