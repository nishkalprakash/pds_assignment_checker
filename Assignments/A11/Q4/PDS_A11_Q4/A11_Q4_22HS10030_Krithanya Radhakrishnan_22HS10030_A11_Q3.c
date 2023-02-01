#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct list *next;
};
struct node * insert (struct node *head,int x)
{
struct node *newnode,*tmp;
newnode=(struct node *)malloc(sizeof(struct node));
newnode->data=x;
newnode->next=NULL;
if (head==NULL){
	head = newnode;
     return head;
}
for(tmp=head;tmp->next!=NULL;tmp=tmp->next);
tmp->next=newnode;
return head;
}
void printlist(struct node *head)
{
  struct node *tmp;
  for(tmp=head;tmp!=NULL;tmp=tmp->next){
     printf("%d ",tmp->data);
  }
}

int main()
{
int n,m,i,k;
struct node *head=NULL;
printf("enter no of nodes\n");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("enter value to be inserted\n");
scanf("%d",&m);
head= insert(head,m);
printf("enter new value\n");
scanf("%d",&k);
}
printlist(head);
return 0;
}


