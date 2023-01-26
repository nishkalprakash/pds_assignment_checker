/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 10
Description : Check if list is in ascending, descending or no order
*/

#include <stdio.h>											// Includes the standard IO header file
#include <stdlib.h>


struct node{		// structure
	int data;
	struct node *next;
};

struct node *createlist(int n, int A[]){		// function to create list
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

int check(struct node* list){
	int order = 0; 						// 1 for ascending, -1 for descending
	struct node *prev = list;
	list = list->next;					// we check from the 2nd element
	while(list != NULL){
		if(!order){
			order = list->data - prev->data > 0? 1 : -1;		// set order for the first time
		}
		else{
			if(order*(list->data - prev->data) < 0){		// if sign of difference and order are not same, then it is not sorted
				return 0;
			}
		}
		prev = list;			// increment prev and list
		list = list->next;
	}
	return order;
}

int main() {
	int n, A[10];
	printf("Enter number of elements : ");
	scanf("%d", &n);							// taking input
	printf("Enter elements : ");
	for(int i = 0; i <n; i++){
		scanf("%d", &A[i]);
	}
	struct node *list = createlist(n, A);
	int order = check(list);
	if(!order){									// printing
		printf("The input list L is not in sorted order\n");
	}
	else{
		printf("The input list L is in %s order\n", order>0 ? "ascending" : "descending");
	}
	return 0;
}