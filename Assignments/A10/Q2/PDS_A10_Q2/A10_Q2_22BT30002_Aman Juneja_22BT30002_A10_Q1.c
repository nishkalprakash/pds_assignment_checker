/*
Name:AMAN JUNEJA
ROLL NO : 22BT30002
SECTION :14
ASSIGNMENT : 10
QUESTION :TO FIND If given list is sorted or not. 

*/

#include<stdio.h>
#include<stdlib.h>

typedef struct ListNode{
	int data;
	struct ListNode* next;
}node;

//function to check if given list is in descending order or not.
int checkD(node* prev,node* curr){
	while(curr->next!=NULL){
		prev=prev->next;
		curr=curr->next;
		if(prev->data < curr ->data)
			return 0;	
	}
	return 1;
}


// the function to check if given list is in ascending order or not.
int checkA(node* prev,node* curr){
	while(curr->next!=NULL){
		prev=prev->next;
		curr=curr->next;
		if(prev->data > curr ->data)
			return 0;	
	}
	return 1;
}


//to check if ordered or not
void ordercheck(node* head){
	int flag=0;				//flag variable to check if either asc or desc
	node*prev=head;
	node*curr =head->next;
	if(prev->data >curr->data){
		if(checkD(prev,curr)){
			flag=1;
			printf("The input list L is in descending order.\n");
			return ; 
		}
	}
	prev=head;
	curr=head->next;
	if(prev->data <= curr->data){
		if(checkA(prev,curr)){
			flag=1; 
			printf("The input list L is in ascending order.\n");
			return; 
		}
	}
	if(flag==0){
		printf("the input list is not in sorted order.\n");
	}
}

//function create list to create list of variable length

node * createlist(int n){
	node * head=NULL;
	node * tail;
	int i;

	if(n>0){
		head=(node *)malloc(sizeof(node));
		scanf("%d",&(head->data));
		tail=head;
		for(int i=1;i<n;i++){
			tail->next=(node *)malloc(sizeof(node));
			tail=tail->next;
			scanf("%d",&(tail->data));
		}
		tail->next=NULL;
	}
	return head;
}


int main(){
	printf("enter the number of elements in list");
	int x;
	scanf("%d",&x);
	//creating nodes for linked list
	node *head=createlist(x);
	ordercheck(head);

	return 0;
}