/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 10
Description: Program to find max, min elements in linked list, and to find duplicates too. I am getting some segmentation faults due to reasons I can't figure pout but my logic seems to be correct.

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int data;
	struct node* next;
} node;

int main() {
	int n, i = 1, data;
	scanf("%d", &n);
	if (n == 0) {
		printf("Invalid input");
		return 0;
	}
	node* head = (node*) malloc (sizeof(node));
	head -> next = 	NULL;
	node* curr = (node*) malloc (sizeof(node));
	curr = head;
	scanf("%d", &(head -> data));
	int min = head -> data, max = head -> data;
	for (i = 1; i < n; i++) {
		printf("Enter data for element %d: ", i + 1);
		scanf("%d", &data);
		node* temp = (node*) malloc (sizeof(node));
		curr -> next = temp;
		temp -> data = n;
		temp -> next = NULL;
		curr = temp;
	}
	printf("Exited loop");
	curr = head;
	while (curr != NULL) {
		printf("%d ", curr -> data);
		curr = curr -> next;
	}
	curr = head;
	node* forward = (node*) malloc (sizeof(node));
	for (i = 0; i < n; i++) {
		forward = curr -> next;
		while (forward -> next != NULL) {
			if (curr -> data == forward -> data) {
				printf("%d ", curr -> data);
				break;
			}
		}
		curr = curr -> next;
	}
	curr = head -> next;
	for (i = 1; i < n; i++) {
		forward = curr -> next;
		min = (forward -> data < min) ? forward -> data : min;
		max = (forward -> data > max) ? forward -> data : max;
		curr = curr -> next;
	}
	printf("Minimum number is: %d\n", min);
	printf("Maximum number is: %d\n", max);
	return 0;
}
