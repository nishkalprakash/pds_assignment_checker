#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct node{
	int data;
	node *next;
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

void printlist(node * I)
{
	if(I==NULL){
		printf("\nEMPTY LIST\n");
	}
	while(I!=NULL){
		printf("%d ",I->data);
		I=I->next;
	}
	printf("\n");
}

void even(node * I)
{
	node *ptr=I,*n;

	// Jump to first even node
	// Remove all odd nodes from beginning
	while(ptr!=NULL && ptr->data%2!=0)
		ptr=ptr->next;
	I=ptr;
	
	while(ptr!=NULL){
		n=ptr->next;
		if(n!=NULL && n->data%2!=0)
			ptr->next=n->next;
		else
			ptr=ptr->next;
		
	}

	printlist(I);
}

int main(){
	int N;
	int A[MAX];
	node *head;
	printf("Enter N: ");
	scanf("%d",&N);
	for(int i=0;i<N;i++)
		scanf("%d",&A[i]);
	head=createlist(N,A);
	printf("List w/o odd: ");
	even(head);
	return 0;

}
