
/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 11
Description: Program to create a linked list, and then insert a new element in it. Assuming the list is initially in sorted order, the insertion is also made in sorted order.

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct { // defining struct node for linked list
	int data;
	struct node* next;
} node;

node* createlist (int n) { // function to create list

	int dat;
	node* head = (node*) malloc (sizeof(node));
	head -> next = NULL;
	node* curr = head;
	scanf("%d", &dat);
	curr -> data = dat;
	n--;
	while (n--) {
		scanf("%d", &dat);
		node* temp = (node*) malloc (sizeof(node));
		curr -> next = temp;
		temp -> data = dat;
		curr = temp;
	}
	return head;

} // dealing with head poiner first and then defining the rest of the list

void printlist (node* head) { // printing list using recursion
	if (head == NULL) return; 
	printf("%d ", head -> data); 
	printlist (head -> next); 
}

int main() {

	int n;
	printf("Enter number of elements in the linked list: ");
	scanf("%d", &n); // takin gnumber of elements

	node* head;

	if (n < 0) {
		printf("Invalid");
		return 0;
	} // invalid responses are dealt with 

	if (n != 0) {
		head = createlist (n);
	} // if initially list is non empty, it is created

	int data;
	printf("Enter element to be inserted: ");
	scanf("%d", &data); // data to be inserted is taken as input

	if (n == 0) {
		node* temp = (node*) malloc (sizeof(node));
		temp -> data = data;
		temp -> next = NULL;
		head = temp;
	} // case of empty list before is dealt with

	else if (data < head -> data) {
		node* temp = (node *) malloc (sizeof(node));
		temp -> data = data;
		temp -> next = head;
		head = temp;
	} // case of new element becoming the head is dealt with

	else {
		node* curr = head;
		node* forward = curr -> next;
		while (forward != NULL && data > forward -> data) {
			curr = forward;
			forward = forward -> next;
		}
		node* temp = (node *) malloc (sizeof(node));
		temp -> data = data;
		temp -> next = curr -> next;
		curr -> next = temp;
	} // all other cases are dealt with

	printf("List after insertion is: ");
	printlist (head); // final list is printed

	return 0;
}
