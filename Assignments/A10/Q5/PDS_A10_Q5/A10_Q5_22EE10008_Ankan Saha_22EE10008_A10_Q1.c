/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 10
Description : list union and intersection
*/

#include <stdio.h>											// Includes the standard IO header file
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *createlist(int n, int A[]){
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

int check(struct node* L, int n){
	struct node *temp = L;
	int flag = 0;		//1 if n is found
	while(temp != NULL){
		if(temp->data == n){
			flag = 1;
			break
		}
		temp = temp->next;
	}
	return flag;
}

void union(struct node *l1, struct node *l2){
	struct node *t1 = l1; *t2 = l2;
}


int main() {
	
	
	return 0;
}