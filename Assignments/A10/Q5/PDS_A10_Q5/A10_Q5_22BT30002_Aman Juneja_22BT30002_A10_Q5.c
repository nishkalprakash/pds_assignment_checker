/*
Name:AMAN JUNEJA
ROLL NO : 22BT30002
SECTION :14
ASSIGNMENT : 10
QUESTION :	to find intersection and union of given linked list
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct ListNode{
	int data;
	struct ListNode* next;
}node;

node * createlist(int n){
	node * head=NULL;
	node * tail;
	int i;

	if(n>0){
		head=(node *)malloc(sizeof(node));
		scanf("%d",&(head->data));
		tail=head;
		for(int i=1;i<n;i++){
			tail->next=(node *)malloc(sizeof(node));
			tail=tail->next;
			scanf("%d",&(tail->data));
		}
		tail->next=NULL;
	}
	return head;
}

node *union(node *L1,node *L2){

}

node *intersection(node *L1,node *L2){

}

int main(){
	int n1,n2;
	printf("enter the number of elements in the first list : ");
	scanf("%d",&n1);
	node *head1=createlist(n1);
	printf("enter the number of elements in second list : ");
	scanf("%d",&n2);
	node *head2=createlist(n2);

	node *UL=union(head1,head2);

	node *IL=intersection(head1,head2);


	return 0;
}


