#include<stdio.h>
#include<stdlib.h> 
#define MAX 100
  typedef struct node{
   int data ;
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
  
  void delete(node * I,int m)
  {
	node *ptr=I,*n;
   
	
	while(ptr!=NULL && ptr->data==m)
		ptr=ptr->next;
	I=ptr;
	
	while(ptr!=NULL){
		n=ptr->next;
		if(ptr!=NULL && ptr->data==m)
			ptr->next=n->next;
		ptr=ptr->next;
     }
	printlist(I);
  }
int main(){
	int m,N;
	int A[MAX];
	node *head;            //m is the elment that you want to delete
	printf("Enter N,m: ");
	scanf("%d\n%d",&N,&m);
	
	printf("enter list element");
	for(int i=0;i<N;i++)
		scanf("%d",&A[i]);
	head=createlist(N,A);
	delete(head,m);
	return 0;

}
