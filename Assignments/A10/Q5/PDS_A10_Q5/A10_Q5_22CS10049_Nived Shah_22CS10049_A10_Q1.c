/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. : 10
Description: Find union and intersection of 2 lists
*/
#include <stdio.h>
#include <stdlib.h>
struct node{
	int d;
	struct node *next;
};
typedef struct node ELEMENT;

struct node *createList(int n){
	ELEMENT *head=NULL, *tail;
	int a[n+1];
	printf("Enter elements : ");
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	head=malloc(sizeof(ELEMENT));
	head->d=a[0];
	tail=head;
	a[n+1]=-999999;
	for(int i=1; a[i]!=-999999; i++){
		tail->next=malloc(sizeof(ELEMENT));
		tail=tail->next;
		tail->d=a[i];
	}
	tail->next=NULL;

	return(head);
}

int main(){
	int n1, n2;

	printf("Enter size of L1 and L2 successively = ");
	scanf("%d", &n1);
	scanf("%d", &n2);

	ELEMENT *L1=createList(n1);
	ELEMENT *L2=createList(n2);

	ELEMENT *t1, *t2;
	
	printf("\nL (intersection) = ");
	t1=L1;
	for(; t1!=NULL; t1=t1->next){
		t2=L2;
		for(; t2!=NULL; t2=t2->next){
			if(t1->d == t2->d)
				printf("%d ", t1->d);
		}
	}

	return 0;
}