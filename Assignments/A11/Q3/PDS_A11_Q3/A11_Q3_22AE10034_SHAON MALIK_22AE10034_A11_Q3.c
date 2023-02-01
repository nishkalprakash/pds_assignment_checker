/*Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No : 11
 Question No :3
 Description : To insert a number in a sorted linked list
 */
#include <stdio.h>
#include <stdlib.h>

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

node* insert(int val, node * ptr)
{
	node * newp,*prev,*first;
	newp=(node*)malloc(sizeof(node));
    newp->data=val;
    if(ptr==NULL||val<=ptr->data){//insert as first node
    	newp->next=ptr;
         return newp;
     }
     else{                       //insert in the middle
          first=ptr;
          prev=ptr;
          while(ptr!=NULL && val> ptr->data)
          {
          	prev=ptr;
          	ptr=ptr->next;
          }
          prev->next=newp;
          newp->next=ptr;
          return first;                   
     }
}

int main(){
	int N,M;
	int A[100];
	node *head;
	printf("Enter N: ");
	scanf("%d",&N);
	printf("LL[N]:");
	for(int i=0;i<N;i++)
		scanf("%d",&A[i]);
	printf("Enter M: ");
	scanf("%d",&M);
	head=createlist(N,A);
	printf("Output after inserting %d: ",M);
	head=insert(M,head);
	printlist(head);
	return 0;

}