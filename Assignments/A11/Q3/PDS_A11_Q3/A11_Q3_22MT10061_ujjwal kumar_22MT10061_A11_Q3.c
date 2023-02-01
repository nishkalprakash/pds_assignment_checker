#include <stdio.h>
#include <stdlib.h>


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
 LINK create_node(int val)
{
 LINK newp;
   newp = (LINK) malloc (sizeof (ELEMENT));
    newp -> data = val;
   return (newp);
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

int main(){
	int N;
	node *head;
	printf("Enter N: ");
	scanf("%d",&N);
	for(int i=0;i<N;i++)
		scanf("%d",&A[i]);
	head=createlist(N,A);
      newp = malloc(sizeof(node));
      prev -> next = newp;
     newp -> next = ptr;

}
