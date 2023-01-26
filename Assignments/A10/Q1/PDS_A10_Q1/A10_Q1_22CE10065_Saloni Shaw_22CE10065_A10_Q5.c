/*

Section 14

Roll no : 22CE10065

Name : Saloni Shaw

Assignment 10

Description - Program to print even elements of list

*/
#include<stdio.h>
#include <stdlib.h>
struct node{
 int data;
struct list *next;
};
struct node *createlist(int n,int A[])
{
struct node*head=NULL; 
struct node*tail;
int i;
head=(struct node*)malloc(sizeof (struct node));
head->data=A[0];
tail=head;
for(i=1;i<n;i++)
{
tail->next=(struct node*)malloc(sizeof (struct node));
tail=tail->next;
tail->data=A[i];
}
tail->next=NULL;
return head;//returning head
}
void printlist(struct node*I)//printing list
{
struct node*temp;
temp=I;
while(temp!=NULL)//null
{
if(temp->next==NULL)
printf("%d END OF LIST\n ",temp->data);
else
printf("%d ->", temp->data);
temp=temp-> data;
}
}
void even(struct node*I)//to check even
{
 struct node *head;
struct node *ptr;
struct node *prev;
head=I;
if((head->data)%2!=0);
head=I->next;
free(I);
ptr=head;
while(ptr!=NULL)
{
prev=ptr;
ptr=ptr->next;
if((ptr->data)%2!=0)
{
prev->next=ptr->next;
free(ptr);
}
}
}

int main()//main function
{
int n,i;
struct node *I;
int a[10];
printf("enter the number of elements\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[0]);
I=createlist(n,a);
printlist(I);
even(I);
printlist(I);
return  0;
}//end of program

