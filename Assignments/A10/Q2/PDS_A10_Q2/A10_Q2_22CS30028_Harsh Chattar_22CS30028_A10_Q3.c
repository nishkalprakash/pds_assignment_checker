/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 10
Description :  Checking if the given list is in ascending or descending or unosorted
*/


#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node *link;
};

int CheckAscending(struct node *temp,int n){   //checking for ascending order
	int flag=0;
	struct node *curr = temp->link;
	while(curr!=NULL){
		if((curr->data)>(temp->data)){
		flag++;
	}
		else return 10;
	temp = temp->link;
	curr = temp->link;	
}
if(flag==(n-1)){
		return 1;
	}

}

int CheckDescending(struct node *temp,int n){	//checking for descending order
	int flag=0; 
	struct node *curr = temp->link;
	while(curr!=NULL){
		if((curr->data)<(temp->data)){
		flag++;
	}
		else return 0;
	temp = temp->link;
	curr = temp->link;
}
if(flag==(n-1)){
		return -1;
	}
}

int main(){

int n;
printf("Enter no. of elements : ");
scanf("%d",&n);
int arr[n];
printf("Enter list elements :");
for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
}
struct node *head = NULL,*tail;
head = malloc(sizeof(struct node));
head->data = arr[0];
tail = head;

for(int i=1;i<n;i++){		//putting values in the list from a array
	tail->link = malloc(sizeof(struct node));
	tail=tail->link;
	tail->data = arr[i];
}
tail->link=NULL;
int result = 0;
for(int i=0;i<n;i++){
	if(arr[i]>arr[i+1]){
	result = CheckDescending(head,n);
	break;
}
	if(arr[i]<arr[i+1]){
	result = CheckAscending(head,n);
	break;
}
}


if(result==1) printf("The list is in ascending order");
if(result==0) printf("The list is unsorted");
if(result==-1) printf("The list is in descending order");


return 0;
}
