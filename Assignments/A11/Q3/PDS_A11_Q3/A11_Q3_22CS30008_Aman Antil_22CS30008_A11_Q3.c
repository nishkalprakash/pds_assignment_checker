/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 11
Description : Program to insert number in sorted linked list
*/         
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* next;
}node;
//function to initialise
node* init(){
	node* head;
	head=(node*)malloc(sizeof(node));
	head->next=NULL;
	return head;
}
//function to print
void printlist(node * head){
	node* ptr=head;
	while(ptr!=NULL) {
		printf("%d ", ptr->data);
		ptr=ptr->next;
	} // prints until ptr reaches null
	printf("\n");
}
//function to add at end of linked list
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
	node* mn=(node*)malloc(sizeof(node));
	mn->data=m;
	node*ptr=head;
	node* temp;
	//condition for insertion at head
	if((head->data)>m){
		temp=head;
		head=mn;
		mn->next=temp;
	}
	//condition for insertion at middle or end
	else{
		while((ptr->next!=NULL)&&(((ptr->next)->data)<m)) ptr=ptr->next;
		temp=ptr->next;
		ptr->next=mn;
		mn->next=temp;
	}
	printf("Output after inserting %d: \n", m);
	printlist(head);
	return 0;
}