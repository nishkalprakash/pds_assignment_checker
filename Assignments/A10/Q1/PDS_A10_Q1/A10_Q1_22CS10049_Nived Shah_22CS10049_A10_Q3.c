/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. : 10
Description: Create, print and modify list.
*/
#include <stdio.h>
#include <stdlib.h>
struct list{
	int d;
	struct list *next;
};
typedef struct list ELEMENT;

ELEMENT *createList(int n; int A[]){
	ELEMENT *head=NULL, *tail;
	head=malloc(sizeof(ELEMENT));
	head->d=A[0];
	tail=head;
	for(int i=1; A[i]!=-99999;i++){
		tail->next=malloc(sizeof(ELEMENT));
		tail=tail->next;
		tail->d=A[i];
	}
	tail->next=NULL;
} 

void printList(ELEMENT *l){
	ELEMENT *t;
	t=l;
	for(; t!=NULL; t=t->next)
		printf("%d", t->d);
	return;
}

void even(ELEMENT *list){
	ELEMENT *temp, *prev;
	if(list->d %2 ==0){
		temp=list;
		list=temp->next;
		free(temp);
	}
	temp=list;
	for(; temp!=NULL; temp=temp->next){
		if(temp->d % 2 ==0){

			free(temp);
		}
	}
	return;
}

int main(){
	int l;
	ELEMENT *head=NULL;
	ELEMENT *tail;
	printf("Enter the total number of elements = ");
	scanf("%d", &l);
	int a[l+1];
	for(int i=0; i<l;i++)
		scanf("%d", &a[i]);
	a[l]=-99999;

	ELEMENT *List=createList(l+1, a);
	printList(List);

	//ELEMENT *mList=even(List);
	
}