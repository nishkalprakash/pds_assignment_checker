/*Name:P.Sri Harsha Vardhan
Roll no:22MA10040
assignment:10
program 5
*/
#include<stdio.h>
#include<stdlib.h>
struct nodes
{
int a;
struct nodes *next;
};
int main()
{
struct nodes *head,*temp,*newnode;
head=NULL;
int i,n;
printf("\n Enter no;of terms");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
newnode=(struct nodes*)malloc(sizeof(struct nodes));
printf("\n enter number:");
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
for(;temp->next!=NULL;)
{
if(temp->a<temp->next->a)
{
flag1=1;
break;
}
temp=temp->next;
}
if(flag1==0)
printf("\n the list is in descending order");

int flag2=0;
temp=head;
for(;temp->next!=NULL;)
{
if(temp->a>temp->next->a)
{
flag2=1;
break;
}
temp=temp->next;
}
if(flag2==0)
printf("\n the list is in ascending order");
if(flag1!=0 && flag2!=0)
printf("\n the list is not in sorted order");
}

