/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 11
Description: Program to delete an element from a linked list*/

#include <stdio.h>
#include <stdlib.h>

int flag=0;

struct list{
	int data;
	struct list *next;
};

typedef struct list element;

element* insert_list(int n, element *head){  //function to insert an element
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

	while(ptr!=NULL){
		prev=ptr;
		ptr=ptr->next;
	}
	prev->next=target;
	return head;	
}

void print_list(element* head){  //printing the linked list
	element *p=head;
	while(p){
		printf("%d ", p->data);
		p=p->next;
	}
	printf("\n");
	return;
}

element* delete_ele(element *head, int n){
	element *ptr=head, *prev=head;
	if (head->data==n) {
		head=head->next;
		return head;
	}
	while(ptr!=NULL){
		if (ptr->data==n){
			prev->next=ptr->next;
			free(ptr);
			return head;
		}
		prev=ptr;
		ptr=ptr->next;
	}
	flag++;
	return head;
}

int main(){
	element *head=NULL;
	int n, i, ele, delete;
	printf("n=");
	scanf("%d", &n);
	printf("LL[%d]= ", n);
	for (i=0; i<n; i++){
		scanf("%d", &ele);
		head=insert_list(ele,head);
	}
	printf("m=");
	scanf("%d", &delete);
	head=delete_ele(head, delete);
	if (flag) {printf("%d does not exist",delete); return 0;}
	printf("Output after deleting %d is\n", delete);
	print_list(head);
	return 0;
}
