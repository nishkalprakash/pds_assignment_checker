/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 11
Question No. : 3
Description : Inserting a new value to an already sorted linked list
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node * next;
}node;

node *createlist(int n, int A[])
{	
	node *head,*ptr;
	head=(node*)malloc(sizeof(node));
	ptr=head;
	for(int i=0;i<n-1;i++)
	{
		ptr->data=A[i];
		ptr->next=(node*)malloc(sizeof(node));
		ptr=ptr->next;
	}
	ptr->data=A[n-1];
	ptr->next=NULL;
	return head;
}

int main(){

	return 0;
}