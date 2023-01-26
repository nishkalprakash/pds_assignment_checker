/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 10
Description :  Storing Customer records in a linked list
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	int accno;
	char name[100];
	int balance;
}Customer;

struct node{
Customer data;
struct node *link;
};


void bubbleSort(Customer arr[], int size)   //bubble sort to arrange the array in ascending order
{
Customer temp;
for (int trial = 0; trial < size-1 ; trial++)
{ 
for ( int j = 0; j < size-1-trial; j++)
if ( arr[ j ].accno > arr[ j +1].accno ) 
{       temp = arr[ j +1] ;arr[ j +1] = arr[ j ] ;arr[ j ] = temp;
}
}
}

void printlist(struct node *c){
	struct node *temp = c;
	while(temp!=NULL){
		printf("%d ",(temp->data).accno);
		temp = temp->link; 
	} 
}
struct node *Max(struct node *I,int m){
	struct node *temp =I;
	struct node *max = temp;
	while(temp!=NULL){
	if((max->data).balance < (temp->data).balance && m!=(max->data).balance) max=temp;
	temp=temp->link;
	}
	return max;
}

void balanceDes(struct node *I){
	struct node *temp = I;
	int m = 0;
	while(temp!=NULL){
	struct node *nxtMax = Max(I,m);
	printf("%d %s %d \n",(nxtMax->data).accno,(nxtMax->data).name,(nxtMax->data).balance);
	m=(nxtMax->data).balance;
	temp=temp->link;
}
	
}

int main(){
	printf("Enter no. of customer records :");
	int n;
	scanf("%d",&n);
	Customer arr[n];
	for(int i=0;i<n;i++){
		char temp[100];
		scanf("%d",&arr[i].accno);
		scanf("%s",temp);
		strcpy(arr[i].name,temp);
		scanf("%d",&arr[i].balance);
	}
	bubbleSort(arr,n);    //after sorting we put the array elements in the list
	struct node *head = NULL,*tail;
	head = malloc(sizeof(struct node));
	head->data = arr[0];
	tail = head;

	for(int i=1;i<n;i++){	

		tail->link = malloc(sizeof(struct node));
		tail=tail->link;
		tail->data = arr[i];
	}
	tail->link=NULL;
	balanceDes(head);
	

	


return 0;
}
