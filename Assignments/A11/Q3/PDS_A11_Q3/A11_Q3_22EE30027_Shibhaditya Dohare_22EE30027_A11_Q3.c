/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 11
Discription : To add a number to a linked list 
*/
#include <stdio.h>
#include <stdlib.h>
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

void printlist(node * I)
{
	while(I!=NULL){
		printf("%d ",I->data);
		I=I->next;
	}
	printf("\n");
}
int main(){
	int N;
	int A[MAX];
	node *head,*new;
	printf("Enter N: ");
	scanf("%d",&N);
	for(int i=0;i<N;i++)
		scanf("%d",&A[i]);
	head=createlist(N,A);
	int r,flag=0;
	scanf("%d",&r);
	
	int i=0,NEW[N],k;
	if(A[0]>r){
		NEW[0]=r;
		for(i=0;i<N+1;i++){
		NEW[i]=A[i-1];	
		}
			
	}
	else if(A[N-1]<r){
		NEW[N]=r;
		for(i=0;i<N;i++){
		NEW[i]=A[i];	
		}
	}
	else{
	for(i=0;i<N;i++){
		if(A[i+1]>r && A[i]<r){
			k=i+1;
		}
	}
	for(i=0;i<N+1;i++){
		if(i==k) NEW[i]=r;
		else if(i<k) NEW[i]=A[i];
		else if(i>k) NEW[i]=A[i-1];
	}
	}
	N++;
	int j=0;
	new=createlist(N,NEW);
	printlist(new);
	return 0;

}
