#include<stdio.h>
struct node
{
int a;
struct node *next;
};
int main()
{
struct node *head, *temp, *newnode;
head=0;
int i,n;
printf("\n Enter the number of terms: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("\n Enter number :- ");
scanf("%d",&newnode->a);
newnode->next=0;
if(head==0)
head=temp=newnode;
else
{
temp->next=newnode;
temp=newnode;
}}
int m;
printf("\n Enter new value to be inserted : ");
scanf("%d",&m);
temp=head;
while(temp!=0)
{
if(temp->a < m && temp->next->a > m)
{
newnode=(struct node*)malloc(sizeof(struct node));
newnode->a=m;
newnode->next=temp->next;
temp->next=newnode;
break;
}
temp=temp->next;
}
temp=head;
printf("\n\n\n The new List is :- ");
while(temp!=0)
{
printf("\n %d",temp->a);
temp=temp->next;
}}



