/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 10
Description: Program to create a linked list and then check whether it is in ascending order, descending order, or unorderered.

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct { // creating linked list structure
	int data;
	struct node* next;
} node;

int main() {
	int n, data; // n being number of elements
	node* head = (node*) malloc (sizeof(node)); // creating and allocating memory for head pointer
	head -> next = NULL; // pointing head to null
	printf("Enter the number of elements in the list: ");
	scanf("%d", &n); // taking number of elements as input
	if (n == 0) return 0; // dealing with empty list
	node* curr = (node*) malloc (sizeof(node)); // creating current node and pointing to head
	curr = head;
	printf("Enter data for element 1: "); // taking data for head as input
	scanf("%d", &(head -> data));
	for (int i = 1; i < n; i++) { // creating rest of the list
		node* temp = (node*) malloc (sizeof(node)); // creating new node
		printf("Enter data for element %d: ", i + 1);
		scanf("%d", &data);
		temp -> data = data;
		temp -> next = NULL; // initialising node
		curr -> next = temp; // pointing last to temp
		curr = temp; // updating curr
	}
	if (head -> next == NULL) { // dealing with single element
		printf("Ordering for single element does not make sense.");
		return 0;
	}
	curr = head;
	node* forward = (node*) malloc (sizeof(node));
	curr = head;
	forward = curr -> next; // creating forward node
	while (forward != NULL && (forward -> data < curr -> data)) { // checking for descending
		forward = forward -> next;
		curr = curr -> next;
	}
	if (forward == NULL) {
		printf("descending");
		return 0;
	}
	curr = head;
	forward = curr -> next;
	while (forward != NULL && (forward -> data > curr -> data)) { // checking for ascending
		forward = forward -> next;
		curr = curr -> next;
	}
	if (forward == NULL) { 
		printf("ascending");
		return 0;
	}
		
	printf("The input list L is not in sorted order"); // in case neither holds, no order
	return 0;
}
