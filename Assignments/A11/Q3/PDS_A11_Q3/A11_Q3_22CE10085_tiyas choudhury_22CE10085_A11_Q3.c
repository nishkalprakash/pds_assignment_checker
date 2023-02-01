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

int main(){
	int N,n;
	int A[MAX];
	node *head;node*k
	printf("Enter N: ");
	scanf("%d",&N);
	for(int i=0;i<N;i++)
		scanf("%d",&A[i]);
	head=createlist(N,A);
	printf("Enter n: ");
	scanf("%d",&n);
	k=insert(N,n,head);
	printlist(k);




	
	return 0;

}
node *insert(int N,int n,node*ptr)
{ node * first,previous,new;
	
	node*new =(node*)malloc(sizeof(node));
	new->data=n;
	if(ptr==NULL ||n<=ptr->data)
	{
		new->next=ptr;
		return new;


}

else{
	first=ptr;
	previous=ptr;
	ptr=ptr->next;
	while(ptr!=NULL && n>ptr->data)
	{
		previous->next=new;
		new->next=ptr;
		return first;
	}
}
}









