/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
LAB TEST 2
desciption: 
*/


#include <stdio.h>
#include <stdlib.h>

typedef struct node{
 int data;
 struct node*next;
}node;

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
}
 void printlist(node *I)
{
	if (I == NULL)
	{
		printf("\nEMPTY LIST");
	}
	while (I != NULL)
	{
		printf("%d ", I->data);
		I = I->next;
	}
	
}

  int checkDup(node *ptr, int data)
{
	if (ptr == NULL)
		return 0;
	if (ptr->data == data)
		return 1;
	return checkDup(ptr->next, data);
}


int main()
{
	int N,M,a;
        int count;
	int A[100],B[100], c[100];
	node *head;
        node *head2;
       node *head3;
	printf("Enter N: ");
	scanf("%d", &N);
        printf("enter %d numbers: ", N);
	for (int i = 0;i < N; i++)
		scanf("%d", &A[i]);
        printf("Enter M: ");
	scanf("%d", &M);
        printf("enter %d numbers: ", M);
	for (int i = 0; i < M; i++)
		scanf("%d", &B[i]);
	for (int i = 0;i < N; i++)
		printf("%d ", A[i]);
	printf("\n");
	for (int i = 0;i < M; i++)
		printf("%d ", B[i]);
	printf("\n");
	int k=0;
        for(int i=0;i<N; i++)
        {
         for(int j=0;j<M; j++)
          {
           c[k++]=A[i]+B[j];
 	   printf("%d ", A[i]+B[j]);
          }
        }
        count=M*N;
       head3 = createlist(count,c);
      
       checkDup(head3, c[0]);
       
       
       /*for(int i=0;i<k; i++)
        {
           printf("%d ", c[i]);
        }
       
       
	head = createlist(N, A);
        head2 = createlist(M, B);
        head3 = createlist(count, c);
        printf("L1 = {");
        printlist(head);
        printf("}");
        printf("\n  +\n");
        printf("L2 = {");
        printlist(head2);
        printf("}");
        printf("\n  =\n");
        printlist(head3);
	*/
	return 0;
}
