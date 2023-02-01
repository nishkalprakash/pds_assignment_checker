/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 11
Description : Program to delete a number from a linked list
*/         
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* next;
}node;
node* init(){
	node* head;
	head=(node*)malloc(sizeof(node));
	head->next=NULL;
	return head;
}
void printlist(node * head){
	node* ptr=head;
	while(ptr!=NULL) {
		printf("%d ", ptr->data);
		ptr=ptr->next; // prints until ptr reaches null
	}
	printf("\n");
}
//funtion to create linked list
node* nw(int i, node* head){
	node* ptr=head;
	node* new=(node*)malloc(sizeof(node));
	new->data=i;
	new->next=NULL;
	while(ptr->next!=NULL) ptr=ptr->next;
	ptr->next=new;
	return head;
}
int main(){
	int fl=0;
	node* head= init();
	printf("n = ");
	int n,m; scanf("%d", &n);
	printf("LL[n] : ");
	int j;
	scanf("%d", &j);
	head->data=j;
	for(int i=1;i<n;i++){
		scanf("%d", &j);
		head=nw(j,head);
	}
	printf("m : ");
	scanf("%d", &m);
	//condition to delete head
	if(head->data==m){
		head=head->next;
		fl=1;
	}
	node* temp,*ptr;
	ptr=head;
	//condition to delete elsewhere 
	while(ptr!=NULL){
		temp=ptr->next;
		if(temp!=NULL && temp->data==m){
			ptr->next=temp->next;
			fl=1;
			continue;
		}
		ptr=ptr->next;
	}
	if(fl){
		printf("Output after deleting %d: \n", m);
		printlist(head);
		return 0;
	}
	//is not executed if element found
	printf("%d does not exist\n", m);
	
	return 0;
}