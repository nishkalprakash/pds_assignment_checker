/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:11
Description: Program to delete value from linked list.
*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node *createlist(int n,int A[])      //function to create linked list
{
	struct node *head,*p=head;
	p=(struct node *)malloc(sizeof(struct node));
	p->data=A[0];
	p->next=NULL;
	head=p;
	for(int i=1;i<n;i++)
	{
		p->next=(struct node *)malloc(sizeof(struct node));
		p=p->next;
		p->data=A[i];
	}
	p->next=NULL;
	return(head);
}

void printlist(struct node *head)  //function to print linked list
{
	while(head!=NULL)
	{
		printf("%d\t",head->data);
		head=head->next;
	}
}

void del(struct node *head,int n,int x)  //method to delete the element
{
	int a[x],b[x],c=0,f=0;
	struct node *ptr;
	while(head!=NULL)   //converting the linked list to array
	{
		a[c]=head->data;
		head=head->next;
		c++;
	}
	for(int i=0;i<x;i++)   
	{
		if(a[i]!=n)   //storing the elements in another array excluding the element to be deleted
		{
			b[f]=a[i];
			f++;
		}
	}
	if(f==x)              //checking if the number to be deleted is present or not
		printf("%d does not exist",n);
	else
	{
		printf("Output after deleting %d:\n",n);
	ptr=createlist(x-1,b);
	printlist(ptr);
	}
} 

int main()
{
int n,m;
	struct node *ptr;
	printf("Enter no. of elements in linked list\n");
	scanf("%d",&n);     //asking user to input number of elements and storing it
	int a[n];
	printf("Enter elements\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);   //storing all elements to array
	printf("Enter number to be deleted\nm:");
	scanf("%d",&m);     //asking user to input number to be deleting and storing it
	ptr=createlist(n,a);  //creating the linked list from array
	del(ptr,m,n);  //calling method to delete the given number
	return 0;
}

