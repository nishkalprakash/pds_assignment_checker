/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 10
Description : 
*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* next;
};
struct node *createlist( int n, int A[])
{
struct node *head,*ptr;
head=(struct node *)malloc(sizeof(struct node));
head->data=A[0];
ptr=head;
for(int i=1;i<n;i++)
{
ptr->next=(struct node *)malloc(sizeof(struct node));
ptr=ptr->next;
ptr->data=A[i];
}
ptr->next=NULL;
return head;
}
int main()
{
int n,count=0,count1=0;
printf("Enter number of element in a list");
scanf("%d",&n);
int a[n];
printf("Enter elements \n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
struct node *head=createlist(n,a);
struct node* ptr;
struct node* cur;
ptr=(struct node*)malloc(sizeof(struct node));
cur=(struct node*)malloc(sizeof(struct node));
cur=head;
ptr=head;
ptr=ptr->next;
while(ptr->next!=NULL)
{
if(cur->data < ptr->data)
{
count++;
}
ptr=ptr->next;
cur=cur->next;
}
if(count==n-2)
{
printf("Ascending order ");
}
cur=head;
ptr=head;
ptr=ptr->next;
while(ptr->next!=NULL)
{
if(cur->data > ptr->data)
{
count1++;
}
ptr=ptr->next;
cur=cur->next;
}
if(count1==n-2)
{
printf("Descending order ");
}
if(count1!=(n-2)&&count!=(n-2))
{
printf("Not sorted");
}
return 0;
}
