/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:10

*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node *createlist(int n,int A[])
{
	struct node *head,*p=head;
	p=(struct node *)malloc(sizeof(struct node));
	p->data=A[0];
	p->next=NULL;
	head=p;
	for(int i=1;i<n-1;i++)
	{
		p->next=(struct node *)malloc(sizeof(struct node));
		p=p->next;
		p->data=A[i];
	}
	p->next=NULL;
	return(head);
}
void printlist(struct node *head)
{
	while(head->next!=NULL)
	{
		printf("%d\t",head->data);
		head=head->next;
	}
}
int main()
{
	int n;
	struct node *head;
	printf("Enter the value of n\nn:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the numbers\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	head=createlist(n,a);
	
	printlist(head);
	return 0;
}