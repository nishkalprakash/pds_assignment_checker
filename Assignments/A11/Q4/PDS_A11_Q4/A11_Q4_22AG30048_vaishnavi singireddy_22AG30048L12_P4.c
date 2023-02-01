#include<stdio.h>
#include<stdlib.h>
struct node
{
int  data
struct node *link;
};
int main()
{
struct node *head=malloc(sizeof(struct node));
int a,b,c,d,m,n;
head->data=n;
head->link=NULL;
add_at_end(head,a);
add_at_end(head,b);
add_at_end(head,c);
add_at_end(head,d);
printf("enter the number which is to be inserted");
scanf("%d",&m);
printf("m=%d",m);
int pos=5;
delete(head,e,pos);
void add_at_end(head,a)
{
struct node*ptr,*temp;
int h;
ptr=head;
temp=(structnode*)malloc(sizeof(struct node));
temp->data=h;
temp->link=NULL;
while(ptr->link!=NULL)
{
ptr=ptr->link;
}
ptr->link=temp;
}
struct node*delete(struct node*head)
{
if(head==NULL)
printf("LIST IS ALREADY EMPTY");
else if(head->link==NULL)
{
free(head);
head=NULL;
}
else
{
struct node*temp=head;
struct node*temp2=head;
while(temp->link!=NULL)
{
temp2=temp;
temp=temp->link;
}
temp2->link=NULL;
free(temp);
temp=NULL;
}
return head;
}










