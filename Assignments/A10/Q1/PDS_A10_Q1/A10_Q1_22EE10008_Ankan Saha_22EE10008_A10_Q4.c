/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 10
Description : Linked list manipulation, deleting the odd numbered elements
*/

#include <stdio.h>											// Includes the standard IO header file
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *createlist(int n, int A[]){			// creating the linked list structure
	struct node *head, *tail, *temp;

	head = (struct node *) malloc (sizeof(struct node));
	head->data = A[0];
	tail = head;

	for(int i = 1; i<n; i++){
		temp = (struct node *) malloc (sizeof(struct node));
		temp->data = A[i];
		tail->next = temp;
		tail = temp;
	}
	tail->next = NULL;
	return head;
}

void printlist(struct node* I){				// printing linked list
	struct node *list = I;

	while(list != NULL){
		printf("%d ", list->data);
		if(list->next == NULL){
			printf("\t...End of List\n");
		}
		list = list->next;
	}
}

void even(struct node* I){
	struct node *prev, *temp, *head;
	head = NULL, prev = NULL;

	for(int c = 1; I != NULL; c++){			// take counter variable c
		if(c%2 == 0){
			if(head == NULL){			// first even case, head is null and prev is null, so set them both the the first even case(I)
				head = I;
				prev = I;
				I = I->next;		// next I
				continue;
			}
			prev->next = I;			// prev will point to the current I
			prev = I;				// prev becomes I
			I = I->next;			// and I becomes next I
		}
		else{
			temp = I->next;		// if odd, store next element
			I->next = NULL;		// make current element point to NULL
			free(I);			// and free the memory
			I = temp;			// finally set I to the next element
		}
	}
	printlist(head);
}

int main() {
	int n, A[10];
	printf("Enter number of elements : ");
	scanf("%d", &n);				// taking input
	printf("Enter elements : ");
	for(int i = 0; i <n; i++){
		scanf("%d", &A[i]);
	}
	struct node *list = createlist(n, A);		// create
	printlist(list);
	even(list);			// call even function
	return 0;
}