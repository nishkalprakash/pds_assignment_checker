/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 11
Description: Program to find and delete an element from a linked list. Appropriate functions have been used wherever required.

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct { // initialising node for linked list
	int data;
	struct node* next;
} node;

node* createlist (int n) { // funciton to create linked list

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
	return head; // dealing with head pointer first and then creating the rest of the list

}

void printlist (node* head) { // printing list using recursion
	if (head == NULL) return; 
	printf("%d ", head -> data); 
	printlist (head -> next); 
}

int main () {
	int n;
	printf("Enter number of elements in the linked list: ");
	scanf("%d", &n); // taking number of elements as input

	node* head;

	if (n <= 0) {
		printf("Invalid");
		return 0;
	} // invalid reponses are dealt with first

	head = createlist (n); // creating list and returning head to head pointer

	int data;
	printf("Enter element to be deleted: ");
	scanf("%d", &data); // entering element to be deleted into data

	if (head -> data == data) { 
		node* temp = head;
		head = temp -> next;
		temp -> next = NULL;
		free (temp);
	} // dealing with case of first element being the one to be deleted first by updating head

	else {

		node* curr = head;
		node* forward = head -> next; // else, two pointers are used

		while (forward != NULL && forward -> data != data) {
			curr = forward;
			forward = forward -> next;
		} // curr and forward are updated either till end of list is reached or corresponding element is found at forward

		if (forward == NULL) {
			printf("%d does not exist in the list", data);
			return 0;
		} // if end of list is reached, element does not exist in list

		else {
			curr -> next = forward -> next;
			forward -> next = NULL;
			free (forward);
		} // else, forward is deleted and rest of the list is restored

	}

	printf("Output after deleteting %d: ", data);
	printlist(head); // if element is found, the list is printed after deleting the appropriate node
	return 0;

}