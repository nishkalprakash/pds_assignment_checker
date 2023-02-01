/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 11
Discription : To delete a number from a linked list 
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct node{
	int data;
	struct node *next;
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

void rem(node * I,int a)
{
	node *ptr=I,*n;
	int flag=0;
	while(ptr!=NULL){
		n=ptr->next;
		if(n!=NULL && n->data==a){
			ptr->next=n->next;
			flag=1;}
			ptr=ptr->next;
	}	
	if (flag==0)
		printf("%d does not exist\n",a);
	else if(flag==1){
		printf("Output after deleting %d\n",a);
		printlist(I);
			}
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
	int r;
	scanf("%d",&r);
	rem(head,r);
	return 0;

}
