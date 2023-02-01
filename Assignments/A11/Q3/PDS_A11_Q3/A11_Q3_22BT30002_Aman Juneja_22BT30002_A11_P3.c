/*
Name:AMAN JUNEJA
ROLL NO : 22BT30002
SECTION :14
ASSIGNMENT : 11
QUESTION :inserting element into an orddered list
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


//structure defintion for creating a node
typedef struct ListNode{
	int data;
	struct ListNode* next;
}node;

//create list function
node *createlist(int n,int A[]){
	node *head=NULL;
	node *tail;
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


//function to print list
void printlist(node* L){
	node* temp=L;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}

//inserting a node in list to keep it ordered
node *insert(int m,node *head){
	node *new=(node *)malloc(sizeof(node));  //allocating space in heap for the new node
	new->data=m;								//alloting it data
	new->next=NULL;								//making it point to nothing

	if(head==NULL){								//if the list is empty
		head=new;
		return head;
	}

	node *ptr=head->next;			//creating ptr and prev to do the insertion procedure
	node *prev=head;

	//case1 m< head's data

	if(m < (head->data) ){
		new->next=head;
		head=new;
		return head;
	}

	//case2- m>head's data  but smaller than last data

	while(ptr!=NULL && (ptr->data) < m){
		ptr=ptr->next;
		prev=prev->next;
	}

	//case 3 m is greatest data				
	if(ptr==NULL){			
		prev->next=new;
	}

	prev->next=new;
	new->next=ptr;
	return head;

}

int main(){
	int n;
	printf("n = ");
	scanf("%d",&n);
	int arr[n];
	printf("LL[n] = ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	node *head=createlist(n,arr);

	int m;
	scanf("%d",&m);
	head=insert(m,head);
	printf("the list after inserting %d is : ",m);
	printlist(head);




	return 0;
}