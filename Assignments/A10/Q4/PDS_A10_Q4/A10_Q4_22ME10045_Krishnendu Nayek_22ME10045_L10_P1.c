#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
struct customer
{
int acc_number;
char name[10];
int balance;
struct customer*next;
};
struct customer *head,*temp,*newnode;
head=0;
int choice=1;
while(choice)
{
newnode=(struct customer*)malloc(sizeof(struct customer));
printf("\n Enter account number:");
scanf("%d",&newnode->acc_number);

printf("\n Enter name:");
scanf("%s",newnode->name);

printf("\n Enter account balance:");
scanf("%d",&newnode->balance);

newnode->next=0;
if(head==0)
head=temp=newnode;
else
{
temp->next=newnode;
temp=newnode;
}
printf("\n Do you want to continue(0 for exit/1 for continue)?");
scanf("%d",&choice);
}
temp=head;
while(temp!=0)
{
printf("\n\n **Customer details**\n Account number:%d \n Name: %s \n Balance:%d",temp->acc_number,temp->name,temp->balance);
temp=temp->next;
}
}


