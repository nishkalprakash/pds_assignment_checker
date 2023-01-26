/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 10*/

#include <stdio.h>
#include <stdlib.h>

int n;

struct c{
	int d;
	struct c* next;
};

typedef struct c node;

void printlist(node* l){
	printf("The modified linked list is: \n");
	node* ptr;
	ptr=l;
	while(ptr!=NULL){
		printf("%d ", ptr->d);
		ptr=ptr->next;
	}
	printf("\n");
}

node* create_list(int num, int A[]){
	node* head=(node*)malloc(sizeof(node));
	node* ptr;
	ptr=head;
	n=num;
	for (int i=0; i<n; i++){
		ptr->d=A[i];
		if(i==n-1) break;
		ptr->next=(node*)malloc(sizeof(node));
		ptr=ptr->next;
	}
	ptr->next=NULL;
	return head;
}

void even(node* l){
	node* ptr;
	l=l->next;
	ptr=l;
	int i=1;
	while(ptr->next!=NULL){
		if (i%2==1){
			ptr->next=ptr->next->next;	
		}
		ptr=ptr->next; i++;
	}
}

int main(){
	node* head;
	head=(node*)malloc(sizeof(node));
	printf("Enter size of array: "); scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++) scanf("%d", &arr[i]);	
	head=create_list(n,arr);
	printlist(head);
	even(head);
	printlist(head);
	return 0;
}
