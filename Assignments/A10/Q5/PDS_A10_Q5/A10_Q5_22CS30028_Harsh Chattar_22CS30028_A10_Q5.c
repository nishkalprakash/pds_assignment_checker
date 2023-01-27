/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 10
Description :  
*/

#include <stdio.h>
#include <stdlib.h>

struct node1{
int data;
struct node1 *link;
};

struct node2{
int data;
struct node2 *link;
};

struct node3{
int data;
struct node3 *link;
};



struct node1 *createList1(int n,int A[]){
	struct node1 *head = NULL,*tail;
	head = malloc(sizeof(struct node1));
	head->data = A[0];
	tail = head;

for(int i=1;i<n;i++){
	tail->link = malloc(sizeof(struct node1));
	tail=tail->link;
	tail->data = A[i];
}
tail->link=NULL;
return head;
}

struct node2 *createList2(int n,int A[]){
	struct node2 *head = NULL,*tail;
	head = malloc(sizeof(struct node2));
	head->data = A[0];
	tail = head;

for(int i=1;i<n;i++){
	tail->link = malloc(sizeof(struct node2));
	tail=tail->link;
	tail->data = A[i];
}
tail->link=NULL;
return head;
}

struct node3 *createList3(int n,int A[]){
	struct node3 *head = NULL,*tail;
	head = malloc(sizeof(struct node3));
	head->data = A[0];
	tail = head;

for(int i=1;i<n;i++){
	tail->link = malloc(sizeof(struct node3));
	tail=tail->link;
	tail->data = A[i];
}
tail->link=NULL;
return head;
}


void printlist(struct node3 *I){
	struct node3 *temp = I;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp = temp->link;
	}
}

void addtoList(struct node3 *I,int d){
	struct node3 *temp3 = I;
	while(temp3!=NULL){
	temp3 = temp3->link;
}
	struct node3 *newNode = malloc(sizeof(struct node3));
	newNode->data = d;
	temp3->link = newNode;
	newNode->link = NULL;
	
	
	
}

void UnionList(struct node2 *b,struct node3 *unionhead){
	struct node3 *temp3 = unionhead;
	struct node2 *temp2 = b;
	while(temp2!=NULL){
		while(temp3!=NULL){
		if(temp2->data!=temp3->data) addtoList(unionhead,temp2->data);
	}
	}
}

int main(){

int n1,n2;
printf("Enter no. of elements in list 1 :");
scanf("%d",&n1);
int arr1[n1];
printf("Enter list1 elements :");
for(int i=0;i<n1;i++){
	scanf("%d",&arr1[i]);
}

printf("Enter no. of elements in list 1 :");
scanf("%d",&n2);
int arr2[n2];
printf("Enter list2 elements :");
for(int i=0;i<n2;i++){
	scanf("%d",&arr2[i]);
}

struct node1 *head1 = createList1(n1,arr1);
struct node2 *head2 = createList2(n2,arr2);
struct node3 *head3 = createList3(n1,arr1);
UnionList(head2,head3);

printlist(head3);







return 0;
}
