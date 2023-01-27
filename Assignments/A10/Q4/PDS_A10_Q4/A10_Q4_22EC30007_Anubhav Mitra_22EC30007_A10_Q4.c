/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 10
Description: Program to create a linked list of customer records sorted in ascending order, then print it in descending order. For the latter a recursive function has been used.

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct { // defining struct customer
	int acc_no;
	char name[50];
	int balance;
} customer;

typedef struct { // creating linked list structure
	customer c;
	struct node* next;
} node;

void printlist (node* head) { // printing list using recursion
	if (head == NULL) return; // base case for end of list
	printlist (head -> next); // recursive call for next element
	printf("%d %s %d\n", (head->c).acc_no, (head->c).name, (head->c).balance); // printing current details
}

node* record () { // creating record function
	printf("Creating node: \n");
	node* curr = (node*) malloc (sizeof(node));
	scanf("%d", &((curr -> c).acc_no));
	scanf("%s", (curr -> c).name);
	scanf("%d", &((curr -> c).balance));
	return curr; // creating records
}

int main() {
	int n;
	printf("Enter 1 to enter record, 0 to stop");
	if (n == 0) return 0;
	scanf("%d", &n); 
	node* head = (node*) malloc (sizeof(node));
	head -> next = NULL;
	node* tail = head;
	while (n!=0) {
		printf("Entering record: \n");
		node* curr = record ();
		node* find = head;
		node* w = (node*) malloc (sizeof(node));
		w = find -> next;
		while (find -> next != NULL && (w -> c).acc_no < (curr -> c).acc_no) find = find -> next;
		if (find -> next == NULL) { // updating tail in case it is the last element
			tail -> next = curr;
			tail = curr;
		}
		else {
			curr -> next = find -> next; // else inserting element 
			find -> next = curr;
		}
		printf("Enter 1 to enter record, 0 to stop");
		scanf("%d", &n);
	}
	printf("\n");
	printlist (head); // printing list in reverse order
	return 0;
}
