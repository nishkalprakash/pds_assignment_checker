/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 11
Description: Program to insert an element into a sorted linked list*/

#include <stdio.h>
#include <stdlib.h>

struct list{
	int data;
	struct list *next;
};

typedef struct list element;

element* insert_list(int n, element *head){
	if (!head){
		head=(element*)malloc(sizeof(element));
		head->data=n;
		head->next=NULL;
		return head;
	}
	element *ptr=head, *prev=head;

	element* target=(element*)malloc(sizeof(element));
	target->data=n;
	target->next=NULL;

	if(n<ptr->data){
		target->next=head;
		head=target;
		return head;
	}
	
	while(ptr!=NULL){
		if(n<ptr->data){
			target->next=ptr;
			prev->next=target;
			return head;
		}
		prev=ptr;
		ptr=ptr->next;
	}
	prev->next=target;
	return head;	
}

void print_list(element* head){
	element *p=head;
	while(p){
		printf("%d ", p->data);
		p=p->next;
	}
	printf("\n");
	return;
}

int main(){
	element *head=NULL;
	int n, i, ele, insert;
	printf("n=");
	scanf("%d", &n);
	printf("LL[%d]= ", n);
	for (i=0; i<n; i++){
		scanf("%d", &ele);
		head=insert_list(ele,head);
	}
	printf("m=");
	scanf("%d", &insert);
	head=insert_list(insert,head);
	printf("Linked list after inserting %d\n", insert);
	print_list(head);
	return 0;
}
