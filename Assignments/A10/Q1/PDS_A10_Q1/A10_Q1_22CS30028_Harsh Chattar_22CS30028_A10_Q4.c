/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 10
Description :  Creating and modifying a list
*/


#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node *link;
};

struct node *createList(int n,int A[]){  //creating list from an array
	struct node *head = NULL,*tail;
	head = malloc(sizeof(struct node));
	head->data = A[0];
	tail = head;

for(int i=1;i<n;i++){
	tail->link = malloc(sizeof(struct node));
	tail=tail->link;
	tail->data = A[i];
}
tail->link=NULL;
return head;
}

void printlist(struct node *I){    //function to print the list
	struct node *temp = I;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp = temp->link;
	}
}

void even(struct node *I){
	struct node *temp = I;
	while(temp!=NULL){
		temp=temp->link;
	}
	
	

		
	
}

int main(){
int n;
printf("Enter n :");
scanf("%d",&n);

int arr[n];
printf("Enter List Elements:");		//storing elements in an array
for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
}
struct node *head = createList(n,arr);
even(head);
printlist(head);
	
return 0;
}
