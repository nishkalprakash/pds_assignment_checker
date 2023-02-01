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


Insert_Arr(int A[],int N,int M)
{
    int i;      // Loop variable

    //printf("\nBefore Insertion: ");
    //print_A(A, N);
    //printf("\nEnter M:");
    //scanf("%d", &M);
    for (i = N++; i > 0; i--)   // Reading array from reverse
    {
        A[i] = A[i - 1];    // Making a copy of the previous element
        if (A[i] < M)
        {
            A[i] = M;   // Setting in desired spot
            break;  // Stopping after inserting
        }
    }
    if(i==0) A[0]=M;    // This is a case when the input element is the smallest
    //printf("\nAfter Insertion: ");
    //print_A(A, N);
    node *head;
    head=createlist(N,A);
    printf("Output after inserting %d: \n",M);printlist(head);
}
int main(){

	int N,m;
	int A[MAX];         // A[] = Array to store the sorted elements

	printf("Enter N: ");scanf("%d",&N);
	printf("Enter LL[%d] = ",N);
	for(int i=0;i<N;i++)
		scanf("%d",&A[i]);
	printf("m = ");scanf("%d",&m);
	Insert_Arr(A,N,m);

	return 0;

}
