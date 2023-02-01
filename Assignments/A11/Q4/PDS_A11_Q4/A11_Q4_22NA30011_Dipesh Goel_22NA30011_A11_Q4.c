#include<stdio.h>
#include<stdlib.h>

/*
	SECTION 14
	ROLL NO. 22NA30011
	NAME : DIPESH GOEL <dipeshgoel@kgpian.iitkgp.ac.in>
	Assignment No. 11
	Description : Deletion from Linked List

*/

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

void printlist(node *I)
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

void delete_val(node *I, int val)
{
    node *ptr=I,*n,*prev;

    if (ptr->data == val)
    {
        I=ptr->next;
        printf("Output after deleting %d: \n",val);
        printlist(I);
        exit(0);
    }
	while(ptr->next!=NULL && (ptr->next)->data!=val)
		ptr=ptr->next;
	if (ptr->next==NULL)
    {
        printf("%d does not exist",val);
        exit(1);
    }

	prev=ptr;
	(prev->next)=(ptr->next)->next;

	printf("Output after deleting %d: \n",val);printlist(I);
}
int main(){
	int N,m;
	int A[MAX];
	node *head;
	printf("Enter N: ");scanf("%d",&N);
	printf("Enter LL[%d] = ",N);
	for(int i=0;i<N;i++)
		scanf("%d",&A[i]);
	head=createlist(N,A);

	printf("m = ");scanf("%d",&m);
	delete_val(head,m);

	return 0;

}
