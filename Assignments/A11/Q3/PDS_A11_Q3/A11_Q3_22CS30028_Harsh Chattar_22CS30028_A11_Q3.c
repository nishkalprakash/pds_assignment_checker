/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 11
Description :  
*/


#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node *link;
};

void printlist(struct node *c){
	struct node *temp = c;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp = temp->link; 
	} 
}

void modifylist(struct node *head,int m,int n){
	struct node *temp = head;
	struct node *prev;
	struct node *newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = m;

	if((head->data)>m) {
		newNode->link = head;
		printlist(newNode);
		return;
	}

	while(temp!=NULL){
		if((temp->link->data) > m) break;
		prev = temp->link;
		temp=temp->link;
	}
	
	printf("%d\n",temp->data);
	
	if(temp == NULL){
		newNode->link=NULL;
		temp->link = newNode;

	}
	newNode->link = temp->link;
	temp->link = newNode;

	printlist(head);

}


int main(){
	int n;
	printf("Enter no. of elements : ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	struct node *head = NULL,*tail;
	head = (struct node*)malloc(sizeof(struct node));
	head->data = arr[0];
	tail = head;

	for(int i=1;i<n;i++){
		tail->link = malloc(sizeof(struct node));
		tail=tail->link;
		tail->data = arr[i];
	}
	tail->link=NULL;

	int m;
	printf("Enter no. to be inserted : ");
	scanf("%d",&m);

	modifylist(head,m,n);


return 0;
}