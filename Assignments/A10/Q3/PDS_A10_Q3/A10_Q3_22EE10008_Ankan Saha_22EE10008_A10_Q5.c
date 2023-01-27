/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 10
Description : Find duplicates, max and min from a list
*/

#include <stdio.h>											// Includes the standard IO header file
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *createlist(int n, int A[]){		// create a linked list
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

void printlist(struct node* I){				// print linked list
	struct node *list = I;

	while(list != NULL){
		printf("%d ", list->data);
		if(list->next == NULL){
			printf("\t...End of List\n");
		}
		list = list->next;
	}
}

struct node* insert(struct node *list, int n){			// function to insert into linked list
	struct node *temp = list, *new_ele;
	while(list->next != NULL){			// iterate till last
		list = list->next;
	}
	new_ele = (struct node *) malloc (sizeof(struct node));  // creating and inserting
	new_ele->data = n;
	new_ele->next = NULL;
	list->next = new_ele;
	return temp;
}

int count(struct node* list, int n){		// function to count occurances of n in list
	struct node *temp = list;
	int c = 0;
	while(temp != NULL){
		if(temp->data == n){
			c++;
		}
		temp = temp->next;
	}
	return c;
}


void func(struct node *list){			// main function (could've done this in main)
	struct node *temp=list, *dupl_list=NULL;
	int max = list->data, min = list->data;
	while(list != NULL){
		if(count(list, list->data)>1 && count(dupl_list, list->data) != 1){		// if count > 1 and if element not already present in the duplicate list
			if(dupl_list==NULL){		// at start, dupl_list is null, so we initiate if by manually inserting 1 element
				int A[1];
				A[0] = list->data;
				dupl_list = createlist(1, A);
			}
			else{
				dupl_list = insert(dupl_list, list->data);
			}
		}
		max = list->data > max ? list->data : max;		// max and min
		min = list->data < min ? list->data : min;
		list = list->next;
	}
	if(dupl_list == NULL){
		printf("The input list does not contain anu duplicate\n");
	}
	else{
		printf("\nThe input list contains duplicate numbers of: ");
		printlist(dupl_list);
	}
	printf("Minimum number is: %d\nMaximum number is: %d\n", min, max);
}

int main() {
	int n, A[100];
	printf("Enter number of elements : ");
	scanf("%d", &n);
	printf("Enter elements : ");
	for(int i = 0; i <n; i++){
		scanf("%d", &A[i]);
	}
	struct node *list = createlist(n, A);
	func(list);
	
	return 0;
}