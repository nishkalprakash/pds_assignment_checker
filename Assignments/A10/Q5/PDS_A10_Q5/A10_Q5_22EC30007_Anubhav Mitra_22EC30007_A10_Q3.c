/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 10
Description: Program to create union and intersection linked lists usin gfunctions
I have completed intersection but couldn't finish union

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int data;
	struct node* next;
} node;

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
	int n1, n2, data;
	printf("here\n");	
	scanf("%d %d", &n1, &n2);
	int arr1[n1];
	int arr2[n2];
	printf("came here\n");
	for (int i = 0; i < n1; i++) {
		scanf("%d", &arr1[i]);
	}
	for (int i = 0; i < n2; i++) {
		scanf("%d", &arr2[i]);
	}
	printf("came till here");

	node* head1 = createlist(n1, arr1);
	printf("came here");
	node* head2 = createlist(n2, arr2);
	int max = n1 > n2 ? n1 : n2;
	int arruni[max];
	int arrinter[max];
	int k = 0;
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			if (arr1[i] == arr2[j]) {
				arrinter[k++] = arr1[i];
				break;
			}
		}
	}
	node* inter = createlist (k, arrinter);

	printlist(inter);

}

