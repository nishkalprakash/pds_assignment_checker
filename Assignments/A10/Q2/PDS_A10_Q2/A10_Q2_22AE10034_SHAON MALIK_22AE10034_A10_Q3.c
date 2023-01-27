/*
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No :10
 Question No :1
 Description: to check whether a given list is in ascending or descending order
 */


#include <stdio.h>
#include <stdlib.h>

struct list{
	int data;
	struct list* next;
};

typedef struct list ELEMENT; // defining list elements as data type

ELEMENT* create_list(int n)
{
	ELEMENT* head=(ELEMENT*)malloc(sizeof(ELEMENT)),*temp,*tail;
	temp=head;
	for(int i=0;i<n;i++){
		scanf("%d",&temp->data);
		 tail=(ELEMENT*)malloc(sizeof(ELEMENT));
		temp->next=tail;
		temp=temp->next;	
	}
	tail->next=NULL;
	return head;
}

int check_asc(ELEMENT* head){
	int flag=1;
	ELEMENT* temp=head;
	while(temp->next->next!=NULL){
		if(temp->data > temp->next->data)
		{
			flag=0;
			break;
		}
		temp=temp->next;
	}
	return flag;
}


int check_des(ELEMENT* head){
	int flag=1;
	ELEMENT* temp=head;
	while(temp->next!=NULL){
		if(temp->data < temp->next->data)
		{
			flag=0;
			break;
		}
		temp=temp->next;
	}
	return flag;
}


int main(){
	int n;
	printf("enter number of elements");
	scanf("%d",&n);
	ELEMENT* h=create_list(n);

	int ascending=check_asc(h);
	int descending=check_des(h); 
	if(ascending==1 && descending==0)
		printf("the input list is in ascending order");
	if(ascending==0 && descending==1)
	    printf("the input list is in descending order");
	 if(ascending==0 && descending==0)
		printf("the input list is not in sorted order");
}

