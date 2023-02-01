/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 11
Description : Deleting elements from sorted list
*/

#include <stdio.h>											// Includes the standard IO header file
#include <stdlib.h>
#define MAX_LEN 100

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

struct list *delete(struct list* head, int m){
	struct list *temp;
	temp = head;

	if(temp->data == m){			// deletion at begining
		head = temp->next;
		free(temp);
	}
	else{
		struct list *prev;			// to keep track of the previous element
		while(temp->data != m){		// iterate till right place is found
			prev = temp;
			if(temp->next==NULL){
				break;
			}
			temp = temp->next;
		}
		if(temp->next == NULL){			// end of list
			if(temp->data == m){
				prev->next = NULL;
				free(temp);
				printList(head);
			}
			else{
				printf("%d does not exist\n", m);
			}
		}
		else{							// deletion in between
			prev->next = temp->next;
			free(temp);
			printList(head);
		}
	}
	return head;
}

int main() {
	int n, *arr, m;

	printf("n = ");					// taking input
	scanf("%d", &n);
	printf("Elements : ");

	arr = (int *) malloc (n*sizeof(int));

	for(int i = 0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	printf("m = ");
	scanf("%d", &m);

	struct list* lis;
	lis = createlist(n, arr);

	printf("Before deletion : ");
	printList(lis);

	printf("After deletion : ");
	lis = delete(lis, m);
	
	return 0;
}