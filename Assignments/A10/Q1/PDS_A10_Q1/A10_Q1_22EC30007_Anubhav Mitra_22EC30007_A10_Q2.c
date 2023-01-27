/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 10
Description: Program to create a list, then remove even elements, and finally print it.

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int data;
	struct node* next;
} node;

void even (node* head) {
	node* curr = (node*) malloc (sizeof(node));
	curr = head;
	node* forward = curr -> next;
	while (curr != NULL) {
		while (forward -> data % 2 != 0 && forward != NULL) {
			curr = curr -> next;
			forward = forward -> next;
		}
		if (forward == NULL) break;
		curr -> next = forward -> next;
		forward -> next = NULL;
		free (forward);
	}
}

node* createlist (int n, int arr[]) {
	node* head = (node*) malloc (sizeof(node));
	head -> next = NULL;
	node* curr = (node*) malloc (sizeof(node));
	curr = head;
	int i = 0;
	curr -> data = arr[i++];
	n--;
	while (n--) {
		node* temp = (node*) malloc (sizeof(node));
		curr -> next = temp;
		temp -> data = arr[i++];
		curr = temp;
	}
	return head;
}

void printlist (node* head) { // printing list using recursion
	if (head == NULL) return; 
	printf("%d ", head -> data); 
	printlist (head -> next); 
}
int main() {
	// khud head
	// khud tail
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", arr + i);
	}
	node* head = createlist (n, arr);
	printlist (head);
	/* node* curr = (node*) malloc (sizeof(node));
	if (head -> data %2 == 0) {
		curr = head;
		head = head -> next;
		curr -> next = NULL;
		free (curr);
	}
	curr = head;
	node* forward = (node*) malloc (sizeof(node));
	forward = curr -> next;
	while (forward -> next != NULL) {
		curr = curr -> next;
		forward = forward -> next;
	}
	if (forward -> data % 2 == 0) {
		curr -> next = forward -> next;
		forward -> next = NULL;
		free (forward);
	}
	even (head);
	printlist (head); */
}
