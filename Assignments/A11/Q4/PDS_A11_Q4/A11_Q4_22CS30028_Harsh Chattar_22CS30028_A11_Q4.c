/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 11
Description :  delete a element from a given linked list
*/


#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node *next;
};

void printlist(struct node *c){
	struct node *temp = c;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp = temp->next; 
	} 
}

struct node *delete_item(int val,struct node *ptr){
	struct node *prev,*first;
	first = ptr;
	if(ptr == NULL) return NULL;
	else if(val == ptr->data){
		ptr= ptr-> next;
		first->next = NULL;
		free(first);
		return ptr;
	}
	else
	{
		prev= ptr;
		ptr= ptr-> next;
		while (ptr!= NULL && val> ptr->data) {
			prev = ptr;
			ptr = ptr->next;
		}
		if(ptr == NULL || val!=ptr->data){
			return first;
		}
		else{
			prev->next=ptr->next;
			ptr->next = NULL;
			free(ptr);
			return first;
		}

	}
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
		tail->next = malloc(sizeof(struct node));
		tail=tail->next;
		tail->data = arr[i];
	}
	tail->next=NULL;

	int m;
	printf("Enter no. to be deleted : ");
	scanf("%d",&m);

	head = delete_item(m,head);

	printlist(head);


return 0;
}