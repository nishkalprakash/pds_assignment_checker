/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 11
Description : Inserting an element into a sorted list
*/

#include <stdio.h>											// Includes the standard IO header file
#include <stdlib.h>

struct list {
	int data;
	struct list *next;
};

void printList(struct list* head){				// print linked list
	struct list *temp = head;

	while(temp != NULL){
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

struct list *createlist(int n, int *A){		// function to create list
	struct list *head, *tail, *temp;

	head = (struct list *) malloc (sizeof(struct list));
	head->data = A[0];
	tail = head;

	for(int i = 1; i<n; i++){
		temp = (struct list *) malloc (sizeof(struct list));
		temp->data = A[i];
		tail->next = temp;
		tail = temp;
	}
	tail->next = NULL;
	return head;
}

struct list *insert(struct list* head, int m){
	struct list *temp, *new_ele;

	new_ele = (struct list *) malloc (sizeof(struct list));
	new_ele->data = m;

	temp = head;
	if(temp->data > m){					// if insert at the begining
		new_ele->next = temp;
		head = new_ele;
	}
	else{
		struct list *prev;			// to keep track of the previous element
		while(temp->data < m){		// iterate till right place is found
			prev = temp;
			if(temp->next == NULL){
				break;
			}
			temp = temp->next;
		}
		if(temp->next == NULL){			// end of list
			if(temp->data > m){
				prev->next = new_ele;
				new_ele->next = temp;
			}
			else{
				temp->next = new_ele;
				new_ele->next = NULL;
			}
		}
		else{							// insert in between
			prev->next = new_ele;
			new_ele->next = temp;
		}
	}
	return head;
}

int main() {
	int n, *arr, m;

	printf("n = ");					// taking input
	scanf("%d", &n);

	arr = (int *) malloc (n*sizeof(int));

	printf("Elements : ");
	for(int i = 0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	printf("m = ");
	scanf("%d", &m);

	struct list* lis;
	lis = createlist(n, arr);

	printf("Before inserting : ");
	printList(lis);

	printf("After inserting : ");
	lis = insert(lis, m);
	printList(lis);

	printf("\n");
	return 0;
}