/*

Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment 11
Description: Program to delete a specific element

*/
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;

}*first=NULL; //structure defined
void create(int a[], int n)
{
	struct node*t, *last;
	first=(struct node*)malloc(sizeof(struct node));
	first->data=a[0];
	first->next=NULL;
	last=first;
	for(int i=1;i<n;i++)
	{
		t=(struct node*)malloc(sizeof(struct node));
		t->data=a[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
} //linked list created
void print(struct node*p)
{
	while(p)
	{
		printf("%d",p->data);
		p=p->next;
	}
	printf("\n");
} // function to print 
void delete(struct node*p, int m)
{
	struct node*q;
	if(p->data==m)
	{
		q=p;
		p=p->next;
		first=p;
		free(q);
	}
	else
	{
		while(p->data!=m)
		{
			q=p;
			p=p->next;

		}
		if(p->data==m)
		{
			q->next=p->next;
			free(p);

		}
		else{
			printf("Doesnt exist");
		}
	}
	
}// fuction to delete the appropriate element

int main()
{
    int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	create(a,n); // create function is called
	int k;
	scanf("%d",&k);
	delete(first,k);// delete function i called
	print(first); // print function is called
	return 0;
}