#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct SET
{
	int data;
	 struct SET *next;
}SET;
SET *createlist(int,int[]);
void printlist(SET*);
void sum(SET*,SET*,int,int);

SET *createlist(int n, int A[])
{
	SET *head, *ptr;
	head = (SET *)malloc(sizeof(SET));
	ptr = head;
	for (int i = 0; i < n - 1; i++)
	{
		ptr->data = A[i];
		ptr->next = (SET *)malloc(sizeof(SET));
		ptr = ptr->next;
	}
	ptr->data = A[n - 1];
	ptr->next = NULL;
	return head;
}

void printlist(SET *I)
{
	if (I == NULL)
	{
		printf("\nEMPTY LIST\n");
	}
	while (I != NULL)
	{
		printf("%d ", I->data);
		I = I->next;
	}
	printf("\n");
}



int main()
{
	int N,M;
	int A[MAX];int B[MAX];
	SET *head1,*head2;
	printf("Enter N: ");
	scanf("%d", &N);
	printf("Enter M: ");
	scanf("%d", &M);

	for (int i = 0; i < N; i++)
		scanf("%d", &A[i]);
	for (int i = 0; i < M; i++)
		scanf("%d", &B[i]);
	

	head1 = createlist(N, A);
	head2 = createlist(M, B);
	return 0;
}

void sum(SET *head1,SET *head2,int N,int M)
{
	SET *ptr1=head1;
	SET *ptr2=head2;
	SET*n=ptr1;
	SET*m=ptr2;
	int i,j;
	SET*new_node;

	new_node=(SET*)malloc(sizeof(SET));
	SET *ptr3=new_node;


	while(n->next!=NULL)
	{
		while(m->next!=NULL)
		{

			
			ptr3->data=n->data+m->data;
			
			
			ptr3=(SET*)malloc(sizeof(SET));
			ptr3=ptr3->next;
			m=m->next;
		}
			n=n->next;
			m=ptr2;


	}
		
	
	ptr3->next=NULL;
	printlist(new_node);
	return;

}
