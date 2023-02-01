/*
Name:AMAN JUNEJA
ROLL NO : 22BT30002
SECTION :14
ASSIGNMENT : 11
QUESTION :deleting element into an orddered list
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

//deleting a node in list to keep it ordered
node *delete(int m,node *head){
	node *ptr=head->next;
	node *prev=head;
	//case 1 element at head
	if(head->data == m){
		head=ptr;
		free(prev);
		return head;
	}

	//case 2 element in middle or at end
	while(ptr->data!=m && ptr!=NULL){
		ptr=ptr->next;
		prev=prev->next;
	}

	prev->next=ptr->next;
	free(ptr);
	return head;

}

//function to find if the element exists or not in the list
int find(int m,node *head){
	node *ptr=head;
	while(ptr!=NULL){
		if(ptr->data==m){
			return 1;
		}
		ptr=ptr->next;
	}
	return 0;
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

	//checking if element exist or not and deleting it only it exists.
	if(find(m,head)){
		head=delete(m,head);
		printf("the list after deleting %d is : ",m);
		printlist(head);
	}
	else{
		printf("%d does not exist",m);
	}
	
	

	return 0;
}