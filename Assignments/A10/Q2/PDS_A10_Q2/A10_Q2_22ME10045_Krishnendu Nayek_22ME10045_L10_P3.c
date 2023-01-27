#include<stdio.h>
#include<stdlib.h>
struct node
{
int a;
struct node *next;
};
int main()
{

struct node *head,*temp,*newnode;
head=NULL;
int i,n;
printf("\n Enter number of terms:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("\n Enter number:");
scanf("%d",&newnode->a);
newnode->next=NULL;
if(head==NULL)
head=temp=newnode;
else
{
temp->next=newnode;
temp=newnode;
}
}
int flag1=0;
temp=head;
while(temp->next!=NULL)
{
if(temp->a<temp->next->a)
{
flag1=1;
break;
}
temp=temp->next;
}
if(flag1==0)
printf("\n The list is in descending order");


int flag2=0;
temp=head;
while(temp->next!=NULL)
{
if(temp->a>temp->next->a)
{
flag2=1;
break;
}
temp=temp->next;
}
if(flag2==0)
printf("\n The list is in ascending order");
if(flag1!=0 && flag2!=0)
printf("\n The list is not in sorted order");
}


