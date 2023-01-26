/*
Name:AMAN JUNEJA
ROLL NO : 22BT30002
SECTION :14
ASSIGNMENT : 10
QUESTION :TO FIND If given list is sorted or not. 

*/
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

//including important header files

//creating structure for node of list
typedef struct ListNode{
	int data;
	struct ListNode* next;
}node;

//function for creating linked list 
node * createlist(int n){
	node *head=NULL;
	node *tail;
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

//function to check if any duplicates or not
void duplicates(node *head){
	int dup[10]={0};
	node *temp=head;
	while(temp!=NULL){
		int a=temp->data;
		dup[a]++;
		temp=temp->next;
	}
	int flag=0;
	printf("duplicates : ");
	for(int k=0;k<10;k++){
		if(dup[k]>1){
			flag=1;
			printf("%d ",k);
		}
	}
	if(flag==0){
		printf("NONE\n");
	}
}


//function to get max and min numbers
void maxmin(node *head){
	int max=INT_MIN;
	int min=INT_MAX;
	node *temp=head;
	while(temp!=NULL){
		if(temp->data>max){
			max=temp->data;
		}
		if(temp->data<min){
			min=temp->data;
		}
		temp=temp->next;
	}
	printf("\nmaximum number is : %d\n",max);
	printf("\nminimum number is : %d\n",min);
}

//driver code
int main(){

	int n;
	printf("enter number of elements : ");
	scanf("%d",&n);
	node *head = createlist(n);			//creating list with head as pointer using creatlist function
	duplicates(head);			//calling duplicates function
	maxmin(head);				//calling maxmin function.

	return 0;
}