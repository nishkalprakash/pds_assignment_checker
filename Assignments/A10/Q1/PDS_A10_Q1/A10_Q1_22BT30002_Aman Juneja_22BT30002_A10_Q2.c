/*
Name:AMAN JUNEJA
ROLL NO : 22BT30002
SECTION :14
ASSIGNMENT : 10
QUESTION :TO FIND If given list is sorted or not. 
*/
#include<stdio.h>
#include<stdlib.h>

//structure for making node of list
typedef struct ListNode{
	int data;
	struct ListNode* next;
}node;

//function to create list from given array of integers
node * createlist(int n,int A[]){
	node * head=NULL;
	node * tail;
	int i;

	if(n>0){
		head=(node *)malloc(sizeof(node));
		head->data=A[0];
		tail=head;
		for(int i=1;i<n;i++){
			tail->next=(node *)malloc(sizeof(node));
			tail=tail->next;
			tail->data=A[i];
		}
		tail->next=NULL;
	}
	return head;
}

//function to printlist
void printlist(node* L){
	node* temp=L;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}


// keep even nodes remove odd nodes 
void even(node *L){
	int idx=1;
	L=L->next;
	node *ptr=L;
	node *prev=NULL;
	while(ptr!=NULL){
		if(idx%2==0){
			prev->next=ptr->next;
		}
		prev=ptr;
		ptr=ptr->next;
		idx++;
	}
}

//driver code
int main(){
	int arr[10];
	int n;
	printf("enter value of n : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	node * head = createlist(n,arr);
	printlist(head);
	even(head);
	printf("\n");
	printlist(head->next);


	return 0;
}