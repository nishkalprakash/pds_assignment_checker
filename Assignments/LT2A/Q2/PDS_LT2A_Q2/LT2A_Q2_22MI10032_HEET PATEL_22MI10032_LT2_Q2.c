/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : LAB TEST 2
Description :  to add linked list
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct node
{
    int data;
   struct node *next;
} node;

void printlist(node *I)
{
printf("{");
	if (I == NULL)
	{
		printf("\nEMPTY LIST\n");
	}
	while (I != NULL)
	{
		printf("%d ", I->data);
		I = I->next;
	}
printf("}");
	printf("\n");
}
int checkDup(node *ptr, int data)
{
	if (ptr == NULL)
		return 0;
	if (ptr->data == data)
		return 1;
	return checkDup(ptr->next, data);
}
node *createlist(int n, int A[])
{
	node *head, *ptr;
	head = (node *)malloc(sizeof(node));
	ptr = head;
	for (int i = 0; i < n - 1; i++)
	{
		ptr->data = A[i];
		ptr->next = (node *)malloc(sizeof(node));
		ptr = ptr->next;
	}
	ptr->data = A[n - 1];
	ptr->next = NULL;
	return head;
};
struct node*list(struct node * head1 , struct node * head2, int N,int M,int A[],int B[]){
struct node*ptr;
struct node * head3;
head3= (node *)malloc((N*M)*sizeof(node));
ptr=head3;
int C[MAX];
for(int i = 0 ; i<N;i++){
for(int j=0;j<M-1;j++){
ptr->next = (node *)malloc(sizeof(node));
ptr->data=A[i]+B[j];
//ptr->next = (node *)malloc(sizeof(node));
ptr = ptr->next;
}
}
ptr->data = A[N-1]+B[M-1];
	ptr->next = NULL;
	

	return head3;
}
node *create_new_node()
{
	node *new_node = (node *)malloc(sizeof(node));
	new_node->next = NULL;
	return new_node;
}

int main()
{
	int N;
	int A[MAX];
         int B[MAX];
        int C[MAX];
	node *head1,*head2,*head3,*dup_head=NULL;
	printf("Enter N: ");
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &A[i]);
	head1 = createlist(N, A);
        int M;
	printf("Enter N: ");
	scanf("%d", &M);
        for (int i = 0; i < M; i++)
		scanf("%d", &B[i]);
       head2 = createlist(M, B);
       printlist(head1);
      printlist(head2);
for (int i = 0; i < N; i++){
		C[i]=A[i];
}
int j;
for (int i = N, j=0; i < N+M,j<M; i++,j++){
		C[i]=B[j];
}
head3=list(head1,head2,N,M,A,B);
printlist(head3);



 	return 0;
}
