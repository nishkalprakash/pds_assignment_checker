/*Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No : 11
 Question No :4
 Description : To delete a number from linked list
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

node* delete(int val, node * ptr)
{
	int k;
	node *prev,*first;           
          first=ptr;
          
          if(val==ptr->data)//first node to be deleted
           {
           	ptr=ptr->next;
           	first->next=NULL;
           	free(first);
           		printf("Output after deleting %d: ",val);
           	return ptr;
           }
           else{
                  
                  prev=ptr;
                  ptr=ptr->next;
                  while(ptr->data!=val)
                  {
                  	prev=ptr;
                  	if(ptr->next==NULL)
                  		break;
                  	ptr=ptr->next;
                  }

                  if(ptr->next !=NULL) {
                  prev->next=ptr->next;
                  ptr->next=NULL;
                  free(ptr);
                  	printf("Output after deleting %d: ",val);
                  return first;
                 }
                 else{
                 	printf("%d does not exist in the list ",val);
                 	exit(0);
                 	return first;
                 }
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
	head=delete(M,head);
	printlist(head);
	return 0;

}